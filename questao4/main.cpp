#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa p1("Rafael", 18, 999938);
    Pessoa p2("Trump");
    p2.setIdade(35);
    p2.setTelefone(4423536);
    Pessoa p3;
    p3.setNome("Junior");
    p3.setIdade(46);
    p3.setTelefone(55366632);


    cout << "Pessoa 1:" << endl;
    cout << "Nome: " << p1.getNome() << endl;
    cout << "Idade: " << p1.getIdade() << endl;
    cout << "Telefone: " << p1.getTelefone() << endl;
    cout << endl;

    cout << "Pessoa 2:" << endl;
    cout << "Nome: " << p2.getNome() << endl;
    cout << "Idade: " << p2.getIdade() << endl;
    cout << "Telefone: " << p2.getTelefone() << endl;
    cout << endl;

    cout << "Pessoa 3:" << endl;
    cout << "Nome: " << p3.getNome() << endl;
    cout << "Idade: " << p3.getIdade() << endl;
    cout << "Telefone: " << p3.getTelefone() << endl;
    cout << endl;

    return 0;
}
