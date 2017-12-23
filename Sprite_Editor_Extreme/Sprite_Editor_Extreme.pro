#-------------------------------------------------
#
# Project created by QtCreator 2016-10-25T10:26:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sprite_Editor_Extreme
TEMPLATE = app



SOURCES += main.cpp\
        mainwindow.cpp \
    grid.cpp \
    controller.cpp \
    model.cpp \
    project.cpp \
    colorbox.cpp \
    configurationform.cpp \
    property.cpp \
    tool.cpp \
    brush.cpp \
    eraser.cpp \
    previewwindow.cpp \
    fillbucket.cpp \
    gif.h \
    polygonbrush.cpp

HEADERS  += mainwindow.h \
    grid.h \
    controller.h \
    model.h \
    project.h \
    colorbox.h \
    configurationform.h \
    property.h \
    tool.h \
    brush.h \
    eraser.h \
    previewwindow.h \
    fillbucket.h \
    gif.h \
    polygonbrush.h

FORMS    += mainwindow.ui \
    previewwindow.ui \
    configurationform.ui

RESOURCES += \
    resources.qrc
