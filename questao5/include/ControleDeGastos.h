#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H

#include "Despesa.h"
#define MAX_TAM 10

class ControleDeGastos
{

private:

   Despesa despesas[MAX_TAM];                           //Vetor que armazena objetos da classe Despesa

public:
    ControleDeGastos();                                 //Construtor de inicialização

    //Método set
    void setDespesa(int pos, Despesa d);

    void print();                                       //Método que printa todas as despesas
    double calcula();                                   //Método que soma todas as despesas
    bool verifica(string tipo);                         //Método que verifica o tipo recebido como parametro
};

#endif // CONTROLEDEGASTOS_H
