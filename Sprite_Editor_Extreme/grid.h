#ifndef GRID_H
#define GRID_H

#include <QImage>
#include <QColor>
#include <QPainter>
#include <cmath>

class Grid
{
public:
    Grid();
    Grid(int,int);
    ~Grid();
    Grid(const Grid&);
    Grid & operator=(const Grid&);
    void swap(Grid&);
    void friend swap(Grid &,Grid &);
    void resize(int, int);
    //void setBlockSize(int);
    void setPixelColor(int,int,QColor);
    bool containsCoordinate(int, int);
    void setDrawScale(unsigned int);
    QImage *getImage();
    void drawLinePixels(QPointF,QPointF,QColor);
    void rotateImage(int );

protected:
    const int initScaleFactor = 3;
    int height;
    int width;
    int drawScale = initScaleFactor;
    int blocksize = std::pow(2,initScaleFactor);
    int default_width = 256;
    int default_height = 256;
    QImage* image;

};

#endif // GRID_H
