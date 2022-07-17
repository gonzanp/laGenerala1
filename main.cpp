#include<iostream>
#include<stdlib.h>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<conio.h>
#include"rlutil.h"


using namespace std;
#include "funciones.h"
#include "funcionesGenerales.h"
int main(){
int opc;
    cout<<"1-Juego nuevo de a 1."<<endl<<
    "2 Juego nuevo entre 2."<<endl<<
    "3 Mostrar puntuacion mas alta."<<endl<<
    "4 Salir."<<endl;
    cin>>opc;
    switch(opc){
case 1:comenzarRonda();
    break;
case 2:
    comenzarRonda2();
    break;
case 3:
    cout<<"mostrar puntuacion mas alta"<<endl;
    break;
case 4:
    cout<<"salir"<<endl;
    exit(-1);
    break;
default:
    cout<<"opción incorrecta"<<endl;
}
}


