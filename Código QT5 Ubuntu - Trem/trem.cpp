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
    if(value==0){
        terminate();
    }else{
        if(velocidade==0)
            start();
    }
    velocidade = value;
}
void Trem::moveX(int value){
    x += value;
}

void Trem::moveY(int value){
    y += value;
}

int Trem::gety(){
   return this->y;
}

int Trem::getx(){
   return this->x;
}

//Função a ser executada após executar trem->START
void Trem::run(){
    while(true){
        switch(ID){
        case 1:     //Trem 1
            if (x == 210 && y == 30){
                emit checarTrilho(ID, 0);
            }
            else if(x ==  210 && y == 150){
                emit liberarTrilho(0);
                x-=10;
            }
            else if (x == 230 && y == 130){
                emit checarTrilho(ID,2);
            }
            else if (x == 130 && y == 150){
                emit liberarTrilho(2);
                x-=10;
            }
            else if (y == 30 && x <230)
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
            if (x == 250 && y == 150){
                emit checarTrilho(ID,0);
            }
            else if (x == 250 && y == 30){
                emit liberarTrilho(0);
                x+=10;
            }
            else if (x == 380 && y == 30){
                emit checarTrilho(ID,1);
            }
            else if (x == 380 && y == 150){
                emit liberarTrilho(1);
                x-=10;
            }
            else if (x == 320 && y == 150){
                emit checarTrilho(ID,3);
            }
            else if (x == 230 && y == 130){
                emit liberarTrilho(3);
                y-=10;
            }
            else if (x == 400 && y == 130){
                emit checarTrilho(ID,4);
            }
            else if (x == 280 && y == 150){
                emit liberarTrilho(4);
                x-=10;
            }
            else if (y == 30 && x < 400)
                x+=10;
            else if (x == 400 && y < 150)
                y+=10;
            else if (x > 230 && y == 150)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y, velocidade);    //Emite um sinal
            break;
         case 3: //Trem 3
            if (x == 420 && y == 150){
                emit checarTrilho(ID,1);
            }
            else if (x == 420 && y == 30){
                emit liberarTrilho(1);
                x+=10;
            }
            else if (x == 480 && y == 150){
                emit checarTrilho(ID,5);
            }
            else if (x == 400 && y == 130){
                emit liberarTrilho(5);
                y-=10;
            }
            else if (y == 30 && x < 600)
                x+=10;
            else if (x == 600 && y < 150)
                y+=10;
            else if (x > 400 && y == 150)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y, velocidade);    //Emite um sinal
            break;
        case 4: //Trem 4
             if (x == 320 && y == 280){
                emit checarTrilho(ID,6);
            }
            else if (x == 320 && y == 150){
                emit liberarTrilho(6);
                x+=10;
            }
            else if (x == 380 && y == 150){
                emit checarTrilho(ID,5);
            }
            else if (x == 460 && y == 170){
                emit liberarTrilho(5);
                y+=10;
             }
            else if (x == 300 && y == 170){
                 emit checarTrilho(ID,4);
            }
            else if (x == 420 && y == 150){
                emit liberarTrilho(4);
                x+=10;
            }
            else if (y == 150 && x < 460)
                x+=10;
            else if (x == 460 && y < 280)
                y+=10;
            else if (x > 300 && y == 280)
                x-=10;
            else
                y-=10;
            emit updateGUI(ID, x,y, velocidade);    //Emite um sinal
            break;
        case 5:
            if (x == 150 && y == 170){
                emit checarTrilho(ID,2);
            }
            else if (x == 250 && y == 150){
                emit liberarTrilho(2);
                x+=10;
            }
            else if (x == 210 && y == 150){
                emit checarTrilho(ID,3);
            }
            else if (x == 300 && y == 170){
                emit liberarTrilho(3);
                y+=10;
            }
            else if (x == 280 && y == 150) {
                emit checarTrilho(ID,6);
            }else if(x == 280 && y == 280){
                emit liberarTrilho(6);
                x-=10;
            }
            else if (y == 150 && x < 300)
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

//!(trilhos[5] == BUSY && trilhos[1] == BUSY && trilhos[2] == BUSY && trilhos[6] == BUSY) && !(trilhos[2] == BUSY && trilhos[4] == BUSY && trilhos[6] == BUSY)




