#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QObject>
#include <QMouseEvent>
#include <QToolButton>
#include <QLabel>
#include <QTimer>
#include <QColorDialog>
#include <vector>
#include <model.h>
#include <mainwindow.h>
#include <QRegularExpression>

// following the mvc design pattern : https://en.wikipedia.org/wiki/Model-view-controller
// The controller receives signals from the MainWindow and decides what to do about the signals.
// Then changes the model accordingly, and tells the MainWindow what it needs to display.
class Controller : public QObject{
    Q_OBJECT

private:
    Model* model;
    QTimer timer;
    std::atomic_bool drawing;
    std::atomic_bool allowDrawing;
    bool addBlankFrame = true;
    void decodeAction(QString);

public:
    Controller();
    Controller(MainWindow*);
    ~Controller();
    void sendAllFrame();

signals:
    void sendImage(QImage *); // Sends the frame that is currently displayed to the display
    void sendPreviewImage(QImage *);
    void sendColor(QColor); // Sends the current active color to the display
    void sendFilterColor(QColor); // Sends the current filter color to the display
    void sendFrames(std::vector<QImage>, int); // Sends all the frames to the display
    void sendFramesForExport(std::vector<QImage>); // Sends all the frames for exporting purposes
    void saveAs(QString); // Sends the string to save to a file
    void sendNewFrame(QImage *); // Tells the display to add a new frame
    void sendActiveTool(int); // Tells the display which tool is currently active
    void sendDeleteFrame(int); // Tells the display to delete the current frame

public slots:
    void receiveExport(); // Receives an export to GIF request and handles it
    void receiveButtonInput(QWidget*); // Receives all button input and correctly directs it
    void receiveMouseInput(QPointF, QMouseEvent*); // Recieves all relevant mouse input and correctly directs it
    void receivePropertyChange(Property); // Receives property changes (brush size, canvas size, etc.)
    void receiveSaveAs(); // Receives and handles a save request
    void receiveOpenProj(QString,QString,QString); // Recives and parses an open file request
    void timeoutSendImage();
    void disableDraw(); // Disables drawing
    void enableDraw(); // Enables drawing
};

#endif // CONTROLLER_H
