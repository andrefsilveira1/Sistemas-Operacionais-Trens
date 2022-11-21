#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "trem.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void updateInterface(int,int,int);
    void checarTrilho(int,int); //Será utilizado para checar se a via de trilho pode ser utilizada
    void liberarTrilho(int); //Função para avisar que a via foi liberada

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void on_Trem1Slider_valueChanged(int value);
    void on_Trem2Slider_valueChanged(int value);
    void on_Trem3Slider_valueChanged(int value);
    void on_Trem4Slider_valueChanged(int value);
    void on_Trem5Slider_valueChanged(int value);


private:
    Ui::MainWindow *ui;

    //Cria os objetos TREM's
    Trem *trem1;
    Trem *trem2;
    Trem *trem3;
    Trem *trem4;
    Trem *trem5;
};

#endif // MAINWINDOW_H
