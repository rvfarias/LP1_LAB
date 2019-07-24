#include <iostream>
#include "Empregado.h"

using namespace std;

int main()
{

    Empregado e1;
    e1.setNome("Rafael");
    e1.setSobrenome("Farias");
    e1.setSalario(1200);
    Empregado e2("Joao", "Oliveira", 5000);

    cout << "Nome: "  << e1.getNome() << endl;
    cout << "Sobrenome: " << e1.getSobrenome() << endl;
    cout << "Salario: " << e1.getSalario() << endl;
    cout << "Salario anual: " << e1.getSalarioAnual() << endl;
    cout << endl;
    e1.setAumento();
    cout << "Novo salario: " << e1.getSalario() << endl;
    cout << "Salario anual: " << e1.getSalarioAnual() << endl;
    cout << endl;

    cout << "Nome: "  << e2.getNome() << endl;
    cout << "Sobrenome: " << e2.getSobrenome() << endl;
    cout << "Salario: " << e2.getSalario() << endl;
    cout << "Salario anual: " << e2.getSalarioAnual() << endl;
    cout << endl;
    e2.setAumento();
    cout << "Novo salario: " << e2.getSalario() << endl;
    cout << "Salario anual: " << e2.getSalarioAnual() << endl;

    return 0;
}
