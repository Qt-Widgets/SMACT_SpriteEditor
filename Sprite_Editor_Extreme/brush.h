#ifndef BRUSH_H
#define BRUSH_H
#include <tool.h>

//Brush class, which draws a single pixel at clicked point, and can draw continuously
//if the mouse is dragged
class Brush : public Tool{
public:
    Brush();
    ~Brush();
    void virtual applyTool(Grid*, QPointF, QMouseEvent*, QColor, int, Project*) override;
private:
    QPointF lastPoint;
};

#endif // BRUSH_H
