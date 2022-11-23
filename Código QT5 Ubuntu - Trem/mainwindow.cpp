#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <stdio.h>

//Essas variáveis precisam ficar fora para não serem reiniciadas.
sem_t mutex;
bool trilhos[7];

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Cria o trem com seu (ID, posição X, posição Y)
    trem1 = new Trem(1,60,150, ui->Trem1Slider->value());
    trem2 = new Trem(2,230,150, ui->Trem2Slider->value());
    trem3 = new Trem(3,400,150, ui->Trem3Slider->value());
    trem4 = new Trem(4,320,280, ui->Trem4Slider->value());
    trem5 = new Trem(5,150,280, ui->Trem5Slider->value());


    /*
     * Conecta o sinal UPDATEGUI à função UPDATEINTERFACE.
     * Ou seja, sempre que o sinal UPDATEGUI foi chamado, será executada a função UPDATEINTERFACE.
     * Os 3 parâmetros INT do sinal serão utilizados na função.
     * Trem1 e Trem2 são os objetos que podem chamar o sinal. Se um outro objeto chamar o
     * sinal UPDATEGUI, não haverá execução da função UPDATEINTERFACE
     */
    connect(trem1,SIGNAL(updateGUI(int,int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem2,SIGNAL(updateGUI(int,int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem3,SIGNAL(updateGUI(int,int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem4,SIGNAL(updateGUI(int,int,int,int)),SLOT(updateInterface(int,int,int)));
    connect(trem5,SIGNAL(updateGUI(int,int,int,int)),SLOT(updateInterface(int,int,int)));

    //Conectar funções auxiliares com o SIGNAL:

    connect(trem1,SIGNAL(checarTrilho(int,int)),SLOT(checarTrilho(int,int)));
    connect(trem2,SIGNAL(checarTrilho(int,int)),SLOT(checarTrilho(int,int)));
    connect(trem3,SIGNAL(checarTrilho(int,int)),SLOT(checarTrilho(int,int)));
    connect(trem4,SIGNAL(checarTrilho(int,int)),SLOT(checarTrilho(int,int)));
    connect(trem5,SIGNAL(checarTrilho(int,int)),SLOT(checarTrilho(int,int)));

    connect(trem1,SIGNAL(liberarTrilho(int)),SLOT(liberarTrilho(int)));
    connect(trem2,SIGNAL(liberarTrilho(int)),SLOT(liberarTrilho(int)));
    connect(trem3,SIGNAL(liberarTrilho(int)),SLOT(liberarTrilho(int)));
    connect(trem4,SIGNAL(liberarTrilho(int)),SLOT(liberarTrilho(int)));
    connect(trem5,SIGNAL(liberarTrilho(int)),SLOT(liberarTrilho(int)));



    //inicialização do mutex e dos trilhos (livres).
    //0 = livre | True = Ocupado
    sem_init(&mutex, 0, 1);
    for(int i = 0; i < 7 ; i++ ){
        trilhos[i] = false;
    }


    trem1->start();
    trem2->start();
    trem3->start();
    trem4->start();
    trem5->start();
}

//Função que será executada quando o sinal UPDATEGUI for emitido
void MainWindow::updateInterface(int id, int x, int y){
    switch(id){
    case 1: //Atualiza a posição do objeto da tela (quadrado) que representa o trem1
        ui->label_trem1->setGeometry(x,y,21,17);
        break;
    case 2: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->label_trem2->setGeometry(x,y,21,17);
        break;
    case 3:
        ui->label_trem3->setGeometry(x,y,21,17);
        break;
    case 4: //Atualiza a posição do objeto da tela (quadrado) que representa o trem2
        ui->label_trem4->setGeometry(x,y,21,17);
        break;
    case 5:
        ui->label_trem5->setGeometry(x,y,21,17);
        break;
    default:
        break;
    }
}


void MainWindow::on_Trem1Slider_valueChanged(int value)
{
    trem1->setVelocidade(value);
}

void MainWindow::on_Trem2Slider_valueChanged(int value)
{
    trem2->setVelocidade(value);
}

void MainWindow::on_Trem3Slider_valueChanged(int value)
{
    trem3->setVelocidade(value);
}

void MainWindow::on_Trem4Slider_valueChanged(int value)
{
    trem4->setVelocidade(value);
}

void MainWindow::on_Trem5Slider_valueChanged(int value)
{
    trem5->setVelocidade(value);
}
//Função responsável para checar os trilhos antes do trem entrar na via
void MainWindow::checarTrilho(int idTrem, int trilho){
    sem_wait(&mutex);
    switch(idTrem) {
        case 1:
            if(trilho == 0) {
                if(trilhos[0] == false && (trilhos[2] == false || trilhos[3] == false) && !(trilhos[1]==true && trilhos[2]==true && trilhos[5]==true && trilhos[6]==true) && !(trilhos[2]==true && trilhos[4]==true && trilhos[6]==true)){
                    trilhos[0] = true;
                    ui->lcdNumber0->display(1);
                    trem1->moveX(10);
                    //Segue movimento
                }
            }else if (trilho == 2){
                if( trilhos[2] == false){
                    trilhos[2] = true;
                    ui->lcdNumber2->display(1);
                    trem1->moveY(10);
                }
            }
        break;
        case 2:
            if (trilho == 0) {
                if(trilhos[0] == false){
                    trilhos[0] = true;
                    ui->lcdNumber0->display(2);
                    trem2->moveX(-10);
                    //segue movimento
                }
            }else if(trilho == 1) {
                if(trilhos[1] == false && (trilhos[4] == false || trilhos[5] == false) && !(trilhos[0] == true && trilhos[5] == true && trilhos[2] == true && trilhos[6] == true) && !(trilhos[3] == true && trilhos[5] == true && trilhos[6] == true)){
                    trilhos[1] = true;
                    ui->lcdNumber1->display(2);
                    trem2->moveX(10);
                    //Segue movimento
                }
            }else if (trilho == 3) {
                if(trilhos[3] == false && (trilhos[0] == false || trilhos[2] == false) && !(trilhos[0] == true && trilhos[2] == true && trilhos[6] == true)){
                    trilhos[3] = true;
                    ui->lcdNumber3->display(2);
                    trem2->moveX(-10);
                    //segue movimento
                }
            }
            else if (trilho == 4) {
                if(trilhos[4] == false &&  (trilhos[3] == false || trilhos[6] == false)){
                    trilhos[4] = true;
                    ui->lcdNumber4->display(2);
                    trem2->moveY(10);
                    //Segue movimento
            }
            }
        break;
        case 3:
            if(trilho == 1) {
                if(trilhos[1] == false){
                    trilhos[1] = true;
                    ui->lcdNumber1->display(3);
                    trem3->moveX(-10);
                    //Segue movimento
                }
            }else if (trilho == 5) {
                if(trilhos[5] == false && (trilhos[1] == false || trilhos[4] == false) & !(trilhos[0] == true && trilhos[1] == true && trilhos[2] == true && trilhos[6] == true) && !(trilhos[1] == true && trilhos[3] == true && trilhos[6] == true)){
                    trilhos[5] = true;
                    ui->lcdNumber5->display(3);
                    trem3->moveX(-10);
                    //Segue movimento
                }
            }
        break;
        case 4:
            if(trilho == 4) {
                if(trilhos[4]==false && (trilhos[1] == false || trilhos[5] == false)){
                    trilhos[4] = true;
                    ui->lcdNumber4->display(4);
                    trem4->moveY(-10);
                    //Segue movimento
                }
            }else if(trilho == 5) {
                if(trilhos[5]==false){
                    trilhos[5] = true;
                    ui->lcdNumber5->display(4);
                    trem4->moveX(+10);
                    //Segue movimento
                }
            }
            else if(trilho == 6) {
                if(trilhos[6] == false && (trilhos[3] == false|| trilhos[4] == false) && !(trilhos[0] == true && trilhos[1] == true && trilhos[2] == true && trilhos[5] == true) && !(trilhos[1] == true && trilhos[3] == true && trilhos[5] == true) && !(trilhos[0] == true && trilhos[2] == true && trilhos[4] == true)){
                    trilhos[6] = true;
                    ui->lcdNumber6->display(4);
                    trem4->moveX(-10);
                    //Segue movimento
                }
            }
        break;
        case 5:
            if(trilho == 2) {
                if(trilhos[2]==false && (trilhos[0] == false || trilhos[3] == false) && !(trilhos[0] == true && trilhos[1] == true && trilhos[5] == true && trilhos[6] == true) && !(trilhos[0] == true && trilhos[4] == true && trilhos[6] == true)){
                    trilhos[2] = true;
                    ui->lcdNumber2->display(5);
                    trem5->moveY(-10);
                    //Segue movimento
                }
            }else if(trilho == 3){
                if(trilhos[3] == false && (trilhos[4] == false || trilhos[6] == false) && !(trilhos[1] == true && trilhos[5] == true && trilhos[6] == true)){
                    trilhos[3] = true;
                    ui->lcdNumber3->display(5);
                    trem5->moveX(10);
                    //Segue movimento
                }
            }else if (trilho == 6) {
                if(trilhos[6] == false){
                    trilhos[6] = true;
                    ui->lcdNumber6->display(5);
                    trem5->moveX(10);
                }
            }
        break;
        default:
            break;

    }
    sem_post(&mutex);
}
//Função que libera o trilho quando o trem sai da via.
void MainWindow::liberarTrilho(int trilho){
    sem_wait(&mutex);
    trilhos[trilho] = false;
    switch (trilho) {
        case 0:
            ui->lcdNumber0->display(0);
            break;
        case 1:
            ui->lcdNumber1->display(0);
            break;
        case 2:
            ui->lcdNumber2->display(0);
            break;
        case 3:
            ui->lcdNumber3->display(0);
            break;
        case 4:
            ui->lcdNumber4->display(0);
            break;
        case 5:
            ui->lcdNumber5->display(0);
            break;
        case 6:
            ui->lcdNumber6->display(0);
            break;
        default:
            break;

    }
    sem_post(&mutex);
}



MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * Ao clicar, trens começam execução
 */
void MainWindow::on_pushButton_clicked()
{
    trem1->start();
    trem2->start();
}

/*
 * Ao clicar, trens param execução
 */
void MainWindow::on_pushButton_2_clicked()
{
    trem1->terminate();
    trem2->terminate();
}
