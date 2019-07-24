#ifndef INVOICE_H
#define INVOICE_H

#include <string>

using namespace std;

class Invoice
{

private:

    int codItem;                                //Número do item faturado
    int qItem;                                  //Quantidade compreda do item
    double preco;                               //Preço unitário
    string descricao;                               //Descrição do item


public:

    Invoice();                                  //Construtor de inicialização
    Invoice(int codItem, int qItem, double preco, string decricao);
    //Métodos set
    void setCodItem(int codItem);
    void setQitem(int qItem);
    void setPreco(double preco);
    void setDescricao(string descricao);

    //Métodos get
    int getCodItem();
    int getQitem();
    double getPreco();
    string getDescricao();
    double getInvoiceAmount();
};

#endif // INVOICE_H
