#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<conio.h>
#include"rlutil.h"
#include<cstring>

using namespace std;

#include "funciones.h"
#include "funcionesGenerales.h"

showItem(const char* text, int posx, int posy, bool selected){

    if(selected){
        rlutil::setBackgroundColor(rlutil::BLACK);
    }else{
        rlutil::setBackgroundColor(rlutil::GREEN);
    }
    rlutil::locate(posx, posy);
    cout<< text <<endl;
    rlutil::setBackgroundColor(rlutil::GREEN);

}

int main(){
int opc, puntaje= 0, tiradas= 0, puntajeMax= 0, tiradasMax = 0;
char ganador[30], ganadorMax[30];
//rlutil::setBackgroundColor(rlutil::BLACK);

int op = 1, y = 0;


while(true){
    rlutil::cls();
    ///rlutil::setBackgroundColor(rlutil::BLACK);
    ///rlutil::setColor(rlutil::WHITE);
    rlutil::hidecursor();

    rlutil::locate(30,10);

    cout<<" JUEGO NUEVO DE A 1."<<endl;
    rlutil::locate(30,11);
    cout<<" JUEGO NUEVO ENTRE 2."<<endl;
    rlutil::locate(30,12);
    cout<<" MOSTRAR PUNTUACION MAS ALTA."<<endl;
    rlutil::locate(30,13);
    cout<<" SALIR."<<endl;
    showItem(" JUEGO NUEVO DE A 1.", 30, 10, y== 0);
    showItem(" JUEGO NUEVO DE A 2.", 30, 11, y== 1);
    showItem(" MOSTRAR PUNTUACION MAS ALTA.", 30, 12, y== 2);
    showItem(" SALIR.", 30, 13, y== 3);
    rlutil::locate(28,10 + y);
    cout<<(char)175 <<endl;

    int key = rlutil::getkey();
    //cout<<key<<endl;
    switch(key){
        case 14: //arriba
            rlutil::locate(28,10 + y);
            cout<<" " <<endl;
            y--;
            if(y < 0){
                y = 0;
            }
            break;
        case 15: //abajo
            rlutil::locate(28,10 + y);
            cout<<" " <<endl;
            y++;
            if(y > 3){
                y= 3;
            }
            break;
        case 1: //enter
            switch(y){
                case 0 :
                    PARTIDA(ganador, puntaje, tiradas);

                    break;
                case 1:
                    PARTIDA2(ganador, puntaje, tiradas);
                    break;
                case 2:
                    if(puntaje > puntajeMax){
                        puntajeMax = puntaje;
                        tiradasMax = tiradas;
                        strcpy(ganadorMax,ganador);
                    }
                    cout<<"EL JUGADOR: "<<ganadorMax<<" POSEE EL RECORD DE PUNTUACION CON UN TOTAL DE: "<<puntajeMax<<" PUNTOS, EN "<<tiradasMax<<" TIRADAS."<<endl;
                    system("pause");
                    break;
                case 3:
                    return 0;
                    break;


            }

            break;

    }
}
}










    /*

    cout<<"1- JUEGO NUEVO DE A 1."<<endl<<
    "2- JUEGO NUEVO ENTRE 2."<<endl<<
    "3- MOSTRAR PUNTUACION MAS ALTA."<<endl<<
    "4- SALIR."<<endl;
    cin>>opc;
    switch(opc){
case 1:
    PARTIDA(ganador, puntaje, tiradas);
    break;
case 2:
    PARTIDA2(ganador, puntaje, tiradas);
    break;
case 3:
    if(puntaje>puntajeMax){
        puntajeMax = puntaje;
        tiradasMax = tiradas;
        strcpy(ganadorMax,ganador);
        }
        cout<<"EL JUGADOR: "<<ganadorMax<<" POSEE EL RECORD DE PUNTUACION CON UN TOTAL DE: "<<puntajeMax<<" PUNTOS, EN "<<tiradasMax<<" TIRADAS."<<endl;
    rlutil::anykey();
    break;
case 4:
    return 0;
    break;
default:
    cout<<"- OPCION INCORRECTA -"<<endl;
    rlutil::anykey();
    }
}
}*/

