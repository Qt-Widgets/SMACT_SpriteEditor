#include "model.h"
#include <brush.h>
#include <eraser.h>
#include <fillbucket.h>
#include <polygonbrush.h>


//This class represents the project as a collection of frames and holds all configuration settings for the
//application
Model::Model(){
    project = new Project;
    currentColor = Qt::black;
    filterColor = Qt::white;
    brushSize = 1;

    //create our user tools

    tools.push_back(new Brush);
    tools.push_back(new Eraser);
    tools.push_back(new FillBucket);
    tools.push_back(new PolygonBrush);
    currentTool = tools.front(); // set the default tool
}

//copy constructor
Model::Model(const Model& other){
    this->project = other.project;
    this->tools = std::move(other.tools);
    this->currentTool = other.currentTool;

}

//assignment operator override
Model& Model::operator=(const Model& other){
    Model temp(other);
    this->swap(temp);
    return *this;
}

//custom swap method
void Model::swap(Model& other){
    std::swap(currentTool,other.currentTool);
    std::swap(tools,other.tools);
    std::swap(project,other.project);
}

//destructor
Model::~Model(){
    for(auto it = tools.begin(); it < tools.end(); it++){
        delete *it;
    }
    delete project;
}

Project* Model::getProject(){
    return project;
}

void Model::rotateImage(int degrees){
    project->getCurrentFrame()->rotateImage(degrees);
}

//switch over the tool in use
void Model::changeTool(int i){
    if(i==0){
        currentTool=tools[0];
    } else if (i == 1) {
        currentTool = tools[1];
    } else if (i == 2){
        currentTool = tools[2];
    } else if (i == 3){
        currentTool = tools[3];
    }
}

void Model::setBrushSize(int size){
    brushSize = size;
}

int Model::getBrushSize(){
    return brushSize;
}

QColor Model::getColor(){
    return currentColor;
}

QColor Model::getFilterColor(){
    return filterColor;
}

void Model::setColor(QColor c){
    currentColor = c;
}

void Model::setFilterColor(QColor c) {
    filterColor = c;
}

Tool * Model::getCurrentTool(){
    return currentTool;
}
