#ifndef DESPESA_H
#define DESPESA_H

#include <string>

using namespace std;

class Despesa
{

private:

    double valor;                                       //Variável que armazena o valor da despesa
    string tipo;                                        //Variável que armazena o tipo da despesa

public:
    Despesa();                                          //Construtor de inicialização
    Despesa(double valor, string tipo);                 //Construtor com parametros

    //Métodos set
    void setValor(double valor);
    void setTipo(string tipo);

    //Métodos get
    double getValor();
    string getTipo();

};

#endif // DESPESA_H
