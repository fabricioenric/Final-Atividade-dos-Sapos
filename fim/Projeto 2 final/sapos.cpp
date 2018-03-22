#include <iostream>
#include "classes.hpp"

int Sapos::getQtd(){
    return qtd;
}

void Sapos::setQtd(int q){
    qtd = q;
}

double Frogs::getIntensidade(){
    return intensidade;
}

void Frogs::setIntensidade(double intens){
    intensidade = intens;
}

Sapos::Sapos(int identificador1){

       tipo1 = identificador1;

       if(tipo1 == 1){
         setQtd(50);
       }

       else if(tipo1 == 2){
         setQtd(50);
       }

       else if(tipo1 == 3){
         setQtd(50);
       }
}

Frogs::Frogs(int identificador2){

       tipo2 = identificador2;

       if(tipo2 == 1){
         setIntensidade(10);
       }

       else if(tipo2 == 2){
         setIntensidade(9.8);
       }

       else if(tipo2 == 3){
         setIntensidade(9.6);
       }
}
