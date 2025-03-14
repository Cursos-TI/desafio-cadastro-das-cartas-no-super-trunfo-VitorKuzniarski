#include <stdio.h>
#include <string.h>

int main(){
    char estado1[20], estado2[20];
    char a01[3], a02[3];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float areakm1, areakm2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float pibpercapita1, pibpercapita2;

    //dados carta 1 
    printf("insira os dados da carta 1\n");
    printf("Nome do estado: ");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = '\0';
    printf("cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';
    printf("populacao: ");
    scanf("%d", &populacao1);
    printf("area em km²: ");
    scanf("%f", &areakm1);
    printf("pib: ");
    scanf("%f", &pib1);
    printf("pontos turisticos: ");
    scanf("%d", &pontosturisticos1);
    getchar();
    //dados carta 2
    printf("insira os dados da carta 2\n");
    printf("Nome do estado: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = '\0';
    printf("cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("populacao: ");
    scanf("%d", &populacao2);
    printf("area km²: ");
    scanf("%f", &areakm2);
    printf("pib: ");
    scanf("%f", &pib2);
    printf("pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

     //caulculo da densidade e pibpercapita
     densidade1 = (populacao1 / areakm1);
     pibpercapita1 = (pib1 / populacao1);
 
     densidade2 = (populacao2 / areakm2);
     pibpercapita2 = (pib2 / populacao2);

    //exibição das cartas:
    //Carta a01:
    printf("Carta a01\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", areakm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    //Carta a02
    printf("Carta a02\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", areakm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    return 0; 
    }