#include "ControleDeGastos.h"
#include <iostream>

ControleDeGastos::ControleDeGastos()
{

}

void ControleDeGastos::setDespesa(int pos, Despesa d)
{

    despesas[pos] = d;

}

void ControleDeGastos::print()
{

    for(int i = 0; i < MAX_TAM; i++)
    {

        if(despesas[i].getValor() > 0){
            std::cout << "----Despesa #" << i+1 << "----\n" << "Tipo: " << despesas[i].getTipo() << endl <<
            "Valor: " << despesas[i].getValor() << endl;
        }

    }
}

double ControleDeGastos::calcula()
{
    double total = 0;

    for(int i = 0; i < MAX_TAM; i++){

            total += despesas[i].getValor();
    }

    return total;
}

bool ControleDeGastos::verifica(string tipo)
{

        for(int i = 0; i < MAX_TAM; i++)
        {
            if(despesas[i].getTipo() == tipo)
            {
                        return true;

            }

        }

        return false;

}

