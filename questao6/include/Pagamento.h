#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>

using namespace std;

class Pagamento
{

private:

    double valorPagamento;
    string nome;

public:

    Pagamento();                                                              //Construtor padrao
    Pagamento(double valorPagamento, string nome);                            //Construtor de inicializacao

    //M�todos set
    void setValorPagamento(double valorPagamento);
    void setNome(string nome);

    //M�todos get
    double getValorPagamento();
    string getNome();

};

#endif // PAGAMENTO_H
