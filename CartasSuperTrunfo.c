#include <stdio.h>
/*Iniciando com a declaração das variáveis*/
  int main(){
    int pontur, populacao;
    char estado [20];
    char codigo [20];
    char cidade [20];
    float área;
    float pib;

    /*Inserção e impressão dos dados da primeira carta*/
    printf("***Carta 01***\n");

    printf("Digite o nome do Estado:\n");
    scanf("%s", estado);
    printf("O estado é: %s\n", estado);

    printf("Digite o código do estado:\n");
    scanf("%s", codigo);
    printf("O codigo do estado é: %s\n", &codigo);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", cidade);
    printf("Sua cidade é: %s\n", cidade);

    printf("Digite o numero da populacao:\n");
    scanf("%d", &populacao);
    printf("Sua populacao é de:%d\n", populacao);

    printf("Digite a area de sua cidade:\n");
    scanf("%f", &área);
    printf("A area da sua cidade é: %f\n", área);

    printf("Digite o PIB da sua cidade:\n");
    scanf("%f", &pib);
    printf("O PIB correspondente da sua cidade é: %f\n", pib);

    printf("Digite a quantidade de pontos turistiscos:\n");
    scanf("%d", &pontur);
    printf("Numero de pontos turisticos: %d\n", pontur);


    int pontur2, populacao2;
    char estado2 [20];
    char codigo2 [20];
    char cidade2 [20];
    float área2;
    float pib02;

    /*Inserção e impressão dos dados da segunda carta*/
    printf("***Carta 02***\n");

    printf("Digite o nome do Estado:\n");
    scanf("%s", estado2);
    printf("O estado é: %s\n", estado2);

    printf("Digite o código do estado:\n");
    scanf("%s", codigo2);
    printf("O codigo do estado é: %s\n", &codigo2);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", cidade2);
    printf("Sua cidade é: %s\n", cidade2);

    printf("Digite o numero da populacao:\n");
    scanf("%d", &populacao2);
    printf("Sua populacao é de:%d\n", populacao2);

    printf("Digite a area de sua cidade:\n");
    scanf("%f", &área2);
    printf("A area da sua cidade é: %f\n", área2);

    printf("Digite o PIB da sua cidade:\n");
    scanf("%f", &pib02);
    printf("O PIB correspondente da sua cidade é: %f\n", pib02);

    printf("Digite a quantidade de pontos turistiscos:\n");
    scanf("%d", &pontur2);
    printf("Numero de pontos turisticos: %d\n", pontur2);

    return 0;
}
