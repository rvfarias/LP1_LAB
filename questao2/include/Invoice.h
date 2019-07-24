#ifndef INVOICE_H
#define INVOICE_H

#include <string>

using namespace std;

class Invoice
{

private:

    int codItem;                                //N�mero do item faturado
    int qItem;                                  //Quantidade compreda do item
    double preco;                               //Pre�o unit�rio
    string descricao;                               //Descri��o do item


public:

    Invoice();                                  //Construtor de inicializa��o
    Invoice(int codItem, int qItem, double preco, string decricao);
    //M�todos set
    void setCodItem(int codItem);
    void setQitem(int qItem);
    void setPreco(double preco);
    void setDescricao(string descricao);

    //M�todos get
    int getCodItem();
    int getQitem();
    double getPreco();
    string getDescricao();
    double getInvoiceAmount();
};

#endif // INVOICE_H
