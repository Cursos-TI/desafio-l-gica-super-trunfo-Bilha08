#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
int main() {
    printf("**Super Trunfo** \n");
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado, estado2;
    char codigoCard [50], codigoCard2 [50];
    char nomeCidade [50], nomeCidade2 [50];
    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;
    float densidadePopulacional, densidadePopulacional2;
    float pib_per_capita, pib_per_capita2;
    
    // Cadastro das Cartas:

    // Cadastro da primeira carta:
    printf("\nPRIMEIRA CARTA\n");
    printf("\nInsira o estado: \n");
    scanf("%c", &estado);

    printf("Insira o Código da Carta: \n");
    scanf("%s", &codigoCard);
    
    printf("Insira o Nome da Cidade: \n"); // N utilizável espaço
    scanf(" %s", &nomeCidade);

    printf("Insira a População: \n");
    scanf("%lu", &populacao);

    printf("Insira a Área: \n");
    scanf("%f", &area);

    printf("Insira o PIB: \n");
    scanf("%f", &pib);

    printf("Insira o Numero de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos);

    //Cadastro da segunda carta:

    printf("\nSEGUNDA CARTA\n");

    printf("\nInsira o estado: \n");
    scanf(" %c", &estado2);

    printf("Insira o Código da Carta: \n");
    scanf("%s", &codigoCard2);
    
    printf("Insira o Nome da Cidade: \n"); // N utilizável espaço
    scanf(" %s", &nomeCidade2);

    printf("Insira a População: \n");
    scanf("%lu", &populacao2);

    printf("Insira a Área: \n");
    scanf("%f", &area2);

    printf("Insira o PIB: \n");
    scanf("%f", &pib2);

    printf("Insira o Numero de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);


    //Calculos de densidada populacional e Pib per capita da primeira carta:
    
    densidadePopulacional = populacao / area;

    pib_per_capita = pib / (float)populacao;

    printf("\nDensidade populacional carta 1: %.2f pessoas por km²\n", densidadePopulacional);
    printf("PIB per capita carta 1: %.2f Reais \n", pib_per_capita);

   


    //Calculos de densidada populacional e Pib per capita da segunda carta:

    
    densidadePopulacional2 = populacao2 / area2;

    pib_per_capita2 = pib2 / (float)populacao2;

    printf("\nDensidade populacional carta 1: %.2f pessoas por km²\n", densidadePopulacional2);
    printf("PIB per capita carta 1: %.2f Reais \n", pib_per_capita2);


    // Comparação de Cartas:

     //if (populacao > populacao2) {
         //printf("A cidade 1 tem maior população. \n");
     //} else {
         //printf("A cidade 2 tem maior população. \n");
     //}

     //if (area > area2) {
         //printf("A cidade 1 tem a maior Área. \n");
     //} else {
         //printf("A cidade 2 tem a maior Área. \n");
     //}

     //if (pib > pib2) {
         //printf("A cidade 1 tem o maior PIB. \n");
     //} else {
         //printf("A cidade 2 tem o maior PIB. \n");
     //}

     //if (pontosTuristicos > pontosTuristicos2) {
         //printf("A cidade 1 tem o maior número de pontos turísticos. \n");
     //} else {
         //printf("A cidade 2 tem o maior número de pontos turísticos. \n");
     //}

     //if (pib_per_capita > pib_per_capita2) {
         //printf("A cidade 1 tem o maior pib_per_capita. \n");
     //} else {
         //printf("A cidade 2 tem o maior pib_per_capita2. \n");
     //}

     //if (densidadePopulacional < densidadePopulacional2) {
         //printf("A cidade 1 tem a maior densidadePopulacional ! \n");
     //} else {
         //printf("A cidade 2 tem a maior densidadePopulacional !\n");
    // }




    // Exibição dos Resultados:

    printf("\nComparação de cartas \n");
    printf("Carta 1 - Estado:%c, Código:%s, Densidade populacional: %.2f pessoas por km² \n", estado, codigoCard, densidadePopulacional);
    printf("Carta 2 - Estado:%c, Código:%s, Densidade populacional: %.2f pessoas por km² \n", estado2, codigoCard2, densidadePopulacional2);
     
     if (densidadePopulacional < densidadePopulacional2) {
         printf("Resultado: Carta 1 é a vencedora!.\n");
     } else {
         printf("Resultado: Carta 2 é a vencedora!.\n");
     }



    return 0;
}
