
#include "controller.h"
#include <vector>

Controller::Controller(MainWindow * w)
{
   this->view = w;
   QObject::connect(w, &MainWindow::sendMouseInput, this, &Controller::receiveMouseInput);
   QObject::connect(w, &MainWindow::sendButtonInput, this, &Controller::receiveButtonInput);
   QObject::connect(w, &MainWindow::sendColorChange, this, &Controller::receiveColorChange);
   QObject::connect(w, &MainWindow::sendPropertyChange, this, &Controller::receivePropertyChange);
   QObject::connect(this, &Controller::sendImage, w, &MainWindow::updateScreen);
   QObject::connect(this, &Controller::sendColor, w, &MainWindow::updateColor);
   emit sendImage(model.getProject()->getCurrentFrame()->getImage());
   drawing = false;

}

Controller::~Controller(){

}

void Controller::receivePropertyChange(Property p){
    if(p.values.size()>0){
        if(p.name.toStdString().compare("brushSize")==0){
            if(p.values.front()>0){
                model.getProject()->getCurrentFrame()->setDrawScale(p.values.front());
            }
        }
        if(p.name.toStdString().compare("canvasSize")==0){
            model.getProject()->setCanvasSize(p.values[0],p.values[1]);
            emit sendImage(model.getProject()->getCurrentFrame()->getImage());

        }
    }
}

void Controller::receiveMouseInput(QPointF point, QMouseEvent *event)
{

    if( model.tool() == "brush" ){ // this way we can capture input on other portions of the form
        //Also use to check what tool is selected
        if(model.getProject()->getCurrentFrame()->containsCoordinate(point.x(),point.y())){ // restricts the action to only when in the drawing area.
            if(event->type() == QEvent::MouseButtonPress && !drawing) // other wise we would be updating the image every time a mouse event was fired
            {
                drawing = true;
                model.drawPixel(point.x(),point.y());
                lastPoint = point;
            }else if(drawing && event->type() == QEvent::MouseMove)
            {
                model.drawLine(lastPoint,point);
                lastPoint = point;
            }else if(drawing && event->type() == QEvent::MouseButtonRelease)
            {
                drawing = false;\
            }
            emit sendImage(model.getProject()->getCurrentFrame()->getImage());
      }
    }


}

void Controller::receiveButtonInput(QToolButton *button)
{
    std::string name = button->objectName().toStdString();
    // decode buttons here
    //std::cout << button->objectName().toStdString() << std::endl;
    if(name == "rotate_Right_Button")
    {
        model.rotateImage(90);
    }
    if(name == "brush_Button"){
        model.changeTool(0);
    }
    if(name  == "rotate_Left_Button")
    {
        model.rotateImage(-90);
    }
    emit sendImage(model.getProject()->getCurrentFrame()->getImage());
}

void Controller::receiveColorChange(QLabel * button){ // used for the color picker
    QString str = button->objectName();
    int x =  QString::compare(str, QString::fromStdString("leftColor"), Qt::CaseInsensitive);
    if(x == 0){
        QColor c = QColorDialog::getColor(Qt::white);
        model.setColor(c);
        emit sendColor(c);
    }
}

