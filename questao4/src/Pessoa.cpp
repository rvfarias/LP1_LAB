#include "Pessoa.h"

Pessoa::Pessoa()
{
    //ctor
}

Pessoa::Pessoa(string nome)
{
    setNome(nome);
}

Pessoa::Pessoa(string nome, int idade, int telefone)
{
    setNome(nome);
    setIdade(idade);
    setTelefone(telefone);

}

void Pessoa::setNome(string nome)
{

    this->nome = nome;

}

void Pessoa::setIdade(int idade)
{

    this->idade = idade;

}

void Pessoa::setTelefone(int telefone)
{

    this->telefone = telefone;

}


string Pessoa::getNome()
{

    return nome;

}


int Pessoa::getIdade()
{

    return idade;

}


int Pessoa::getTelefone()
{

    return telefone;

}
