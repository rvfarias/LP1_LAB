#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H

#include "Despesa.h"
#define MAX_TAM 10

class ControleDeGastos
{

private:

   Despesa despesas[MAX_TAM];                           //Vetor que armazena objetos da classe Despesa

public:
    ControleDeGastos();                                 //Construtor de inicializa��o

    //M�todo set
    void setDespesa(int pos, Despesa d);

    void print();                                       //M�todo que printa todas as despesas
    double calcula();                                   //M�todo que soma todas as despesas
    bool verifica(string tipo);                         //M�todo que verifica o tipo recebido como parametro
};

#endif // CONTROLEDEGASTOS_H
