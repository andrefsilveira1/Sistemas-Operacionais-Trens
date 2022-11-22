/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_trem1;
    QLabel *label_trilho1;
    QLabel *label_trilho2;
    QLabel *label_trilho3;
    QLabel *label_trilho4;
    QLabel *label_trilho4_2;
    QLabel *label_trilho1_2;
    QLabel *label_trilho2_2;
    QLabel *label_trem2;
    QSlider *Trem1Slider;
    QLabel *label;
    QSlider *Trem2Slider;
    QLabel *label_2;
    QSlider *Trem3Slider;
    QLabel *label_3;
    QSlider *Trem4Slider;
    QLabel *label_4;
    QSlider *Trem5Slider;
    QLabel *label_5;
    QLabel *label_trem3;
    QLabel *label_trem4;
    QLabel *label_trem5;
    QLabel *label_trilho2_3;
    QLabel *label_trilho3_2;
    QLabel *label_trilho3_3;
    QLabel *label_trilho3_4;
    QLabel *label_trilho3_5;
    QLabel *label_trilho2_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(863, 579);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName(QString::fromUtf8("label_trem1"));
        label_trem1->setGeometry(QRect(250, 150, 21, 17));
        label_trem1->setStyleSheet(QString::fromUtf8("QLabel { background: blue}"));
        label_trilho1 = new QLabel(centralWidget);
        label_trilho1->setObjectName(QString::fromUtf8("label_trilho1"));
        label_trilho1->setGeometry(QRect(80, 30, 250, 17));
        label_trilho1->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2 = new QLabel(centralWidget);
        label_trilho2->setObjectName(QString::fromUtf8("label_trilho2"));
        label_trilho2->setGeometry(QRect(80, 150, 250, 17));
        label_trilho2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3 = new QLabel(centralWidget);
        label_trilho3->setObjectName(QString::fromUtf8("label_trilho3"));
        label_trilho3->setGeometry(QRect(400, 30, 21, 137));
        label_trilho3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4 = new QLabel(centralWidget);
        label_trilho4->setObjectName(QString::fromUtf8("label_trilho4"));
        label_trilho4->setGeometry(QRect(60, 30, 21, 137));
        label_trilho4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho4_2 = new QLabel(centralWidget);
        label_trilho4_2->setObjectName(QString::fromUtf8("label_trilho4_2"));
        label_trilho4_2->setGeometry(QRect(600, 30, 21, 137));
        label_trilho4_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho1_2 = new QLabel(centralWidget);
        label_trilho1_2->setObjectName(QString::fromUtf8("label_trilho1_2"));
        label_trilho1_2->setGeometry(QRect(329, 30, 271, 16));
        label_trilho1_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_2 = new QLabel(centralWidget);
        label_trilho2_2->setObjectName(QString::fromUtf8("label_trilho2_2"));
        label_trilho2_2->setGeometry(QRect(329, 150, 271, 16));
        label_trilho2_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName(QString::fromUtf8("label_trem2"));
        label_trem2->setGeometry(QRect(380, 30, 21, 17));
        label_trem2->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        Trem1Slider = new QSlider(centralWidget);
        Trem1Slider->setObjectName(QString::fromUtf8("Trem1Slider"));
        Trem1Slider->setGeometry(QRect(30, 340, 201, 61));
        Trem1Slider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 330, 67, 17));
        Trem2Slider = new QSlider(centralWidget);
        Trem2Slider->setObjectName(QString::fromUtf8("Trem2Slider"));
        Trem2Slider->setGeometry(QRect(410, 340, 201, 61));
        Trem2Slider->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(410, 330, 67, 17));
        Trem3Slider = new QSlider(centralWidget);
        Trem3Slider->setObjectName(QString::fromUtf8("Trem3Slider"));
        Trem3Slider->setGeometry(QRect(30, 400, 201, 61));
        Trem3Slider->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 380, 67, 17));
        Trem4Slider = new QSlider(centralWidget);
        Trem4Slider->setObjectName(QString::fromUtf8("Trem4Slider"));
        Trem4Slider->setGeometry(QRect(410, 410, 201, 61));
        Trem4Slider->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(410, 400, 67, 17));
        Trem5Slider = new QSlider(centralWidget);
        Trem5Slider->setObjectName(QString::fromUtf8("Trem5Slider"));
        Trem5Slider->setGeometry(QRect(220, 450, 201, 61));
        Trem5Slider->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 440, 67, 17));
        label_trem3 = new QLabel(centralWidget);
        label_trem3->setObjectName(QString::fromUtf8("label_trem3"));
        label_trem3->setGeometry(QRect(600, 150, 21, 17));
        label_trem3->setStyleSheet(QString::fromUtf8("QLabel { background: orange}"));
        label_trem4 = new QLabel(centralWidget);
        label_trem4->setObjectName(QString::fromUtf8("label_trem4"));
        label_trem4->setGeometry(QRect(320, 280, 21, 17));
        label_trem4->setStyleSheet(QString::fromUtf8("QLabel { background: brown}"));
        label_trem5 = new QLabel(centralWidget);
        label_trem5->setObjectName(QString::fromUtf8("label_trem5"));
        label_trem5->setGeometry(QRect(300, 170, 21, 17));
        label_trem5->setStyleSheet(QString::fromUtf8("QLabel { background: black}"));
        label_trilho2_3 = new QLabel(centralWidget);
        label_trilho2_3->setObjectName(QString::fromUtf8("label_trilho2_3"));
        label_trilho2_3->setGeometry(QRect(160, 280, 161, 17));
        label_trilho2_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3_2 = new QLabel(centralWidget);
        label_trilho3_2->setObjectName(QString::fromUtf8("label_trilho3_2"));
        label_trilho3_2->setGeometry(QRect(150, 160, 21, 137));
        label_trilho3_2->setAutoFillBackground(false);
        label_trilho3_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3_3 = new QLabel(centralWidget);
        label_trilho3_3->setObjectName(QString::fromUtf8("label_trilho3_3"));
        label_trilho3_3->setGeometry(QRect(300, 160, 21, 137));
        label_trilho3_3->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3_4 = new QLabel(centralWidget);
        label_trilho3_4->setObjectName(QString::fromUtf8("label_trilho3_4"));
        label_trilho3_4->setGeometry(QRect(230, 30, 21, 137));
        label_trilho3_4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho3_5 = new QLabel(centralWidget);
        label_trilho3_5->setObjectName(QString::fromUtf8("label_trilho3_5"));
        label_trilho3_5->setGeometry(QRect(460, 160, 21, 137));
        label_trilho3_5->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_4 = new QLabel(centralWidget);
        label_trilho2_4->setObjectName(QString::fromUtf8("label_trilho2_4"));
        label_trilho2_4->setGeometry(QRect(320, 280, 161, 17));
        label_trilho2_4->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        MainWindow->setCentralWidget(centralWidget);
        label_trilho3->raise();
        label_trilho3_5->raise();
        label_trilho3_3->raise();
        label_trilho3_2->raise();
        label_trilho3_4->raise();
        label_trilho1->raise();
        label_trilho2->raise();
        label_trilho4->raise();
        label_trem1->raise();
        label_trilho4_2->raise();
        label_trilho1_2->raise();
        label_trilho2_2->raise();
        label_trem2->raise();
        Trem1Slider->raise();
        label->raise();
        Trem2Slider->raise();
        label_2->raise();
        Trem3Slider->raise();
        label_3->raise();
        Trem4Slider->raise();
        label_4->raise();
        Trem5Slider->raise();
        label_5->raise();
        label_trem3->raise();
        label_trilho2_3->raise();
        label_trilho2_4->raise();
        label_trem5->raise();
        label_trem4->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 863, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_trem1->setText(QCoreApplication::translate("MainWindow", "T1", nullptr));
        label_trilho1->setText(QString());
        label_trilho2->setText(QString());
        label_trilho3->setText(QString());
        label_trilho4->setText(QString());
        label_trilho4_2->setText(QString());
        label_trilho1_2->setText(QString());
        label_trilho2_2->setText(QString());
        label_trem2->setText(QCoreApplication::translate("MainWindow", "T2", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Trem 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Trem 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Trem 3", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Trem 4", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Trem 5", nullptr));
        label_trem3->setText(QCoreApplication::translate("MainWindow", "T3", nullptr));
        label_trem4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#9a9996;\">T4</span></p></body></html>", nullptr));
        label_trem5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">T5</span></p></body></html>", nullptr));
        label_trilho2_3->setText(QString());
        label_trilho3_2->setText(QString());
        label_trilho3_3->setText(QString());
        label_trilho3_4->setText(QString());
        label_trilho3_5->setText(QString());
        label_trilho2_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
