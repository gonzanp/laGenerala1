#ifndef FUNCIONESGENERALES_H_INCLUDED
#define FUNCIONESGENERALES_H_INCLUDED
void comenzarRonda();
void comenzarRonda2();
int main();
////
    void comenzarRonda(){
    int dados[5], vPuntos[10], puntajeFinal[10],limite = 6, opc1, rondas=0, tiradasTotales=0, sumaPuntaje = 0, tiradas = 0;
    char vNombre[30];
    bool ganoPartida = false, testeo = false, manual=false, generala=false;

    cout<<"-INGRESE SU NOMBRE: ";
    cargarNombre(vNombre);
    system("cls");

    cout<<"- INGRESE 1(UNO) PARA LA VERSION NORMAL DEL JUEGO."<<endl<<"- INGRESE 2(DOS) PARA LA VERSION DE TESTEO"<<endl;
    cin>>opc1;

    if(opc1 == 2){
    testeo = true;
    }
    switch(opc1){

case 1:
    ponerCero(puntajeFinal,10);
    while(rondas < 10 && ganoPartida == false){
    rondas++;
    manual=false;
    cargarAleatorio(dados, 5, 6);
    ordenarVector(dados, 5);
    asignarValores(dados, 5, vPuntos, puntajeFinal, testeo, ganoPartida, manual, tiradas, rondas, vNombre, sumaPuntaje, tiradasTotales);

    }
    if(ganoPartida == true){

    cout<<"FELICIDADES "<<vNombre<<", OBTUVISTE GENERALA SERVIDA Y GANASTE CON UN PUNTAJE DE: "<<sumaPuntaje<<", CON UNOS TIROS TOTALES DE: "<<tiradasTotales<<endl;
    mostrarVector(puntajeFinal,10);
    }
    if(rondas == 10){
    cout<<"TERMINASTE LA PARTIDA "<<vNombre<<" CON UN PUNTAJE DE: "<<sumaPuntaje<<", CON UNOS TIROS TOTALES DE: "<<tiradasTotales<<endl;
    }
    break;

case 2:
    ponerCero(puntajeFinal,10);
    while(rondas < 10 && ganoPartida == false){
    rondas++;
    manual=true;
    asignarValores(dados, 5, vPuntos, puntajeFinal, testeo, ganoPartida, manual, tiradas, rondas, vNombre, sumaPuntaje, tiradasTotales);
    }
    if(ganoPartida == true){
    cout<<"FELICIDADES "<<vNombre<<", OBTUVISTE GENERALA SERVIDA Y GANASTE CON UN PUNTAJE DE: "<<sumaPuntaje<<" CON UNOS TIROS TOTALES DE: "<<tiradasTotales<<endl;
    }
    if(rondas == 10){
    cout<<"TERMINASTE LA PARTIDA "<<vNombre<<", CON UN PUNTAJE DE: "<<sumaPuntaje<<", CON UNOS TIROS TOTALES DE: "<<tiradasTotales<<endl;
    }
    break;
}
main();
}


    void comenzarRonda2(){
    int dados[5], vPuntos[10], puntajeFinal[10], puntajeFinal2[10], limite = 6, opc1, rondas=0, tiradasTotales=0, tiradasTotales2= 0, sumaPuntaje = 0, sumaPuntaje2 = 0, tiradas = 0;
    char vNombre[30], vNombre2[30];
    bool ganoPartida = false, manual=false, testeo=false;

    cout<<"- INGRESE EL NOMBRE DEL JUGADOR UNO(1): ";
    cargarNombre(vNombre);
    cout<<"- INGRESE EL NOMBRE DEL JUGADOR DOS(2): ";
    cargarNombre(vNombre2);
    ponerCero(puntajeFinal,10);
    ponerCero(puntajeFinal2,10);



    while(rondas < 10 && ganoPartida == false){
            ///jugador 1
    rondas++;
    cargarAleatorio(dados, 5, 6);
    ordenarVector(dados, 5);
    asignarValores(dados, 5, vPuntos, puntajeFinal, testeo, ganoPartida, manual, tiradas, rondas, vNombre, sumaPuntaje, tiradasTotales);


    ///jugador 2

    cargarAleatorio(dados, 5, 6);
    ordenarVector(dados, 5);
    asignarValores(dados, 5, vPuntos, puntajeFinal2, testeo, ganoPartida, manual, tiradas, rondas, vNombre2, sumaPuntaje2, tiradasTotales2);
    }
    sumaPuntaje = sumarVector(puntajeFinal, 10);
    sumaPuntaje2 = sumarVector(puntajeFinal2, 10);

    if(sumaPuntaje > sumaPuntaje2){
    cout<<"EL GANADOR ES EL JUGADOR: "<<vNombre<<" CON UN PUNTAJE DE: "<<sumaPuntaje<<endl;
    }else{
    cout<<"EL GANADOR ES EL JUGADOR: "<<vNombre2<<" CON UN PUNTAJE DE: "<<sumaPuntaje2<<endl;
    }
    main();
}


#endif // FUNCIONESGENERALES_H_INCLUDED
