#ifndef GRID_H
#define GRID_H

#include <QImage>
#include <QColor>
#include <QPainter>
#include <QString>
#include <QRegularExpression>

//The Grid represents a single frame of our sprite. A single frame is composed of a height, width, and image
class Grid{
public:
    Grid(); // Default grid constructor
    Grid(int,int); // Grid constructor allowing you to specify height and width
    Grid(const Grid&);  // Grid copy constructor
    Grid & operator=(const Grid&);  // Grid = Grid deep copy
    ~Grid();
    Grid(QImage * image);  // Grid constructor based off of exsisting QImage

    int const default_width = 16;
    int const default_height = 16;

    void swap(Grid&); // Used for copy-swap
    void friend swap(Grid &,Grid &); // Used for copy-swap
    void resize(int, int); // Allows you to resize a Grid

    QColor fromRgba(QString); // Get a color from a string
    QImage *getImage(); // Returns the Grids QImage
    QColor pixelColor(int, int); // Get the color of a specific pixel
    QColor getPixelColor(int, int); // Get the color of a specific pixel

    QString toString(); // Get the grid's pixels formatted into a string for saving
    QString toRgba(QColor); // Convert a color to string format

    void setPixelColor(int,int,QColor, int); // Set the color of a specific pixel
    void drawPolygon(const QPointF*, int, QColor, int); // Draw a polygon onto the grid
    void drawLinePixels(QPointF,QPointF,QColor, int); // Draw a line onto the grid
    bool containsCoordinate(int, int); // Check if the coordinate is in the grid
    void rotateImage(int); // Rotate the grid
    void fromString(QString); // Parse a string into a grid
    void flipImage(QString); // Flip the grid
    void applyFilter(QColor); // Apply a filter onto the grid
    void removeFilter(); // Remove a filter onto the grid

protected:
    int height;
    int width;
    QImage* image;
    bool filterActive;
    QColor filterColor;
};

#endif // GRID_H
