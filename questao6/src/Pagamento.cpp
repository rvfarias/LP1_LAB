#include "Pagamento.h"

#include <string>

Pagamento::Pagamento()
{
   nome = "****";
   valorPagamento = 0;
}

Pagamento::Pagamento(double valorPagamento, std::string nome)
{

        this->nome = nome;
        this->valorPagamento = valorPagamento;
}

void Pagamento::setValorPagamento(double valorPagamento)
{

    this->valorPagamento = valorPagamento;

}

void Pagamento::setNome(std::string nome)
{

    this->nome = nome;

}

double Pagamento::getValorPagamento()
{

    return valorPagamento;

}

std::string Pagamento::getNome()
{

    return nome;

}

