#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QLabel>
#include <QPalette>
#include <QGraphicsRectItem>
#include <QImage>
#include <QInputDialog>
#include <QLineEdit>
#include <QAction>
#include <QToolButton>
#include <QFileDialog>
#include <QTextStream>
#include <grid.h>
#include <iostream>
#include <configurationform.h>
#include <property.h>
#include <previewwindow.h>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void updateEditor(QImage *image);
    PreviewWindow *getPreview();
    ~MainWindow();

signals:
    void sendMouseInput(QPointF, QMouseEvent*);
    void sendButtonInput(QWidget*);
    void sendPropertyChange(Property);
    void sendSaveAs();
    void sendExportGif();
    void sendOpenProj(QString,QString,QString);
    void enableDraw();
    void disableDraw();


public slots:
    void exportGif(std::vector<QImage>);
    void exportToGifSig();
    void updateFrames(std::vector<QImage>, unsigned int);
    void saveAsSelected(QString);
    void sendConfigurationInput();
    void openConfigurationSelected();
    void spinnerChanged(int);
    void checkBoxChanged(int);
    void updateScreen(QImage *toShow);
    void updateColor(QColor); // left is false right is true
    void updateFilterColor(QColor);
    void addFrameToLayout(QImage *);
    void zoomIn();
    void zoomOut();
    void setActiveButton(unsigned int);
    void deleteFrame(unsigned int);
    void receiveSliderChange(int);

protected:
    bool eventFilter(QObject *watched, QEvent *event);

private slots:
    void on_play_button_pressed();
    void sendSaveAsSig();
    void openProj();

private:
    int currentScale;
    int zoomCount;
    std::vector<QLabel*> frames;
    ConfigurationForm configuration;
    PreviewWindow preview;
    void connectComponents();
    void setupIcons();
    void setupToolTips();
    QGraphicsRectItem *boundary; // should move this to the model
    Ui::MainWindow *ui;
    QGraphicsScene *scene;

};

#endif // MAINWINDOW_H
