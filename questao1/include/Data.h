#ifndef DATA_H
#define DATA_H


class Data
{
private:
    int dia;
    int mes;
    int ano;

    public:
        Data();
        Data(int dia, int mes, int ano);

        void avancarDia();
        void setDia(int dia);
        void setMes(int mes);
        void setAno(int ano);
        int getDia();
        int getMes();
        int getAno();

};

#endif // DATA_H
