#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main()
{
    ControleDeGastos c1;                                                    //Objeto 1 da classe controle de gastos

    Despesa d1 = Despesa(25, "Lanche");                                     //Objeto 1 da classe despesa
    c1.setDespesa(0, d1);

    d1 = Despesa(50, "Cinema");                                             //Objeto 2 da classe despesa
    c1.setDespesa(1, d1);

    d1 = Despesa(200, "Feira");                                             //Objeto 3 da classe despesa
    c1.setDespesa(2, d1);

    cout << "--------Objeto 1--------\n\n";

    c1.print();

    cout << "\nTotal de despesas: " << c1.calcula() << endl;                //Retorna o total de despesas
    cout << "Resultado da verificacao: " << c1.verifica("Lanche") << endl << endl;              //Verifica o tipo de despesa mecionado

    cout << "--------Objeto 2--------\n\n";

    ControleDeGastos c2;                                                    //Objeto 2 da classe controle de gastos

    Despesa d2 = Despesa(300, "Vestuario");                                 //Objeto 1 da classe despesa
    c2.setDespesa(0, d2);

    d2 = Despesa(50, "Manutencao");                                         //Objeto 2 da classe despesa
    c2.setDespesa(1, d2);

    d2 = Despesa(145.99, "Alimentacao");                                    //Objeto 3 da classe despesa
    c2.setDespesa(2, d2);



    c2.print();
    cout << "\nTotal de despesas: " << c2.calcula() << endl;                //Retorna o total de despesas
    cout << "Resultado da verificacao: " << c2.verifica("Lanche")  << endl;                     //Verifica o tipo de despesa mecionado


    return 0;
}
