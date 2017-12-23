#include "mainwindow.h"
#include <QApplication>
#include <controller.h>
#include <QPlatformSurfaceEvent>


//Main entry point for the application
int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;

    a.setStyle("plastique");
    Controller controller(&w);
    w.show();
    return a.exec();
}
