#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice in1;
    in1.setCodItem(3023230);
    in1.setDescricao("Novo");
    in1.setPreco(450);
    in1.setQitem(3);

    Invoice in2(598083, 25, 6, "Padrao");

    cout << "Numero: " << in1.getCodItem() << endl;
    cout << "Quatidade comprada: " << in1.getQitem() << endl;
    cout << "Preço do item: " << in1.getPreco() << endl;
    cout << "Descricao: " << in1.getDescricao() << endl;
    cout << "Total da fatura: " << in1.getInvoiceAmount() << endl;
    cout <<  endl;

    cout << "Numero: " << in2.getCodItem() << endl;
    cout << "Quatidade comprada: " << in2.getQitem() << endl;
    cout << "Preço do item: " << in2.getPreco() << endl;
    cout << "Descricao: " << in2.getDescricao() << endl;
    cout << "Total da fatura: " << in2.getInvoiceAmount() << endl;


    return 0;
}
