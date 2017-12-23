/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colorbox.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCanvasSize_2;
    QAction *actionSave_as;
    QAction *actionOpen_project;
    QAction *actionExportToGif;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout;
    QGroupBox *framesBox;
    QToolButton *delete_Frame_Button;
    QToolButton *previous_frame_button;
    QToolButton *play_button;
    QToolButton *next_frame_button;
    QToolButton *add_frame_button;
    QFrame *line_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *framesLayout;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QToolButton *brush_Button;
    QToolButton *fill_Bucket_Button;
    QToolButton *eraser_Button;
    QToolButton *rectangle_button;
    QSpinBox *brushSize;
    ColorBox *leftColor;
    QLabel *label;
    QWidget *tab_2;
    QToolButton *rotate_Left_Button;
    QToolButton *zoom_Out_Button;
    QToolButton *rotate_Right_Button;
    QToolButton *zoom_In_Button;
    QToolButton *flip_Horizontally;
    QToolButton *flip_Vertically;
    ColorBox *colorFilter;
    QCheckBox *colorFilterBox;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *undo_button;
    QSpacerItem *horizontalSpacer;
    QToolButton *redo_button;
    QSpacerItem *verticalSpacer_2;
    QCheckBox *carryOverBox;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(788, 624);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QLatin1String("\n"
"QWidget\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #ca0619);\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: transparent;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #343434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
""
                        "\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #404040;\n"
"    background-color: #323232;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0 #646464, stop: 1 #5d5d5d);\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #b1b1b1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    "
                        "border-width: 1px;\n"
"    border-color: #1e1e1e;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #1e1e1e;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinea"
                        "rGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid darkgray;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"     image: url(:/down_arrow.png);\n"
"}\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QTextEdit:focus\n"
""
                        "{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #222222;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
""
                        "      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #121212, stop: 0.2 #282828, stop: 1 #484848);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #222222;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 0.5 #d7801a, stop: 1 #ffa02f);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-lin"
                        "e:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #1b1b19;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #d7801a, stop: 1 #ffa02f);\n"
"      height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #242424;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    back"
                        "ground-color: #242424;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #616161, stop: 0.5 #505050, stop: 0.6 #434343, stop:1 #656565);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
"}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget"
                        "::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #4c4c4c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the tool bar */\n"
"     background: url(:/resources/handle.png);\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0,"
                        " y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    background-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #b1b1b1;\n"
"    border: 1px solid #444;\n"
"    border-bottom-style: none;\n"
"    background-color: #323232;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{"
                        "\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #b1b1b1;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:.4 #343434);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #212121, stop:0.4 #343434, stop:0.2 #343434, stop:0.1 #ffaa00);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;"
                        "\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #ffaa00,\n"
"        stop: 0.3 #323232\n"
"    );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"\n"
"    image:url(:/resources/checkbox.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}"));
        actionCanvasSize_2 = new QAction(MainWindow);
        actionCanvasSize_2->setObjectName(QStringLiteral("actionCanvasSize_2"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionOpen_project = new QAction(MainWindow);
        actionOpen_project->setObjectName(QStringLiteral("actionOpen_project"));
        actionExportToGif = new QAction(MainWindow);
        actionExportToGif->setObjectName(QStringLiteral("actionExportToGif"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_3 = new QHBoxLayout(centralWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        framesBox = new QGroupBox(centralWidget);
        framesBox->setObjectName(QStringLiteral("framesBox"));
        sizePolicy.setHeightForWidth(framesBox->sizePolicy().hasHeightForWidth());
        framesBox->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(framesBox);

        delete_Frame_Button = new QToolButton(centralWidget);
        delete_Frame_Button->setObjectName(QStringLiteral("delete_Frame_Button"));
        delete_Frame_Button->setMinimumSize(QSize(90, 25));

        horizontalLayout->addWidget(delete_Frame_Button);

        previous_frame_button = new QToolButton(centralWidget);
        previous_frame_button->setObjectName(QStringLiteral("previous_frame_button"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(previous_frame_button->sizePolicy().hasHeightForWidth());
        previous_frame_button->setSizePolicy(sizePolicy1);
        previous_frame_button->setMinimumSize(QSize(90, 30));

        horizontalLayout->addWidget(previous_frame_button);

        play_button = new QToolButton(centralWidget);
        play_button->setObjectName(QStringLiteral("play_button"));
        sizePolicy1.setHeightForWidth(play_button->sizePolicy().hasHeightForWidth());
        play_button->setSizePolicy(sizePolicy1);
        play_button->setMinimumSize(QSize(90, 40));

        horizontalLayout->addWidget(play_button);

        next_frame_button = new QToolButton(centralWidget);
        next_frame_button->setObjectName(QStringLiteral("next_frame_button"));
        sizePolicy1.setHeightForWidth(next_frame_button->sizePolicy().hasHeightForWidth());
        next_frame_button->setSizePolicy(sizePolicy1);
        next_frame_button->setMinimumSize(QSize(90, 30));

        horizontalLayout->addWidget(next_frame_button);

        add_frame_button = new QToolButton(centralWidget);
        add_frame_button->setObjectName(QStringLiteral("add_frame_button"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(90);
        sizePolicy2.setVerticalStretch(20);
        sizePolicy2.setHeightForWidth(add_frame_button->sizePolicy().hasHeightForWidth());
        add_frame_button->setSizePolicy(sizePolicy2);
        add_frame_button->setMinimumSize(QSize(90, 25));

        horizontalLayout->addWidget(add_frame_button);


        verticalLayout->addLayout(horizontalLayout);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 555, 45));
        horizontalLayoutWidget = new QWidget(scrollAreaWidgetContents_2);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 551, 61));
        framesLayout = new QHBoxLayout(horizontalLayoutWidget);
        framesLayout->setSpacing(6);
        framesLayout->setContentsMargins(11, 11, 11, 11);
        framesLayout->setObjectName(QStringLiteral("framesLayout"));
        framesLayout->setSizeConstraint(QLayout::SetFixedSize);
        framesLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);

        verticalLayout->setStretch(0, 1);

        horizontalLayout_3->addLayout(verticalLayout);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(120, 300));
        tabWidget->setTabPosition(QTabWidget::West);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        brush_Button = new QToolButton(tab);
        brush_Button->setObjectName(QStringLiteral("brush_Button"));
        brush_Button->setGeometry(QRect(10, 10, 31, 31));
        sizePolicy.setHeightForWidth(brush_Button->sizePolicy().hasHeightForWidth());
        brush_Button->setSizePolicy(sizePolicy);
        brush_Button->setPopupMode(QToolButton::InstantPopup);
        fill_Bucket_Button = new QToolButton(tab);
        fill_Bucket_Button->setObjectName(QStringLiteral("fill_Bucket_Button"));
        fill_Bucket_Button->setGeometry(QRect(50, 10, 31, 31));
        sizePolicy.setHeightForWidth(fill_Bucket_Button->sizePolicy().hasHeightForWidth());
        fill_Bucket_Button->setSizePolicy(sizePolicy);
        fill_Bucket_Button->setPopupMode(QToolButton::InstantPopup);
        eraser_Button = new QToolButton(tab);
        eraser_Button->setObjectName(QStringLiteral("eraser_Button"));
        eraser_Button->setGeometry(QRect(10, 50, 31, 31));
        eraser_Button->setPopupMode(QToolButton::InstantPopup);
        rectangle_button = new QToolButton(tab);
        rectangle_button->setObjectName(QStringLiteral("rectangle_button"));
        rectangle_button->setGeometry(QRect(50, 50, 31, 31));
        sizePolicy.setHeightForWidth(rectangle_button->sizePolicy().hasHeightForWidth());
        rectangle_button->setSizePolicy(sizePolicy);
        rectangle_button->setPopupMode(QToolButton::InstantPopup);
        brushSize = new QSpinBox(tab);
        brushSize->setObjectName(QStringLiteral("brushSize"));
        brushSize->setGeometry(QRect(10, 210, 61, 31));
        brushSize->setMinimum(1);
        brushSize->setMaximum(10);
        leftColor = new ColorBox(tab);
        leftColor->setObjectName(QStringLiteral("leftColor"));
        leftColor->setGeometry(QRect(10, 160, 41, 41));
        sizePolicy.setHeightForWidth(leftColor->sizePolicy().hasHeightForWidth());
        leftColor->setSizePolicy(sizePolicy);
        leftColor->setAutoFillBackground(false);
        leftColor->setStyleSheet(QStringLiteral("border: 2px solid grey"));
        leftColor->setLineWidth(1);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 140, 71, 16));
        QFont font;
        font.setPointSize(8);
        label->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        rotate_Left_Button = new QToolButton(tab_2);
        rotate_Left_Button->setObjectName(QStringLiteral("rotate_Left_Button"));
        rotate_Left_Button->setGeometry(QRect(50, 50, 31, 31));
        sizePolicy.setHeightForWidth(rotate_Left_Button->sizePolicy().hasHeightForWidth());
        rotate_Left_Button->setSizePolicy(sizePolicy);
        zoom_Out_Button = new QToolButton(tab_2);
        zoom_Out_Button->setObjectName(QStringLiteral("zoom_Out_Button"));
        zoom_Out_Button->setGeometry(QRect(50, 10, 31, 31));
        sizePolicy.setHeightForWidth(zoom_Out_Button->sizePolicy().hasHeightForWidth());
        zoom_Out_Button->setSizePolicy(sizePolicy);
        rotate_Right_Button = new QToolButton(tab_2);
        rotate_Right_Button->setObjectName(QStringLiteral("rotate_Right_Button"));
        rotate_Right_Button->setGeometry(QRect(10, 50, 31, 31));
        sizePolicy.setHeightForWidth(rotate_Right_Button->sizePolicy().hasHeightForWidth());
        rotate_Right_Button->setSizePolicy(sizePolicy);
        rotate_Right_Button->setStyleSheet(QLatin1String("QToolButton{\n"
"	-moz-box-shadow:inset 38px -12px 48px -15px #0a1211;\n"
"	-webkit-box-shadow:inset 38px -12px 48px -15px #0a1211;\n"
"	box-shadow:inset 38px -12px 48px -15px #0a1211;\n"
"	background:-webkit-gradient(linear, left top, left bottom, color-stop(0.05, #25b891), color-stop(1, #6c7c7c));\n"
"	background:-moz-linear-gradient(top, #25b891 5%, #6c7c7c 100%);\n"
"	background:-webkit-linear-gradient(top, #25b891 5%, #6c7c7c 100%);\n"
"	background:-o-linear-gradient(top, #25b891 5%, #6c7c7c 100%);\n"
"	background:-ms-linear-gradient(top, #25b891 5%, #6c7c7c 100%);\n"
"	background:linear-gradient(to bottom, #25b891 5%, #6c7c7c 100%);\n"
"	filter:progid:DXImageTransform.Microsoft.gradient(startColorstr='#25b891', endColorstr='#6c7c7c',GradientType=0);\n"
"	background-color:#25b891;\n"
"	-moz-border-radius:5px;\n"
"	-webkit-border-radius:5px;\n"
"	border-radius:5px;\n"
"	border:1px solid #566963;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffccff;\n"
"	font-family:Arial;\n"
"	font-size:15px;"
                        "\n"
"	font-weight:bold;\n"
"	padding:14px 9px;\n"
"	text-decoration:none;\n"
"	text-shadow:3px 3px 10px #039c85;\n"
"}"));
        zoom_In_Button = new QToolButton(tab_2);
        zoom_In_Button->setObjectName(QStringLiteral("zoom_In_Button"));
        zoom_In_Button->setGeometry(QRect(10, 10, 31, 31));
        sizePolicy.setHeightForWidth(zoom_In_Button->sizePolicy().hasHeightForWidth());
        zoom_In_Button->setSizePolicy(sizePolicy);
        zoom_In_Button->setAutoFillBackground(false);
        flip_Horizontally = new QToolButton(tab_2);
        flip_Horizontally->setObjectName(QStringLiteral("flip_Horizontally"));
        flip_Horizontally->setGeometry(QRect(10, 90, 31, 31));
        sizePolicy.setHeightForWidth(flip_Horizontally->sizePolicy().hasHeightForWidth());
        flip_Horizontally->setSizePolicy(sizePolicy);
        flip_Horizontally->setAutoFillBackground(false);
        flip_Vertically = new QToolButton(tab_2);
        flip_Vertically->setObjectName(QStringLiteral("flip_Vertically"));
        flip_Vertically->setGeometry(QRect(50, 90, 31, 31));
        sizePolicy.setHeightForWidth(flip_Vertically->sizePolicy().hasHeightForWidth());
        flip_Vertically->setSizePolicy(sizePolicy);
        colorFilter = new ColorBox(tab_2);
        colorFilter->setObjectName(QStringLiteral("colorFilter"));
        colorFilter->setEnabled(true);
        colorFilter->setGeometry(QRect(20, 190, 41, 41));
        sizePolicy.setHeightForWidth(colorFilter->sizePolicy().hasHeightForWidth());
        colorFilter->setSizePolicy(sizePolicy);
        colorFilter->setAutoFillBackground(false);
        colorFilter->setStyleSheet(QStringLiteral("border: 2px solid grey"));
        colorFilter->setLineWidth(1);
        colorFilterBox = new QCheckBox(tab_2);
        colorFilterBox->setObjectName(QStringLiteral("colorFilterBox"));
        colorFilterBox->setEnabled(true);
        colorFilterBox->setGeometry(QRect(10, 170, 120, 20));
        colorFilterBox->setChecked(false);
        tabWidget->addTab(tab_2, QString());

        verticalLayout_2->addWidget(tabWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        undo_button = new QToolButton(centralWidget);
        undo_button->setObjectName(QStringLiteral("undo_button"));
        sizePolicy1.setHeightForWidth(undo_button->sizePolicy().hasHeightForWidth());
        undo_button->setSizePolicy(sizePolicy1);
        undo_button->setMinimumSize(QSize(70, 70));
        undo_button->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(undo_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        redo_button = new QToolButton(centralWidget);
        redo_button->setObjectName(QStringLiteral("redo_button"));
        sizePolicy1.setHeightForWidth(redo_button->sizePolicy().hasHeightForWidth());
        redo_button->setSizePolicy(sizePolicy1);
        redo_button->setMinimumSize(QSize(70, 70));
        redo_button->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(redo_button);

        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        carryOverBox = new QCheckBox(centralWidget);
        carryOverBox->setObjectName(QStringLiteral("carryOverBox"));
        carryOverBox->setEnabled(true);
        carryOverBox->setChecked(true);

        verticalLayout_2->addWidget(carryOverBox);


        horizontalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 788, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionCanvasSize_2);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionOpen_project);
        menuFile->addAction(actionExportToGif);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sprite Editor eXtreme", Q_NULLPTR));
        actionCanvasSize_2->setText(QApplication::translate("MainWindow", "Configuration", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCanvasSize_2->setToolTip(QApplication::translate("MainWindow", "Open configuration page", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as...", Q_NULLPTR));
        actionOpen_project->setText(QApplication::translate("MainWindow", "Open project...", Q_NULLPTR));
        actionExportToGif->setText(QApplication::translate("MainWindow", "Export to Gif", Q_NULLPTR));
        framesBox->setTitle(QApplication::translate("MainWindow", "Frames", Q_NULLPTR));
        delete_Frame_Button->setText(QApplication::translate("MainWindow", "Delete Frame", Q_NULLPTR));
        previous_frame_button->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        play_button->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        next_frame_button->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        add_frame_button->setText(QApplication::translate("MainWindow", "Add Frame", Q_NULLPTR));
        brush_Button->setText(QString());
        fill_Bucket_Button->setText(QString());
        eraser_Button->setText(QString());
        rectangle_button->setText(QString());
        leftColor->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Left Color", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", Q_NULLPTR));
        rotate_Left_Button->setText(QString());
        zoom_Out_Button->setText(QString());
        rotate_Right_Button->setText(QString());
        zoom_In_Button->setText(QString());
        flip_Horizontally->setText(QString());
        flip_Vertically->setText(QString());
        colorFilter->setText(QString());
        colorFilterBox->setText(QApplication::translate("MainWindow", "Filter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Undo/Redo", Q_NULLPTR));
        undo_button->setText(QString());
        redo_button->setText(QString());
        carryOverBox->setText(QApplication::translate("MainWindow", "Blank Frame", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
