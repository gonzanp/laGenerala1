#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<conio.h>
#include<cstring>
#include"rlutil.h"

using namespace std;

#include "funciones.h"
#include "funcionesGenerales.h"
int main(){
int opc, puntaje= 0, tiradas= 0, puntajeMax= 0, tiradasMax = 0;
char ganador[30], ganadorMax[30];
rlutil::setBackgroundColor(rlutil::GREEN);


while(true){
    rlutil::cls();
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
}


