#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;
    int telefone;

public:
    Pessoa();
    Pessoa(string nome);
    Pessoa(string nome, int idade, int telefone);

    void setNome(string nome);
    void setIdade(int idade);
    void setTelefone(int telefone);

    string getNome();
    int getIdade();
    int getTelefone();
};

#endif // PESSOA_H
