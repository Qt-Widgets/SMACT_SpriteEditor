#ifndef COLORBOX_H
#define COLORBOX_H
#include <QMouseEvent>
#include <QLabel>
#include <QWidget>
#include <iostream>

class ColorBox : public QLabel{
    Q_OBJECT
public:
    ColorBox();
    ColorBox(QWidget *);
    ~ColorBox();

signals:
    void clicked();

protected slots:
    void mousePressEvent(QMouseEvent*);
};

#endif // COLORBOX_H
