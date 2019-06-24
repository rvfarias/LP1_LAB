typedef struct
{
        char titulo[100];
        int pavimentos;
        int quartos;
        double area_terreno;
        double area_construida;
        double preco;
        bool status;
} tCasa;

typedef struct
{
        char titulo[100];
        int andar;
        int quartos;
        int vagas_garagem;
        double area;
        double valor_condominio;
        double preco;
        char posicao[100];
        bool status;
} tApartamento;

typedef struct
{
        char titulo[100];
        double area;
        double preco;
        bool status;
} tTerreno;
