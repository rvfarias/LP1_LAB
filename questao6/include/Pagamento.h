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

    //Métodos set
    void setValorPagamento(double valorPagamento);
    void setNome(string nome);

    //Métodos get
    double getValorPagamento();
    string getNome();

};

#endif // PAGAMENTO_H
