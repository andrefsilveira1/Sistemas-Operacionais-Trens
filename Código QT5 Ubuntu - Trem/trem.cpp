#include "trem.h"
#include <QtCore>

//Construtor
Trem::Trem(int ID, int x, int y, int velocidade){
    this->ID = ID;
    this->x = x;
    this->y = y;
    this->velocidade = velocidade;
}

void Trem::setVelocidade(int value){
    velocidade = value + value;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    while(true){
        switch(ID){
        case 1:     //Trem 1
            if (y == 30 && x <230)
                x+=10;
            else if (x == 230 && y < 150)
                y+=10;
            else if (x > 60 && y == 150)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y,velocidade);    //Emite um sinal
            break;
        case 2: //Trem 2
            if (y == 30 && x < 440)
                x+=10;
            else if (x == 440 && y < 150)
                y+=10;
            else if (x > 230 && y == 150)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y, velocidade);    //Emite um sinal
            break;
         case 3: //Trem 3
            if (y == 30 && x <600)
                x+=10;
            else if (x == 600 && y < 150)
                y+=10;
            else if (x > 440 && y == 150)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y, velocidade);    //Emite um sinal
            break;
        case 4: //Trem 4
            if (y == 150 && x < 510)
                x+=10;
            else if (x == 510 && y < 280)
                y+=10;
            else if (x > 360 && y == 280)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y, velocidade);    //Emite um sinal
            break;
        case 5:
            if (y == 150 && x < 300)
                x+=10;
            else if (x == 300 && y < 280)
                y+=10;
            else if (x > 150 && y == 280)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y,velocidade);    //Emite um sinal
            break;
        default:
            break;
        }
        msleep(200 - velocidade);
    }
}




