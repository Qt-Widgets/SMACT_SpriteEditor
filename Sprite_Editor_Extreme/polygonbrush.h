#ifndef POLYGONBRUSH_H
#define POLYGONBRUSH_H

#include <grid.h>
#include <QPoint>
#include <tool.h>
#include <vector>

//The polygon tool which creates a polygon by first creating points through click events
//and then right clicking to connect the points
class PolygonBrush : public Tool{
public:
    PolygonBrush();
    ~PolygonBrush();
    void virtual applyTool(Grid*, QPointF, QMouseEvent*, QColor, int, Project*) override;


private:
    std::vector<QPointF> points;
    std::vector<QColor> colors;
};

#endif // POLYGONBRUSH_H
