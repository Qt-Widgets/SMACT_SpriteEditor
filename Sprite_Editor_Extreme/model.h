#ifndef MODEL_H
#define MODEL_H
#include <QMouseEvent>
#include <vector>
#include <project.h>
#include <grid.h>
#include <tool.h>
#include <QTimer>

class Model // the model updates the view by sending signals
{

private:
    Project * project;
    Tool * currentTool;
    std::vector<Tool*> tools;
    QTimer timer;


public:
    Model();
    Model(int,int,int);
    Model(const Model&);
    Model & operator=(const Model&);
    void swap(Model&);
    ~Model();
    Project * getProject();
    void rotateImage(int);
    void changeTool(int);
    Tool * getCurrentTool();

};

#endif // MODEL_H
