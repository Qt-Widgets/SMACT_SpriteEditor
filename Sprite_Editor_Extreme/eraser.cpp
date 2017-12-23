#include "eraser.h"

Eraser::Eraser(){}

Eraser::~Eraser(){}

//The Eraser tool erases a single pixel at the clicked point and continuously
//erases pixels as the mouse is dragged as long as the button is held down.
void Eraser::applyTool(Grid* frame, QPointF mousePosition, QMouseEvent* event, QColor, int brushSize, Project* p){
    if (frame->containsCoordinate(mousePosition.x(), mousePosition.y())){ // Restricts the action to only when in the drawing area.
        QColor c(0,0,0,0);

        if (event->type() == QEvent::MouseButtonPress && !drawing){ // Don't update image every time mouse event is fired
            p->addEdit();
            drawing = true;
            frame->setPixelColor(mousePosition.x(), mousePosition.y(), c, brushSize);
            lastPoint = mousePosition;
        }else if (drawing && event->type() == QEvent::MouseMove){
              frame->drawLinePixels(lastPoint, mousePosition, c, brushSize);
              lastPoint = mousePosition;
        }
    }
    if (drawing && event->type() == QEvent::MouseButtonRelease){
        drawing = false;
    }
}
