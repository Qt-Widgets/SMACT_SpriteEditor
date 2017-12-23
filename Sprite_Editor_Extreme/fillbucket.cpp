#include "fillbucket.h"

FillBucket::FillBucket(){}

FillBucket::~FillBucket(){}

// The Fill Bucket tool fills in all connected pixels of the same color to a new color
void FillBucket::applyTool(Grid * frame, QPointF mousePosition, QMouseEvent * event, QColor color,int,Project*){

    if (frame->containsCoordinate(mousePosition.x(), mousePosition.y())){ // Restricts action to drawing area
        if (drawing){
            return;
        }

        if (event->type() == QEvent::MouseButtonPress && !drawing){

            int w = frame->getImage()->width();
            int h = frame->getImage()->height();
            int x = mousePosition.x();
            int y = mousePosition.y();

            if(x<0||y<0||x>=w||y>=h) return;
            drawing = true;

            QRgb rgb(frame->getImage()->pixel(x,y));
            //int a = qAlpha(frame->getImage()->alphaChannel().pixel(x, y));
            QColor c(rgb);

            if(c.red()==0&&c.blue()==0&&c.green()==0&&c.alpha()==65535){
                c.setAlpha(0);
            }else {
                c = (frame->pixelColor(x,y));
            }
            floodFill(frame->getImage(), mousePosition.x(), mousePosition.y(), c, color);
            drawing = false;
        }
    }
}

// Source: Flood fill - Wikipedia
void FillBucket::floodFill(QImage * image, int x, int y, QColor targetColor, QColor replacementColor)
{
    int w = image->width();
    int h = image->height();
    if (((x>=w||x < 0)||(y >=h||y < 0)))
    {
        return;
    }else{
        if (targetColor == replacementColor)
        {
            return;
        }

        if (image->pixelColor(x, y) != targetColor)
        {
            return;
        }

        image->setPixelColor(x, y, replacementColor);

        floodFill(image, x, y + 1, targetColor, replacementColor);
        floodFill(image, x, y - 1, targetColor, replacementColor);
        floodFill(image, x - 1, y, targetColor, replacementColor);
        floodFill(image, x + 1, y, targetColor, replacementColor);
    }

    return;
}
