#include <iostream>
#include <iomanip>
#include "Data.h"
using namespace std;

int main()
{
    Data d1(50, 4, 2019);
    Data d2(30, 14, 2000);
    Data *d3 = new Data(31, 12, 2000);

    cout << "A data 1: " << setfill('0') << setw(2) << d1.getDia() << "/" << setfill('0') << setw(2) << d1.getMes() << "/" << d1.getAno();
    cout << endl;
    cout << "A data 2: " << setfill('0') << setw(2) << d2.getDia() << "/" << setfill('0') << setw(2) << d2.getMes() << "/" << d2.getAno();
    cout << endl;
    cout << "A data 3: " << setfill('0') << setw(2) << d3->getDia() << "/" << setfill('0') << setw(2) << d3->getMes() << "/" << d3->getAno();
    cout << endl;

    d1.avancarDia();
    d2.avancarDia();
    d3->avancarDia();

    cout << endl;
    cout << "A data 1: " << setfill('0') << setw(2) << d1.getDia() << "/" << setfill('0') << setw(2) << d1.getMes() << "/" << d1.getAno();
    cout << endl;
    cout << "A data 2: " << setfill('0') << setw(2) << d2.getDia() << "/" << setfill('0') << setw(2) << d2.getMes() << "/" << d2.getAno();
    cout << endl;
    cout << "A data 3: " << setfill('0') << setw(2) << d3->getDia() << "/" << setfill('0') << setw(2) << d3->getMes() << "/" << d3->getAno();
    cout << endl;


    return 0;
}
