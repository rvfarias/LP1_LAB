#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

using namespace std;

class Empregado
{
private:

    string nome;
    string sobrenome;
    double salario;

    public:
        Empregado();
        Empregado(string nome, string sobrenome, double salario);

        void setNome(string nome);
        void setSobrenome(string sobrenome);
        void setSalario(double salario);
        string getNome();
        string getSobrenome();
        double getSalario();
        double getSalarioAnual();
        void setAumento();


};

#endif // EMPREGADO_H
