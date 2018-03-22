#ifndef CLASSES_HPP_INCLUDED
#define CLASSES_HPP_INCLUDED

class Sapos{

private:

      int qtd;

public:

      //static int total;
      int getQtd();
      void setQtd(int q);
      Sapos(int identificador1);
      int tipo1;

};

class Frogs{

private:

        double intensidade;

public:

        double getIntensidade();
        void setIntensidade(double intens);
        Frogs(int identificador2);
        int tipo2;

};


#endif // CLASSES_HPP_INCLUDED
