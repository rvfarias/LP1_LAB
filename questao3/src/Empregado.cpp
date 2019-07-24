#include "Empregado.h"

Empregado::Empregado(){

}

Empregado::Empregado(string nome, string sobrenome, double salario)
{

    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);

}

void Empregado::setNome(string nome){

    this->nome = nome;

}

void Empregado::setSobrenome(string sobrenome){

    this->sobrenome = sobrenome;
}

void Empregado::setSalario(double salario){

    this->salario = salario;
}

string Empregado::getNome(){

    return nome;
}

string Empregado::getSobrenome(){

    return sobrenome;
}

double Empregado::getSalario(){

    return salario;
}

double Empregado::getSalarioAnual(){

    return salario*12;
}

void Empregado::setAumento(){

     this->salario=(salario + (salario*0.01));
}
