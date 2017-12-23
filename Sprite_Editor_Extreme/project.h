#ifndef PROJECT_H
#define PROJECT_H

#include <QPolygon>
#include <QString>
#include <QImage>
#include <QStack>
#include <QHash>
#include <vector>
#include <grid.h>

//The project represents a sprite. A sprite is a collection of grids. Also a buffer for history of all frames
//and edits made on the sprite
class Project{
private:
    std::vector<Grid*> frames;
    QHash<unsigned int,QStack<Grid*>> before;
    QHash<unsigned int,QStack<Grid*>> after;
    QPair<int,int> canvasSize;
    QPair<int,int> imageSize;
    unsigned int workingframe=0;

public:
    Project();
    ~Project();
    Project(const Project& other);
    Project& operator=(const Project&);

    void swap(Project&);
    void clear();
    void addEdit();
    void changeFrame(unsigned int frameNumber);
    void removeFrame(unsigned int);
    void addNewFrame(Grid *grid);
    void addEmptyFrame();
    void deleteCurrentFrame();
    void carryOverNewFrame(const Grid& previous);
    void setCanvasSize(int,int);
    void undo();
    void redo();
    bool next();
    bool previous();

    QPair<int,int> getCanvasSize();
    QString toString();
    Grid * getCurrentFrame();
    std::vector<Grid*> getAllFrames();
    int getWorkingFrame();

};

#endif // SPRITE_H
