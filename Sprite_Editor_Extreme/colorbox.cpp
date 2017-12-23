#include "colorbox.h"

ColorBox::ColorBox(QWidget *parent) : QLabel(parent){}

void ColorBox::mousePressEvent(QMouseEvent *) {
    emit clicked();
}

ColorBox::~ColorBox(){}
