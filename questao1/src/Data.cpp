#include "Data.h"

Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 1;

}

Data::Data(int dia, int mes, int ano)
{
    setAno(ano);
    setMes(mes);
    setDia(dia);


}

void Data::setDia(int dia){

    if(dia >= 1 && dia <= 31){

        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){

            this->dia = dia;

        }

        else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){


            if(dia <= 30){

                this->dia = dia;

            }else{

                this->dia = 1;

            }
        }

        else if(mes == 2){

            if(dia <= 28){

                this->dia = dia;

            }else{

                this->dia = 1;
            }
        }

    }else{

        this->dia = 1;
    }

}

void Data::setMes(int mes){

        if(mes >= 1 && mes <= 12){

            this->mes = mes;

        }else{

            this->mes = 1;

        }
}

void Data::setAno(int ano){

    this->ano = ano;

}

void Data::avancarDia(){

    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){

        if(dia < 31){

            dia++;
            this->dia = dia;

        }

        else if(mes == 12 && dia == 31){

            this->dia = 1;
            this->mes = 1;
            ano++;
            this->ano = ano;

        }else{

            this->dia = 1;
            mes++;
            this->mes = mes;
        }
    }

    else if(this->mes == 2){

        if(dia < 28){

            dia++;
            this->dia = dia;

        }else{

            this->dia = 1;
            mes++;
            this->mes = mes;
        }
    }

    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){

        if(dia < 30){

            dia++;
            this->dia = dia;

        }else{

            this->dia = 1;
            mes++;
            this->mes = mes;
        }
    }

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
