#include "ControleDePagamentos.h"
#include "Pagamento.h"
#include <iostream>
#include <string>

ControleDePagamentos::ControleDePagamentos()
{
    //ctor
}

void ControleDePagamentos::setPagamentos(int pos, Pagamento p)
{

    pagamentos[pos] = p;

}

double ControleDePagamentos::TotalDePagamentos()
{

    double total = 0;

    for(int i = 0; i < MAX; i++)
    {

            total += pagamentos[i].getValorPagamento();

    }

    return total;

}

bool ControleDePagamentos::VerificaFuncionario(std::string nome)
{

    for(int i = 0; i< MAX; i++)
    {

        if(pagamentos[i].getNome() == nome)
        {

                return true;

        }

    }

    return false;
}

void ControleDePagamentos::print()
{

    for(int i = 0; i < MAX; i++)
    {
        if(pagamentos[i].getValorPagamento() > 0)
        {
            std::cout << "----Empregado" << i+1 << "----\n" << "Nome: " << pagamentos[i].getNome() << endl <<
            "Salario: " << pagamentos[i].getValorPagamento() << endl;

        }
    }
}
