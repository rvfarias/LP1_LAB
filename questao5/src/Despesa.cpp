#include "Despesa.h"

Despesa::Despesa()
{
    valor = 0;
    tipo = "Indefinido";
}

Despesa::Despesa(double valor, string tipo)
{

    this->valor = valor;
    this->tipo = tipo;

}

void Despesa::setValor(double valor)
{

    this->valor = valor;

}

void Despesa::setTipo(string tipo)
{

    this->tipo = tipo;

}

double Despesa::getValor()
{

    return valor;

}

string Despesa::getTipo()
{

    return tipo;
}
