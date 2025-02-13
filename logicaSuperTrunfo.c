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
    int opcao, opcaoNComparacao;
    int primeiroAtribut, segundoAtribut;
    
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

    printf("Insira o código da Carta: \n");
    scanf("%s", &codigoCard2);
    
    printf("Insira o nome da cidade: \n"); // N utilizável espaço
    scanf(" %s", &nomeCidade2);

    printf("Insira a população: \n");
    scanf("%lu", &populacao2);

    printf("Insira a Área: \n");
    scanf("%f", &area2);

    printf("Insira o PIB: \n");
    scanf("%f", &pib2);

    printf("Insira o número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    //Calculos de densidada populacional e Pib per capita da primeira carta:
    
    densidadePopulacional = populacao / area;

    pib_per_capita = pib / (float)populacao;

    //Calculos de densidada populacional e Pib per capita da segunda carta:
    
    densidadePopulacional2 = populacao2 / area2;

    pib_per_capita2 = pib2 / (float)populacao2;

    //Seleção primeiro atributo:
    printf("\nSelecione o primeiro atributo!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turísticos\n");
    printf("5. PIB per capita\n");
    printf("6. Densidade populacional\n");
    printf("Opção: ");
    scanf("%d", &primeiroAtribut);
    //Seleção segundo atributo:
    printf("\nSelecione o segundo atributo!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turísticos\n");
    printf("5. PIB per capita\n");
    printf("6. Densidade populacional\n");
    printf("Opção: ");
    scanf("%d", &segundoAtribut);

    // Comparação de Cartas e exibicao de resultados primeiro atributo:
    printf("\nComparação de cartas \n");
    
    switch (primeiroAtribut) {
    case 1:
        if (populacao > populacao2) {
            printf("# A Carta 1 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, População: %lu  \n", estado, codigoCard, populacao);
            printf("Carta 2 - Estado:%c, Código:%s, População: %lu  \n", estado2, codigoCard2, populacao2);
        } else if (populacao == populacao2) {
            printf("# Empate! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, População: %lu  \n", estado, codigoCard, populacao);
            printf("Carta 2 - Estado:%c, Código:%s, População: %lu  \n", estado2, codigoCard2, populacao2);
        } else {
            printf("# A Carta 2 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, População: %lu  \n", estado, codigoCard, populacao);
            printf("Carta 2 - Estado:%c, Código:%s, População: %lu p \n", estado2, codigoCard2, populacao2);
        }
        break;
    case 2:
        if (area > area2) {
            printf("# A Carta 1 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Área: %.2f km² \n", estado, codigoCard, area);
            printf("Carta 2 - Estado:%c, Código:%s, Área: %.2f km² \n", estado2, codigoCard2, area2);
        } else if (area == area2) {
            printf("# Empate! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Área: %.2f km² \n", estado, codigoCard, area);
            printf("Carta 2 - Estado:%c, Código:%s, Área: %.2f km² \n", estado2, codigoCard2, area2);
        } else {
            printf("# A Carta 2 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Área: %.2f km² \n", estado, codigoCard, area);
            printf("Carta 2 - Estado:%c, Código:%s, Área: %.2f km² \n", estado2, codigoCard2, area2);
        }
        break;
    case 3:
        if (pib > pib2) {
            printf("# A Carta 1 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, PIB: %.2f \n", estado, codigoCard, pib);
            printf("Carta 2 - Estado:%c, Código:%s, PIB: %.2f \n", estado2, codigoCard2, pib2);
        } else if (pib == pib2) {
            printf("# Empate! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, PIB: %.2f \n", estado, codigoCard, pib);
            printf("Carta 2 - Estado:%c, Código:%s, PIB: %.2f \n", estado2, codigoCard2, pib2);
        } else {
            printf("# A Carta 2 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, PIB: %.2f \n", estado, codigoCard, pib);
            printf("Carta 2 - Estado:%c, Código:%s, PIB: %.2f \n", estado2, codigoCard2, pib2);
        }
        break;
    case 4:
        if (pontosTuristicos > pontosTuristicos2) {
            printf("# A Carta 1 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado, codigoCard, pontosTuristicos);
            printf("Carta 2 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado2, codigoCard2, pontosTuristicos2);
        } else if (pontosTuristicos == pontosTuristicos2) {
            printf("# Empate! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado, codigoCard, pontosTuristicos);
            printf("Carta 2 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado2, codigoCard2, pontosTuristicos2);
        } else {
            printf("# A Carta 2 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado, codigoCard, pontosTuristicos);
            printf("Carta 2 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado2, codigoCard2, pontosTuristicos2);
        }
        break;
    case 5:
        if (pib_per_capita > pib_per_capita2) {
            printf("# A Carta 1 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado, codigoCard, pib_per_capita);
            printf("Carta 2 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado2, codigoCard2, pib_per_capita2);
        } else if (pib_per_capita == pib_per_capita2) {
            printf("# Empate! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado, codigoCard, pib_per_capita);
            printf("Carta 2 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado2, codigoCard2, pib_per_capita2);
        } else {
            printf("# A Carta 2 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado, codigoCard, pib_per_capita);
            printf("Carta 2 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado2, codigoCard2, pib_per_capita2);
        }
        break;
    case 6:
        if (densidadePopulacional < densidadePopulacional2) {
            printf("# A Carta 1 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado, codigoCard, densidadePopulacional);
            printf("Carta 2 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado2, codigoCard2, densidadePopulacional2);
        } else if (densidadePopulacional == densidadePopulacional2) {
            printf("# Empate! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado, codigoCard, densidadePopulacional);
            printf("Carta 2 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado2, codigoCard2, densidadePopulacional2);
        } else {
            printf("# A Carta 2 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado, codigoCard, densidadePopulacional);
            printf("Carta 2 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado2, codigoCard2, densidadePopulacional2);
        }
        break;
        default:
            printf("Opção inválida!\n");
            break;
    }
// Comparação de Cartas e exibicao de resultados primeiro atributo:
        switch (segundoAtribut) {
    case 1:
        if (populacao > populacao2) {
            printf("# A Carta 1 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, População: %lu  \n", estado, codigoCard, populacao);
            printf("Carta 2 - Estado:%c, Código:%s, População: %lu  \n", estado2, codigoCard2, populacao2);
        } else if (populacao == populacao2) {
            printf("# Empate! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, População: %lu  \n", estado, codigoCard, populacao);
            printf("Carta 2 - Estado:%c, Código:%s, População: %lu  \n", estado2, codigoCard2, populacao2);
        } else {
            printf("# A Carta 2 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, População: %lu  \n", estado, codigoCard, populacao);
            printf("Carta 2 - Estado:%c, Código:%s, População: %lu p \n", estado2, codigoCard2, populacao2);
        }
        break;
    case 2:
        if (area > area2) {
            printf("# A Carta 1 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Área: %.2f km² \n", estado, codigoCard, area);
            printf("Carta 2 - Estado:%c, Código:%s, Área: %.2f km² \n", estado2, codigoCard2, area2);
        } else if (area == area2) {
            printf("# Empate #! \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Área: %.2f km² \n", estado, codigoCard, area);
            printf("Carta 2 - Estado:%c, Código:%s, Área: %.2f km² \n", estado2, codigoCard2, area2);
        } else {
            printf("# A Carta 2 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Área: %.2f km² \n", estado, codigoCard, area);
            printf("Carta 2 - Estado:%c, Código:%s, Área: %.2f km² \n", estado2, codigoCard2, area2);
        }
        break;
    case 3:
        if (pib > pib2) {
            printf("# A Carta 1 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, PIB: %.2f \n", estado, codigoCard, pib);
            printf("Carta 2 - Estado:%c, Código:%s, PIB: %.2f \n", estado2, codigoCard2, pib2);
        } else if (pib == pib2) {
            printf("# Empate! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, PIB: %.2f \n", estado, codigoCard, pib);
            printf("Carta 2 - Estado:%c, Código:%s, PIB: %.2f \n", estado2, codigoCard2, pib2);
        } else {
            printf("# A Carta 2 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, PIB: %.2f \n", estado, codigoCard, pib);
            printf("Carta 2 - Estado:%c, Código:%s, PIB: %.2f \n", estado2, codigoCard2, pib2);
        }
        break;
    case 4:
        if (pontosTuristicos > pontosTuristicos2) {
            printf("# A Carta 1 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado, codigoCard, pontosTuristicos);
            printf("Carta 2 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado2, codigoCard2, pontosTuristicos2);
        } else if (pontosTuristicos == pontosTuristicos2) {
            printf("# Empate! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado, codigoCard, pontosTuristicos);
            printf("Carta 2 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado2, codigoCard2, pontosTuristicos2);
        } else {
            printf("# A Carta 2 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado, codigoCard, pontosTuristicos);
            printf("Carta 2 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado2, codigoCard2, pontosTuristicos2);
        }
        break;
    case 5:
        if (pib_per_capita > pib_per_capita2) {
            printf("# A Carta 1 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado, codigoCard, pib_per_capita);
            printf("Carta 2 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado2, codigoCard2, pib_per_capita2);
        } else if (pib_per_capita == pib_per_capita2) {
            printf("# Empate! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado, codigoCard, pib_per_capita);
            printf("Carta 2 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado2, codigoCard2, pib_per_capita2);
        } else {
            printf("# A Carta 2 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado, codigoCard, pib_per_capita);
            printf("Carta 2 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado2, codigoCard2, pib_per_capita2);
        }
        break;
    case 6:
        if (densidadePopulacional < densidadePopulacional2) {
            printf("# A Carta 1 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado, codigoCard, densidadePopulacional);
            printf("Carta 2 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado2, codigoCard2, densidadePopulacional2);
        } else if (densidadePopulacional == densidadePopulacional2) {
            printf("# Empate! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado, codigoCard, densidadePopulacional);
            printf("Carta 2 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado2, codigoCard2, densidadePopulacional2);
        } else {
            printf("# A Carta 2 é vencedora! # \n");
            printf("Dados das cartas:\n");
            printf("Carta 1 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado, codigoCard, densidadePopulacional);
            printf("Carta 2 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado2, codigoCard2, densidadePopulacional2);
        }
        break;
        default:
            printf("Opção inválida!\n");
            break;
    }   
    return 0;
}
