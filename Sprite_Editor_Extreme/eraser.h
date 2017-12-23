#ifndef ERASER_H
#define ERASER_H
#include <tool.h>

//Eraser class, which sets the color of the clicked pixel to (0,0,0,0)
class Eraser : public Tool{
public:
    Eraser();
     ~Eraser();
    void virtual applyTool(Grid*, QPointF, QMouseEvent*, QColor, int, Project*) override;
private:
    QPointF lastPoint;

};

#endif // ERASER_H
