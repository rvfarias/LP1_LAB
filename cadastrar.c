#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "cadastrar.h"
#include "structs.h"

// void CadastraCasa();                               // Cadastra imoveis tipo Casa
//void CadastraApartamento();                        // Cadastra imoveis tipo Apartamento
//void CadastraTerreno();                            // Cadastra imoveis tipo Terreno

void CadastraCasa(int Num)
{
  int size;                                       //Tamanho da string
  FILE *imoveis;                                  // Arquivo que armazena dados dos imoveis
  tCasa casa[Num];

  imoveis = fopen("Casa.txt", "a");

  if(imoveis == NULL){
    puts("FAIL");
  }

  for(int i=0; i<Num; i++){

    printf("Digite o titulo da casa:\n");
    setbuf(stdin, NULL);
    fgets(casa[i].titulo, "%s", stdin);
    size = strlen(casa[i].titulo);
    casa[i].titulo[tam-1] = '\0';

    printf("Digite o numero de pavimentos:\n");
    scanf("%d", &casa[i].pavimentos);
    printf("Digite o numero de quartos:\n");
    scanf("%d", &casa[i].quartos);
    printf("Digite a area do terreno:\n");
    scanf("%lf", &casa[i].area_terreno);
    printf("Digite a area da casa:\n");
    scanf("%lf", &casa[i].area_construida);
    printf("Informe o valor da casa:\n");
    scanf("%lf", &casa[i].preco);
    printf("Informe o status da casa:\n");
    scanf("%i", &casa[i].status);

  }

  for(int i=0; i<Num; i++){
      fprintf(fp, "%s\n", casa[i].titulo);
      fprintf(fp, "%d\n", casa[i].pavimentos);
      fprintf(fp, "%d\n", casa[i].quartos);
      fprintf(fp, "%lf\n", casa[i].area_terreno);
      fprintf(fp, "%lf\n", casa[i].area_construida);
      fprintf(fp, "%lf\n", casa[i].preco);
      fprintf(fp, "%i\n", casa[i].status);
  }

  fclose(imoveis);

  return 0;
}

void CadastraApartamento(int Num)
{
  int size;
  FILE *imoveis;
  tApartamento apartamento[Num];

  imoveis = fopen("Apartamento.txt", "a");

  if(imoveis == NULL){
    puts("FAIL");
  }

  for(int i=0; i<Num; i++){

    printf("Digite o titulo da casa:\n");
    setbuf(stdin, NULL);
    fgets(apartamento[i].titulo, "%s", stdin);
    size = strlen(apartamento[i].titulo);
    casa[i].titulo[tam-1] = '\0';

    printf("Digite o andar do apartamento:\n");
    scanf("%d", &apartamento[i].andar);
    printf("Digite o numero de quartos:\n");
    scanf("%d", &apartamento[i].quartos);
    scanf("%d", &apartamento[i].vagas_garagem);
    printf("Digite a area do apartamento:\n");
    scanf("%lf", &apartamento[i].area);
    printf("Informe o valor do condominio:\n");
    scanf("%lf", &apartamento[i].valor_condominio);
    printf("Informe o valor do apartamento:\n");
    scanf("%lf", &apartamento[i].preco);

    setbuf(stdin, NULL);
    fgets(apartamento[i].posicao, "%s", stdin);
    size = strlen(apartamento[i].titulo);
    apartamento[i].titulo[tam-1] = '\0';

    scanf("%i", &apartamento[i].status);

    }

    for(int i=0; i<Num; i++){

      fprintf(fp, "%s\n", apartamento[i].titulo);
      fprintf(fp, "%d\n", apartamento[i].andar);
      fprintf(fp, "%d\n", apartamento[i].quartos);
      fprintf(fp, "%lf\n", apartamento[i].vagas_garagem);
      fprintf(fp, "%lf\n", apartamento[i].area);
      fprintf(fp, "%lf\n", apartamento[i].valor_condominio);
      fprintf(fp, "%lf\n", apartamento[i].preco);
      fprintf(fp, "%s\n", apartamento[i].posicao);
      fprintf(fp, "%i\n", apartamento[i].status);

    }

    fclose(imoveis);

    return 0;
}

void CadastraTerreno(int Num_Imov)
{
  int size;
  FILE *imoveis;
  tTerreno terreno[Num_Imov];

  imoveis = fopen("Terreno.txt", "a");

  if(imoveis == NULL){
    puts("FAIL");
  }

  for(int i=0; i<Num_Imov; i++){

      setbuf(stdin, NULL);
      fgets(terreno[i].titulo, "%s", stdin);
      size = strlen(apartamento[i].titulo);
      casa[i].titulo[tam-1] = '\0';

      scanf("%lf", &terreno[i].area);
      scanf("%lf", &terreno[i].preco);
      scanf("%i", &terreno[i].status);

  }

  for(int i=0; i<Num_Imov; i++){

      fprintf(imoveis, "%s\n", terreno[i].titulo);
      fprintf(imoveis, "%d\n", terreno[i].area);
      fprintf(imoveis, "%lf\n", terreno[i].preco);
      fprintf(imoveis, "%i\n", terreno[i].status);
  }

  fclose(imoveis);

  return 0;

  }
