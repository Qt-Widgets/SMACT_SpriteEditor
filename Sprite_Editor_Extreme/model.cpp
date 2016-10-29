#include "model.h"
#include <brush.h>

Model::Model()
{
    project = new Project();
    setColor(Qt::white);
    Tool * brush = new Brush();
    tools.push_back(brush);
    currentTool = brush; // need to decide on the default tool
}

Model::~Model(){
    delete project;
}

void Model::setColor(QColor q){
    currentColor=q;
}

QColor Model::getColor(){
    return currentColor;
}

void Model::drawPixel(int x, int y){ // this will be repurposed elsewhere

    if(project->getCurrentFrame()->containsCoordinate(x,y)){
         project->getCurrentFrame()->setPixelColor(x,y,currentColor);
    }
}

void Model::drawLine(QPointF lastPoint, QPointF endPoint){

    if(project->getCurrentFrame()->containsCoordinate(lastPoint.x(),lastPoint.y()) && project->getCurrentFrame()->containsCoordinate(endPoint.x(),endPoint.y())){
         project->getCurrentFrame()->drawLinePixels(lastPoint,endPoint,currentColor);
    }
}

Project* Model::getProject(){
    return project;
}

void Model::rotateImage(int degrees){
    project->getCurrentFrame()->rotateImage(degrees);
}

void Model::changeTool(int i){
    if(i==0){
        currentTool=tools[0];
    }
}

Tool * Model::getCurrentTool(){
    return currentTool;
}



