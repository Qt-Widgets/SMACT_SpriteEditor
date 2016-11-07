#include "polygonbrush.h"
#include <QRgb>
#include <QImage>

PolygonBrush::PolygonBrush()
{
    drawing = false;
}

PolygonBrush::~PolygonBrush(){

}

void PolygonBrush::applyTool(Grid * frame, QPointF mousePosition, QMouseEvent * event, QColor color, int brushSize, Project* p)
{
    // Restricts action to drawing area
    if (frame->containsCoordinate(mousePosition.x(), mousePosition.y()))
    {
        if (event->type() == QEvent::MouseButtonPress && !drawing)
        {
            if (event->button() == Qt::LeftButton)
            {
                drawing = true;
                QImage * image = frame->getImage();
                int x = mousePosition.x();
                int y = mousePosition.y();
                frame->setPixelColor(x,y,color,brushSize);
                QRgb rgb(image->pixel(x,y));
                int a = qAlpha(image->alphaChannel().pixel(x, y));
                QColor c(rgb);
                if(a==255){
                    a=0;
                    c.setAlpha(a);
                }


                colors.push_back(c);
                points.push_back(mousePosition);
                drawing = false;
            } else if (event->button() == Qt::RightButton && points.size() > 2)
            {
                drawing = true;
                QPointF * pointsArr = new QPointF[points.size()];
                std::copy(points.begin(), points.end(), pointsArr);
                auto itc = colors.begin();
                for(auto it = points.begin(); it  < points.end(); it++){
                    QPointF pt = *it;

                    frame->setPixelColor(pt.x(),pt.y(),*itc,brushSize);
                }
                p->addEdit();
                frame->drawPolygon(pointsArr, points.size(), color, brushSize);
                colors.clear();
                delete [] pointsArr;
                points.clear();
                drawing = false;
            }
        }
    }
}
