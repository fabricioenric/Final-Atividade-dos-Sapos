#include <iostream>
#include "classes.hpp"
#include "sapos.cpp"
#include <stdlib.h>
#include <time.h>

int total = 1000;

using namespace std;

int main(){

    string sapo1,sapo2,sapo3,corrida;
    cout << "Digite o nome do primeiro sapo: ";
    getline(cin, sapo1);
    cout << "Digite o nome do primeiro sapo: ";
    getline(cin, sapo2);
    cout << "Digite o nome do primeiro sapo: ";
    getline(cin, sapo3);

    Sapos *s1 = new Sapos(1);
    Sapos *s2 = new Sapos(2);
    Sapos *s3 = new Sapos(3);

    cout << "" << endl;
    cout << "Com um numero de " <<s1->getQtd() << ", o sapo " << sapo1 << " percorre, " << s1->getQtd() << " unidades de distancia por pulo" << endl;
    cout << "Com um numero de " <<s2->getQtd() << ", o sapo " << sapo2 << " percorre, " << s2->getQtd() << " unidades de distancia por pulo" << endl;
    cout << "Com um numero de " <<s3->getQtd() << ", o sapo " << sapo3 << " percorre, " << s3->getQtd() << " unidades de distancia por pulo" << endl;

    srand(time(0));
    int imprevisto1 = rand() % 80;
    int imprevisto2 = rand() % 65;
    int imprevisto3 = rand() % 50;

    int percorre1 = 0;
    int percorre2 = 0;
    int percorre3 = 0;

    cout << "" << endl;
    cout << "Digite corrida para simular uma corrida entre sapos: " << endl;
    getline(cin, corrida);

    for(int i = 0; i <= total; i++){

    percorre1 += s1->getQtd();
    percorre2 += s2->getQtd();
    percorre3 += s3->getQtd();

    }

    int resultado1 = percorre1 - imprevisto1;
    int resultado2 = percorre2 - imprevisto2;
    int resultado3 = percorre3 - imprevisto3;

    cout << "" << endl;
    if(resultado1 > resultado2 && resultado1 > resultado3)
        cout << "Resultado: Sapo " << sapo1 << " eh o vencedor." << endl;

    else if(resultado2 > resultado1 && resultado2 > resultado3)
        cout << "Resultado: Sapo " << sapo2 << " eh o vencedor." << endl;

    else if(resultado3 > resultado1 && resultado3 > resultado2)
        cout << "Resultado: Sapo " << sapo3 << " eh o vencedor." << endl;

    else if(resultado1 == resultado2 && resultado1 > resultado3 && resultado2 > resultado3)
        cout << "Resultado: Empate entre " << sapo1 << " e " << sapo2 << endl;

    else if(resultado1 == resultado3 && resultado1 > resultado2 && resultado3 > resultado2)
        cout << "Resultado: Empate entre " << sapo1 << " e " << sapo3 << endl;

    else if(resultado2 == resultado3 && resultado2 > resultado1 && resultado2 > resultado1)
        cout << "Resultado: Empate entre " << sapo2 << " e " << sapo3 << endl;

    else if(resultado1 == resultado2 && resultado1 == resultado3)
        cout << "Resultado: Empate." << endl;


    return 0;
}
