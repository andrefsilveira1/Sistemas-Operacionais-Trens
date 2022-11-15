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
    QSlider *Trem1;
    QLabel *label;
    QSlider *Trem2;
    QLabel *label_2;
    QSlider *Trem3;
    QLabel *label_3;
    QSlider *Trem4;
    QLabel *label_4;
    QSlider *Trem5;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(745, 399);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label_trem1 = new QLabel(centralWidget);
        label_trem1->setObjectName(QString::fromUtf8("label_trem1"));
        label_trem1->setGeometry(QRect(60, 30, 21, 17));
        label_trem1->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
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
        label_trilho3->setGeometry(QRect(330, 30, 21, 137));
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
        label_trilho1_2->setGeometry(QRect(350, 30, 250, 17));
        label_trilho1_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trilho2_2 = new QLabel(centralWidget);
        label_trilho2_2->setObjectName(QString::fromUtf8("label_trilho2_2"));
        label_trilho2_2->setGeometry(QRect(350, 150, 250, 17));
        label_trilho2_2->setStyleSheet(QString::fromUtf8("QLabel { background: yellow}"));
        label_trem2 = new QLabel(centralWidget);
        label_trem2->setObjectName(QString::fromUtf8("label_trem2"));
        label_trem2->setGeometry(QRect(330, 30, 21, 17));
        label_trem2->setStyleSheet(QString::fromUtf8("QLabel { background: red}"));
        Trem1 = new QSlider(centralWidget);
        Trem1->setObjectName(QString::fromUtf8("Trem1"));
        Trem1->setGeometry(QRect(70, 180, 201, 61));
        Trem1->setOrientation(Qt::Horizontal);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 180, 67, 17));
        Trem2 = new QSlider(centralWidget);
        Trem2->setObjectName(QString::fromUtf8("Trem2"));
        Trem2->setGeometry(QRect(380, 180, 201, 61));
        Trem2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(380, 180, 67, 17));
        Trem3 = new QSlider(centralWidget);
        Trem3->setObjectName(QString::fromUtf8("Trem3"));
        Trem3->setGeometry(QRect(70, 220, 201, 61));
        Trem3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 220, 67, 17));
        Trem4 = new QSlider(centralWidget);
        Trem4->setObjectName(QString::fromUtf8("Trem4"));
        Trem4->setGeometry(QRect(380, 220, 201, 61));
        Trem4->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(380, 220, 67, 17));
        Trem5 = new QSlider(centralWidget);
        Trem5->setObjectName(QString::fromUtf8("Trem5"));
        Trem5->setGeometry(QRect(220, 270, 201, 61));
        Trem5->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 270, 67, 17));
        MainWindow->setCentralWidget(centralWidget);
        label_trilho1->raise();
        label_trilho2->raise();
        label_trilho3->raise();
        label_trilho4->raise();
        label_trem1->raise();
        label_trilho4_2->raise();
        label_trilho1_2->raise();
        label_trilho2_2->raise();
        label_trem2->raise();
        Trem1->raise();
        label->raise();
        Trem2->raise();
        label_2->raise();
        Trem3->raise();
        label_3->raise();
        Trem4->raise();
        label_4->raise();
        Trem5->raise();
        label_5->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 745, 22));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
