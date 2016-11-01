#ifndef PREVIEWWINDOW_H
#define PREVIEWWINDOW_H

#include <QMainWindow>
#include <QGraphicsRectItem>
#include <QGraphicsScene>


namespace Ui {
class PreviewWindow;
}

class PreviewWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit PreviewWindow(QWidget *parent = 0);
    Ui::PreviewWindow * get();
    ~PreviewWindow();

public slots:
    void updatePreview(QImage * toShow);

private:
    Ui::PreviewWindow *ui;
    QGraphicsRectItem * boundary;
    QGraphicsScene * scene;
};

#endif // PREVIEWWINDOW_H
