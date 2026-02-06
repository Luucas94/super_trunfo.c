#include <stdio.h>

int main (){
int pontoturistico;
char estado;
double km, pib, populacao;
char cidade[10], codigocarta[10];


//carta1


printf("Digite a letra do estado da CARTA 1: \n");
scanf("%c", &estado);

printf("\nDigite o codigo da carta; \n");
scanf("%s", codigocarta);

printf("\nDigite o nome da cidade: \n");
scanf("%s", cidade);

printf("\nDigite o numero de habitantes da cidade: \n");
scanf("%lf", &populacao);

printf("\nDigite a àrea em km: \n");
scanf("%lf", &km);

printf("\nDigite o PIB da cidade: \n");
scanf("%lf", &pib);

printf("\nDigite o numero de pontos turisticos:\n");
scanf("%d", &pontoturistico);

//resultado para exibir informacoes carta 1

printf("\n\nCARTA 1: \n");
printf("Estado: %c\n", estado);
printf("Codigo da Carta: %s\n", codigocarta);
printf("Nome da Cidade: %s\n", cidade);
printf("Número da População do Estado: %.3lf\n", populacao);
printf("Àrea do estado por KM2: %.3lf\n", km);
printf("PIB do Estado: %.3lf bilhões de reais\n", pib);
printf("Numero de Pontos Turisticos: %d\n\n", pontoturistico);

//carta 2

int pontoturistico2;
char estado2;
double km2, pib2, populacao2;
char cidade2[10], codigocarta2[10];

printf("\n\nDigite a letra do estado da CARTA 2: \n");
scanf(" %c", &estado2);

printf("\nDigite o codigo da carta; \n");
scanf("%s", codigocarta2);

printf("\nDigite o nome da cidade: \n");
scanf("%s", cidade2);

printf("\nDigite o numero de habitantes da cidade: \n");
scanf("%lf", &populacao2);

printf("\nDigite a área em km: \n");
scanf("%lf", &km2);

printf("\nDigite o PIB da cidade: \n");
scanf("%lf", &pib2);

printf("\nDigite o numero de pontos turisticos: \n");
scanf("%d", &pontoturistico2);

// resultado para exibir informacoes carta 2

printf("\nCARTA 2: \n");
printf("Estado: %c\n", estado2);
printf("Codigo da Carta: %s\n", codigocarta2);
printf("Nome da Cidade: %s\n", cidade2);
printf("Número da População do Estado: %.3lf\n", populacao2);
printf("Àrea do estado por KM2: %.3lf\n", km2);
printf("PIB do Estado: %.3lf bilhões de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n\n", pontoturistico2);

return 0;

}
