#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include<iostream>

using namespace std;
class Data{

    private:
    int dia;
    int mes;
    int ano;

    public:
    Data();
    Data(int dia, int mes, int ano);

    void avancarDia();
    void setDia(int dia);
    void setMes(int mes);
    void setAno(int ano);
    int getDia();
    int getMes();
    int getAno();

};

#endif // DATA_H_INCLUDED
