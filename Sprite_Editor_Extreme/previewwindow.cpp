#include "previewwindow.h"
#include "ui_previewwindow.h"

//Custom form to house the sprite preview
PreviewWindow::PreviewWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PreviewWindow){
    ui->setupUi(this);
    scene = new QGraphicsScene(ui->graphicsView);
    ui->graphicsView->setScene(scene);
}

PreviewWindow::~PreviewWindow(){
    delete scene;
    delete ui;
}

Ui::PreviewWindow * PreviewWindow::get(){
    return this->ui;
}

void PreviewWindow::updatePreview(QImage * preview){
    ui->graphicsView->scene()->clear();
    boundary = new QGraphicsRectItem(0, 0, preview->width(), preview->height());
    ui->graphicsView->scene()->addItem(boundary);
    scene->addPixmap(QPixmap::fromImage(*preview));
    ui->graphicsView->update();
}

void PreviewWindow::on_horizontalSlider_valueChanged(int value)
{
     emit sendSliderChange(value);
}




