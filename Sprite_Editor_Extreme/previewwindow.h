#ifndef PREVIEWWINDOW_H
#define PREVIEWWINDOW_H

#include <QMainWindow>
#include <QGraphicsRectItem>
#include <QGraphicsScene>


namespace Ui {
class PreviewWindow;
}

//The preview window shows a preview animation of our sprite
class PreviewWindow : public QMainWindow{
    Q_OBJECT

public:
    explicit PreviewWindow(QWidget *parent = 0);
    Ui::PreviewWindow * get();
    ~PreviewWindow();

signals:
    void sendSliderChange(int);

public slots:
    void updatePreview(QImage * toShow);

private slots:
    void on_horizontalSlider_valueChanged(int value);

private:
    Ui::PreviewWindow *ui;
    QGraphicsRectItem * boundary;
    QGraphicsScene * scene;
};

#endif // PREVIEWWINDOW_H
