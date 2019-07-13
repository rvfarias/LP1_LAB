#include <iostream>
#include "Data.h"

using namespace std;

Data::Data(){

    setDia(1);
    setMes(1);
    setAno(0001);
}

Data::Data(int dia, int mes, int ano)
    :Data()
{

    setDia(dia);
    setMes(mes);
    setAno(ano);
}

void Data::avancarDia(){

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){

        if(dia <31){

            dia++;

        }

        else if(mes == 12 && dia == 31){

            dia = 1;
            mes = 1;
            ano++;

        }else{

            dia = 1;
            mes++;
        }
    }

    else if(mes == 2){

        if(dia <28){

            dia++;

        }else{

            dia = 1;
            mes++;
        }
    }

    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){

        if(dia < 30){

            dia++;

        }else{

            dia = 1;
            mes++;
        }
    }

}

void Data::setDia(int dia){

    if(dia > 0 && dia <= 31){

        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){

             this->dia = dia;
        }

        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){

            if(dia <= 30){
                this->dia = dia;
            }else{

                cout << "Dia invalido!!" << endl;
            }
        }

        else if(mes == 2){

            if(dia <= 28){

                this->dia = dia;
            }else{

            cout << "Dia invalido!!" << endl;

            }
        }

    }else{
            cout << "Dia invalido!!" << endl;
    }

}

void Data::setMes(int mes){

    if(mes > 0 && mes <= 12){

        this->mes = mes;

    }/*else{

        cout << "Mes invalido!!" << endl;
    }
    */
}

void Data::setAno(int ano){

    this->ano = ano;

}

int Data::getDia(){

    return dia;
}

int Data::getMes(){

    return mes;
}

int Data::getAno(){

    return ano;
}
