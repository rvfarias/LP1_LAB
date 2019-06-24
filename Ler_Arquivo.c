#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "structs.h"

void LerArqCasa();                               // Ler aquivo de imoveis tipo Casa
void LerArqApartamento();                        // Ler aquivo de tipo Apartamento
void LerArqTerreno();                            // Ler aquivo de tipo Terreno

void LerArqCasa()
{
  FILE *imoveis;                                  // Arquivo que armazena dados dos imoveis
  tCasa casa[Num_Imov];

  imoveis = fopen("Casa.txt", "a");

  if(imoveis == NULL){
    puts("FAIL");
  }

  for(int i=0; i<Num_Imov; i++){

    fgets(casa[i].titulo, "%s", imoveis);
    fscanf(imoveis, "%d", &casa[i].pavimentos);
    fscanf(imoveis, "%d", &casa[i].quartos);
    fscanf(imoveis, "%lf", &casa[i].area_terreno);
    fscanf(imoveis, "%lf", &casa[i].area_construida);
    fscanf(imoveis, "%lf", &casa[i].preco);
    fscanf(imoveis, "%i", &casa[i].status);

  }

  for(int i=0; i<Num_Imov; i++){

      if(terreno[i].status == 0){
        continue;
      }
      printf("Titulo: ");
      printf("%s\n", casa[i].titulo);
      printf("Numero de pavimentos: ");
      printf("%d\n", casa[i].pavimentos);
      printf("Numero de quartos: ");
      printf("%d\n", casa[i].quartos);
      printf("Area do terreno: ");
      printf("%lf\n", casa[i].area_terreno);
      printf("Area da casa: ");
      printf("%lf\n", casa[i].area_construida);
      printf("Valor da residencia: ");
      printf("%lf\n", casa[i].preco);
  }

  fclose(imoveis);

  return 0;
}

void LerArqApartamento()
{
  FILE *imoveis;
  tApartamento apartamento[Num_Imov];

  imoveis = fopen("Apartamento.txt", "a");

  if(imoveis == NULL){
    puts("FAIL");
  }

  for(int i=0; ; i++){

    fgets(apartamento[i].titulo, "%s", imoveis);
    fscanf("%d", &apartamento[i].andar);
    fscanf("%d", &apartamento[i].quartos);
    fscanf("%d", &apartamento[i].vagas_garagem);
    fscanf("%lf", &apartamento[i].area);
    fscanf("%lf", &apartamento[i].valor_condominio);
    fscanf("%lf", &apartamento[i].preco);
    fgets(apartamento[i].posicao, "%s", imoveis);
    fscanf("%i", &apartamento[i].status);

    }

    for(int i=0; ; i++){

      if(terreno[i].status == 0){
        continue;
      }
      printf("Titulo: ");
      printf("%s\n", apartamento[i].titulo);
      printf("Andar do apartamento: ");
      printf("%d\n", apartamento[i].andar);
      printf("Numero de quartos: ");
      printf("%d\n", apartamento[i].quartos);
      printf("Vagas na garagem: ");
      printf("%lf\n", apartamento[i].vagas_garagem);
      printf("Area do apartamento: ");
      printf("%lf\n", apartamento[i].area);
      printf("Valor do condominio: ");
      printf("%lf\n", apartamento[i].valor_condominio);
      printf("Valor do apartamento: ");
      printf("%lf\n", apartamento[i].preco);
      printf("Posicao do apartamento: ");
      printf("%s\n", apartamento[i].posicao);
      //printf("%i\n", apartamento[i].status);

    }

    fclose(imoveis);

    return 0;
}

void LerArqTerreno()
{
  int size;
  FILE *imoveis;
  tTerreno terreno[Num_Imov];

  imoveis = fopen("Terreno.txt", "a");

  if(imoveis == NULL){
    puts("FAIL");
  }

  for(int i=0; ; i++){

    fgets(terreno[i].titulo, "%s", imoveis);
    fscanf(imoveis, "%lf", &terreno[i].area);
    fscanf(imoveis, "%lf", &terreno[i].preco);
    fscanf(imoveis, "%i", &terreno[i].status);
  }

  for(int i=0; ; i++){
      if(terreno[i].status == 0){
        continue;
      }

      printf("Titulo: ");
      printf(imoveis, "%s\n", terreno[i].titulo);
      printf("Area do terreno: ");
      printf(imoveis, "%d\n", terreno[i].area);
      printf("Valor do terreno: ");
      printf(imoveis, "%lf\n", terreno[i].preco);
  }

  fclose(imoveis);

  return 0;

  }
