#include "Invoice.h"
#include <string>

using namespace std;

Invoice::Invoice(){

    setCodItem(111111);
    setQitem(0);
    setPreco(0);
    setDescricao("Padrão");

}

Invoice:: Invoice(int codItem, int qItem, double preco, string descricao){

    setCodItem(codItem);
    setQitem(qItem);
    setPreco(preco);
    setDescricao(descricao);

}

    void Invoice::setCodItem(int codItem){

        this->codItem = codItem;

    }

    void Invoice::setQitem(int qItem){

        if(qItem < 1){
            this->qItem = 0;

        }else{

            this->qItem = qItem;
        }
    }

    void Invoice::setPreco(double preco){

        if(preco < 1){
            this->preco = 0;

        }else{

            this->preco = preco;
        }
    }

    void Invoice::setDescricao(string descricao){

        this->descricao = descricao;

    }


    int Invoice::getCodItem(){

        return codItem;
    }

    int Invoice::getQitem(){

        return qItem;

    }

    double Invoice::getPreco(){

        return preco;

    }

    string Invoice::getDescricao(){

        return descricao;
    }

    double Invoice::getInvoiceAmount(){

        return preco*qItem;
    }
