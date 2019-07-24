#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

using namespace std;

int main()
{
    ControleDePagamentos c1;

    Pagamento p1 = Pagamento(1200, "Joao");
    c1.setPagamentos(0, p1);

    p1 = Pagamento(1500, "Trump");
    c1.setPagamentos(1, p1);

    p1 = Pagamento(5000, "Maria");
    c1.setPagamentos(2, p1);

    p1 = Pagamento(1200, "Ana");
    c1.setPagamentos(3, p1);

    c1.print();

    cout << "\nTotal de pagamentos: " << c1.TotalDePagamentos() << endl;
    cout << "Resultado da verificacao: " << c1.VerificaFuncionario("Joao") << endl;

    return 0;
}
