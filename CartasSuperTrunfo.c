#include <stdio.h>

int main(){
    char estado1[20], estado2[20];
    char a01[3], a02[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float areakm1, areakm2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    //dados carta 1 
    printf("insira os dados da carta 1\n");
    printf("Nome do estado: ");
    scanf("%s", estado1);
    printf("cidade: ");
    scanf("%s", cidade1);
    printf("populacao: ");
    scanf("%d", &populacao1);
    printf("area em km²: ");
    scanf("%f", &areakm1);
    printf("pib: ");
    scanf("%f", &pib1);
    printf("pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    //dados carta 2
    printf("insira os dados da carta 2\n");
    printf("Nome do estado: ");
    scanf("%s", estado2);
    printf("cidade: ");
    scanf("%s", cidade2);
    printf("populacao: ");
    scanf("%d", &populacao2);
    printf("area km²: ");
    scanf("%f", &areakm2);
    printf("pib: ");
    scanf("%f", &pib2);
    printf("pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    //exibição das cartas:
    //Carta a01:
    printf("Carta a01\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area km²: %f\n", areakm1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    //Carta a02
    printf("Carta a02\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area km²: %f\n", areakm2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);

    printf("continua em breve\n");

    return 0; 
    }