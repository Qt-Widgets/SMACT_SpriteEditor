#include "controller.h"

Controller::Controller(MainWindow * w){
    model = new Model;

    //connect everything
    QObject::connect(w, &MainWindow::sendMouseInput, this, &Controller::receiveMouseInput);
    QObject::connect(w, &MainWindow::sendButtonInput, this, &Controller::receiveButtonInput);
    QObject::connect(w, &MainWindow::sendPropertyChange, this, &Controller::receivePropertyChange);
    QObject::connect(w, &MainWindow::sendSaveAs, this, &Controller::receiveSaveAs);
    QObject::connect(w, &MainWindow::sendExportGif, this, &Controller::receiveExport);
    QObject::connect(w, &MainWindow::sendOpenProj, this, &Controller::receiveOpenProj);
    QObject::connect(this, &Controller::sendImage, w, &MainWindow::updateScreen);
    QObject::connect(this, &Controller::sendFrames, w, &MainWindow::updateFrames);
    QObject::connect(this, &Controller::sendFramesForExport, w, &MainWindow::exportGif);
    QObject::connect(this, &Controller::sendNewFrame, w, &MainWindow::addFrameToLayout);
    QObject::connect(this, &Controller::saveAs, w, &MainWindow::saveAsSelected);
    QObject::connect(this, &Controller::sendColor, w, &MainWindow::updateColor);
    QObject::connect(this, &Controller::sendFilterColor, w, &MainWindow::updateFilterColor);
    QObject::connect(this, &Controller::sendPreviewImage, w->getPreview(), &PreviewWindow::updatePreview);
    QObject::connect(this, &Controller::sendActiveTool, w, &MainWindow::setActiveButton);
    QObject::connect(&timer, &QTimer::timeout, this, &Controller::timeoutSendImage);
    QObject::connect(this, &Controller::sendDeleteFrame, w, &MainWindow::deleteFrame);
    QObject::connect(w, &MainWindow::enableDraw, this, &Controller::enableDraw);
    QObject::connect(w, &MainWindow::disableDraw, this, &Controller::disableDraw);

    //send the initial state the to the view
    emit sendImage(model->getProject()->getCurrentFrame()->getImage());
    emit sendNewFrame(model->getProject()->getCurrentFrame()->getImage());
    emit sendColor(model->getColor());
    emit sendFilterColor(model->getFilterColor());
    emit sendActiveTool(0);

    drawing = false;
    allowDrawing = true;
}

Controller::~Controller(){
    delete model;
}

// Handles exporting a GIF
void Controller::receiveExport(){
    std::vector<QImage> frames;
    std::vector<Grid*> temp = model->getProject()->getAllFrames();
    for(std::vector<Grid*>::iterator it = temp.begin(); it != temp.end(); ++it){
        Grid * g = *it;
        frames.push_back(*(g->getImage()));
    }
    emit sendFramesForExport(frames);
}

// Handles opening a project
void Controller::receiveOpenProj(QString heightWidth, QString numFrames, QString frames){
    QStringList list;
    list = heightWidth.split(QRegularExpression("\\s+"));
    int height = list.takeFirst().toInt();
    int width = list.takeLast().toInt();

    Project pro;
    *model->getProject()=pro;

    QStringList pixels;
    int parse = numFrames.toInt();
    QRegularExpression re("\\d+ \\d+ \\d+ \\d+ "); // Regex to parse all the pixels
    QRegularExpressionMatchIterator regIt = re.globalMatch(frames);
    while(regIt.hasNext()){
        QRegularExpressionMatch match = regIt.next();
        pixels.append(match.capturedTexts());
    }

    QStringList frameList;
    QString currFrame;
    QStringList::iterator listIt = pixels.begin(); // Add correct number of pixels to a frame
    for(int z = 0; z < parse; z++){
        for(int i = 0; i < (height*width); i++){
            currFrame += *listIt;
            listIt++;
        }
        frameList.append(currFrame);
        currFrame = "";
    }

    model->getProject()->setCanvasSize(width,height);
    listIt = frameList.begin();
    for(int i = 0; i < parse; i++){ // Create the frames
        Grid * grid = new Grid(width,height);
        grid->fromString(*listIt);
        listIt++;
        model->getProject()->addNewFrame(grid);
        emit sendNewFrame(grid->getImage());
    }
    model->getProject()->removeFrame(0); // Remove temp frame
    model->getProject()->changeFrame(0); // Set default frame back to 0
    emit sendImage(model->getProject()->getCurrentFrame()->getImage());
    emit sendColor(model->getColor());
    emit sendFilterColor(model->getFilterColor());
    emit sendActiveTool(0);
    sendAllFrame();
}

// Sends all the frames to the display
void Controller::sendAllFrame(){
    std::vector<QImage> frames;
    std::vector<Grid*> temp = model->getProject()->getAllFrames();
    for(std::vector<Grid*>::iterator it = temp.begin(); it != temp.end(); ++it){
        Grid * g = *it;
        frames.push_back(*(g->getImage()));
    }
    emit sendFrames(frames, model->getProject()->getWorkingFrame());
}

// Disables drawing
void::Controller::disableDraw(){
    this->allowDrawing = false;
}

// Enables drawing
void::Controller::enableDraw(){
    this->allowDrawing = true;
}

// Handles when a save is attempted
void Controller::receiveSaveAs(){
    emit saveAs(model->getProject()->toString());
}

// Handles when a property is changed
void Controller::receivePropertyChange(Property p){
    if(p.values.size()>0){
        if(p.name.toStdString().compare("brushSize")==0){
            if(p.values.front()>0){
                model->setBrushSize(p.values.front());
            }
        }
        else if(p.name.toStdString().compare("framerate")==0){
            if(this->timer.isActive()){
                if(p.values.front()!=0){
                     this->timer.setInterval(1/p.values.front()*10);
                }
            }
        }

        else if(p.name.toStdString().compare("canvasSize")==0){
            model->getProject()->setCanvasSize(p.values[0],p.values[1]);
            emit sendImage(model->getProject()->getCurrentFrame()->getImage());
            sendAllFrame();
        }
        else if (p.name.toStdString().compare("carryOverBox") == 0) {
            if (p.values.front() == 0) {
                addBlankFrame = false;
            }else if (p.values.front() == 2) {
                addBlankFrame = true;
            }
        }
        else if (p.name.toStdString().compare("colorFilterBox") == 0) {
            if (model->getProject()!= nullptr && model->getProject()->getCurrentFrame()!= nullptr) {
                if (p.values.front() == 0) {
                    model->getProject()->getCurrentFrame()->removeFilter();
                    emit sendImage(model->getProject()->getCurrentFrame()->getImage());
                    sendAllFrame();
                }else if (p.values.front() == 2) {
                    model->getProject()->getCurrentFrame()->applyFilter(model->getFilterColor());
                    emit sendImage(model->getProject()->getCurrentFrame()->getImage());
                    sendAllFrame();
                }
            }
        }
    }
}

// Handles mouse input
void Controller::receiveMouseInput(QPointF point, QMouseEvent *event){
    if (allowDrawing){
        if(model->getCurrentTool()!=nullptr){
            if(model->getProject()!=nullptr){
                Tool * tool = model->getCurrentTool();
                if(model->getProject()->getCurrentFrame()!=nullptr){
                    tool->applyTool(model->getProject()->getCurrentFrame(),point, event,model->getColor(),model->getBrushSize(), model->getProject());
                    emit sendImage(model->getProject()->getCurrentFrame()->getImage());
                    sendAllFrame();
                }
            }
        }
    }
}

// Decode buttons here
void Controller::receiveButtonInput(QWidget * child){
    QLabel * label = dynamic_cast<QLabel*>(child); // type check the input
    if(label!=NULL){
        QString str = label->objectName();
        int x =  QString::compare(str, "leftColor", Qt::CaseInsensitive);
        if(x == 0){
            this->disableDraw();
            int oldbrush = model->getBrushSize();
            QColor c = QColorDialog::getColor(Qt::white);
            model->setBrushSize(oldbrush);
            this->enableDraw();
            if (c.isValid())
            {
                model->setColor(c);
                emit sendColor(model->getColor());
                return;
            }
        }
        x =  QString::compare(str, "colorFilter", Qt::CaseInsensitive);
        if(x == 0){
            this->disableDraw();
            QColor c = QColorDialog::getColor(Qt::white);
            this->enableDraw();
            if (c.isValid())
            {
                model->setFilterColor(c);
                emit sendFilterColor(model->getFilterColor());
            }
        }
        return;
    }
    QToolButton * button = dynamic_cast<QToolButton*>(child);
    if(button!=NULL){// there's a generic way to do this
        decodeAction(button->objectName());
    }
}

int animation_counter = 0;
//Handles displaying the preview
void Controller::timeoutSendImage(){
    std::vector<Grid*> g = model->getProject()->getAllFrames();
    // might want to send a pointer of the frames so we aren't copying the vector every time.

    int size = g.size();
    if(animation_counter < size){
        emit sendPreviewImage(&(*g[animation_counter]->getImage()));
        animation_counter++;
    }else{
        animation_counter = 0;
    }
}


//decode buttons here:
void Controller::decodeAction(QString n){
    std::string name = n.toStdString();

    if(name == "rotate_Right_Button"){
        model->getProject()->addEdit();
        model->rotateImage(90);
    }else if(name  == "rotate_Left_Button"){
        model->getProject()->addEdit();
        model->rotateImage(-90);
    }else if(name  == "flip_Horizontally"){
        model->getProject()->addEdit();
        model->getProject()->getCurrentFrame()->flipImage("hor");
    }else if(name  == "flip_Vertically"){
        model->getProject()->addEdit();
        model->getProject()->getCurrentFrame()->flipImage("vert");
    }else if(name == "brush_Button"){
        model->changeTool(0);
        emit sendActiveTool(0);
    }else if (name == "eraser_Button"){
        model->changeTool(1);
        emit sendActiveTool(1);
    }else if (name == "fill_Bucket_Button"){
        model->changeTool(2);
        emit sendActiveTool(2);
    }else if (name == "rectangle_button"){
        model->changeTool(3);
        emit sendActiveTool(3);
    }else if( name == "play_button"){
        timer.start(100);
    }else if( name == "next_frame_button"){
        model->getProject()->next();
    }else if( name == "previous_frame_button"){
        model->getProject()->previous();
    }else if(name == "add_frame_button"){
        if (addBlankFrame){
            model->getProject()->addEmptyFrame();
        }else{
            model->getProject()->carryOverNewFrame(*(model->getProject()->getCurrentFrame()));
        }
        emit sendNewFrame(model->getProject()->getCurrentFrame()->getImage());
    }else if(name == "delete_Frame_Button"){
        if(model->getProject()->getAllFrames().size() > 1){
            emit sendDeleteFrame(model->getProject()->getWorkingFrame());
            model->getProject()->deleteCurrentFrame();
        }
    }else if(name == "undo_button"){
        model->getProject()->undo();

    }else if(name == "redo_button"){
        model->getProject()->redo();
    }
    emit sendImage(model->getProject()->getCurrentFrame()->getImage());
    sendAllFrame();
    return;
}
