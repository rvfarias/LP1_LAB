#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

#include "Pagamento.h"
#include <string>
#define MAX 10

class ControleDePagamentos
{

private:

    Pagamento pagamentos[MAX];                              //Vetor que armazena  objetos da classe Pagamento

public:

    ControleDePagamentos();                                 //Construtor padrao

    void setPagamentos(int pos, Pagamento p);
    void print();                                           //Printa os objetos armazenados no vetor
    double TotalDePagamentos();                             //Calcula o total de pagamnetos
    bool VerificaFuncionario(std::string nome);             //Verifica se a existencia do parametro passado detro do vetor


};

#endif // CONTROLEDEPAGAMENTOS_H
