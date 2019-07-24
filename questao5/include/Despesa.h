#ifndef DESPESA_H
#define DESPESA_H

#include <string>

using namespace std;

class Despesa
{

private:

    double valor;                                       //Vari�vel que armazena o valor da despesa
    string tipo;                                        //Vari�vel que armazena o tipo da despesa

public:
    Despesa();                                          //Construtor de inicializa��o
    Despesa(double valor, string tipo);                 //Construtor com parametros

    //M�todos set
    void setValor(double valor);
    void setTipo(string tipo);

    //M�todos get
    double getValor();
    string getTipo();

};

#endif // DESPESA_H
