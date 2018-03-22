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

    Frogs *p1 = new Frogs(1);
    Frogs *p2 = new Frogs(2);
    Frogs *p3 = new Frogs(3);

    cout << "" << endl;
    cout << "O primeiro sapo eh mais forte e mais distraido: exemplo: Com um numero de " <<s1->getQtd() << " pulos, e intensidade " << p1->getIntensidade() << ", o sapo " << sapo1 << " percorre, " << s1->getQtd() * p1->getIntensidade() << " unidades de distancia" << endl;
    cout << "O segundo sapo eh forte e distraido: exemplo: Com um numero de " <<s2->getQtd() << " pulos, e intensidade " << p2->getIntensidade() << ", o sapo " << sapo2 << " percorre, " << s2->getQtd() * p2->getIntensidade() << " unidades de distancia" << endl;
    cout << "O terceiro sapo eh menos forte e menos distraido: exemplo: Com um numero de " <<s3->getQtd() << " pulos, e intensidade " << p3->getIntensidade() << ", o sapo " << sapo3 << " percorre, " << s3->getQtd() * p3->getIntensidade() << " unidades de distancia" << endl;

    srand(time(0));
    int imprevisto1 = rand() % 8;
    int imprevisto2 = rand() % 7;
    int imprevisto3 = rand() % 6;

    int percorre1 = 0;
    int percorre2 = 0;
    int percorre3 = 0;

    cout << "" << endl;
    cout << "Digite corrida para simular uma corrida entre sapos: " << endl;
    getline(cin, corrida);

    for(int i = 0; i <= total; i++){

    percorre1 += p1->getIntensidade() - imprevisto1;
    percorre2 += p2->getIntensidade() - imprevisto2;
    percorre3 += p3->getIntensidade() - imprevisto3;

    }

    int resultado1 = percorre1;
    int resultado2 = percorre2;
    int resultado3 = percorre3;

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
