#include <iostream>
#include "classes.hpp"

int Sapos::getQtd(){
    return qtd;
}

void Sapos::setQtd(int q){
    qtd = q;
}

Sapos::Sapos(int identificador){

       tipo = identificador;

       if(tipo == 1){
         setQtd(50);
       }

       else if(tipo == 2){
         setQtd(50);
       }

       else if(tipo == 3){
         setQtd(50);
       }
}
