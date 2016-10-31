#include "project.h"

Project::Project()
{
    currentFrame = new Grid;
    frames.push_back(*this->currentFrame);
}

Project::~Project(){
    delete currentFrame;
}

Grid * Project::getCurrentFrame(){
    return currentFrame;
}

void Project::addEmptyFrame(){


}

void Project::setCanvasSize(int w, int h){
   canvasSize.first=w;
   canvasSize.second=h;
   currentFrame->resize(w,h);
}

void Project::addNewFrame(Grid * grid){
    currentFrame = grid;
    frames.push_back(*currentFrame);
}

void Project::removeFrame(unsigned int frameIndex){
    frames.erase(frames.begin() + frameIndex);//might need offset of 1

}

std::vector<Grid> Project::getAllFrames(){
    std::vector<Grid> grid;
    return grid;

}

void Project::changeFrame(unsigned int frameNumber){
    if(frameNumber < this->frames.size()){
        this->currentFrame=&frames[frameNumber];
    }
}
