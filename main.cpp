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
while(true){
    cout<<"1-Juego nuevo de a 1."<<endl<<
    "2 Juego nuevo entre 2."<<endl<<
    "3 Mostrar puntuacion mas alta."<<endl<<
    "4 Salir."<<endl;
    cin>>opc;
    switch(opc){
case 1:comenzarRonda(ganador, puntaje, tiradas);
    break;
case 2:
    comenzarRonda2(ganador, puntaje, tiradas);
    break;
case 3:
    if(puntaje > puntajeMax){
        puntajeMax = puntaje;
        tiradasMax = tiradas;
        strcpy(ganadorMax,ganador);
        }
        cout<<"el jugador: "<<ganadorMax<<" posee el record de puntuación con un total de "<<puntajeMax<<" puntos, en "<<tiradasMax<<" tiradas."<<endl;
    system("pause");
    break;
case 4:
    return 0;
    break;
default:
    cout<<"opción incorrecta"<<endl;
    }
}
}


