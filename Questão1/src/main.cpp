#include <iostream>
#include "Data.h"

using namespace std;

int main(){

    Data data1(30, 4, 2019);
    Data data2(20, 14, 2000);
    Data *data3 = new Data(31, 12, 2000);

    data1.avancarDia();
    data3->avancarDia();

    cout << "A data eh: " << data1.getDia() << "/" << data1.getMes() << "/" << data1.getAno();
    cout << endl;
    cout << "A data eh: " << data2.getDia() << "/" << data2.getMes() << "/" << data2.getAno();
    cout << endl;
    cout << "A data eh: " << data3->getDia() << "/" << data3->getMes() << "/" << data3->getAno();
    cout << endl;

}
