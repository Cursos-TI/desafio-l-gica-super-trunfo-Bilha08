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
    int escolhaPrimeiro, escolhaSegundo;
    int esc1, esc2, resultFinal;
    
    
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
    scanf("%d", &escolhaPrimeiro);
    //Seleção segundo atributo:
    printf("\nSelecione o segundo atributo!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turísticos\n");
    printf("5. PIB per capita\n");
    printf("6. Densidade populacional\n");
    printf("Opção: ");
    scanf("%d", &escolhaSegundo);

    // Comparação de Cartas e exibicao de resultados do primeiro atributo:
    printf("\nComparação de cartas: \n"); 
    switch (escolhaPrimeiro) {
    case 1:
       esc1 = ((populacao == populacao2) ? 0 : (populacao > populacao2) ?  1 : -1);
        printf("\nPrimeira escolha : População \n");
        printf("Carta 1 - Estado:%c, Código:%s, População: %lu  \n", estado, codigoCard, populacao);
        printf("Carta 2 - Estado:%c, Código:%s, População: %lu  \n", estado2, codigoCard2, populacao2);
        break;
    case 2:
       esc1 =  ((area == area2) ? 0 : (area > area2) ? 1 : -1);
        printf("\nPrimeira escolha : Área \n");
        printf("Carta 1 - Estado:%c, Código:%s, Área: %.2f km² \n", estado, codigoCard, area);
        printf("Carta 2 - Estado:%c, Código:%s, Área: %.2f km² \n", estado2, codigoCard2, area2);
        break;
    case 3:
        esc1 = ((pib == pib2) ? 0 : (pib > pib2) ?  1 : -1);
        printf("\nPrimeira escolha : PIB \n");
        printf("Carta 1 - Estado:%c, Código:%s, PIB: %.2f \n", estado, codigoCard, pib);
        printf("Carta 2 - Estado:%c, Código:%s, PIB: %.2f \n", estado2, codigoCard2, pib2);
        break;
    case 4:
        esc1 = ((pontosTuristicos == pontosTuristicos2) ? 0 : (pontosTuristicos > pontosTuristicos2) ?  1 : -1);
        printf("\nPrimeira escolha : Pontos turísticos \n");
        printf("Carta 1 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado, codigoCard, pontosTuristicos);
        printf("Carta 2 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado2, codigoCard2, pontosTuristicos2);
        break;
    case 5:
        esc1 = ((pib_per_capita == pib_per_capita2) ? 0 : (pib_per_capita > pib_per_capita2) ?  1 : -1);
        printf("\nPrimeira escolha : PIB per capita \n");
        printf("Carta 1 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado, codigoCard, pib_per_capita);
        printf("Carta 2 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado2, codigoCard2, pib_per_capita2);
        break;
    case 6:
        esc1 = ((densidadePopulacional == densidadePopulacional2) ? 0 : (densidadePopulacional < densidadePopulacional2) ?  1 : -1);
        printf("\nPrimeira escolha : Densidade populacional \n");
        printf("Carta 1 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado, codigoCard, densidadePopulacional);
        printf("Carta 2 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado2, codigoCard2, densidadePopulacional2);
        break;
        default:
            printf("Opção inválida!\n");
            break;
    }
// Comparação de Cartas e exibicao de resultados do segundo atributo:
switch (escolhaSegundo) {
    case 1:
       esc2 = ((populacao == populacao2) ? 0 : (populacao > populacao2) ?  1 : -1);
       printf("\nSegunda escolha : População \n");
        printf("Carta 1 - Estado:%c, Código:%s, População: %lu  \n", estado, codigoCard, populacao);
        printf("Carta 2 - Estado:%c, Código:%s, População: %lu  \n", estado2, codigoCard2, populacao2);
        break;
    case 2:
       esc2 =  ((area == area2) ? 0 : (area > area2) ? 1 : -1);
        printf("\nSegunda escolha : Área \n");
        printf("Carta 1 - Estado:%c, Código:%s, Área: %.2f km² \n", estado, codigoCard, area);
        printf("Carta 2 - Estado:%c, Código:%s, Área: %.2f km² \n", estado2, codigoCard2, area2);
        break;
    case 3:
        esc2 = ((pib == pib2) ? 0 : (pib > pib2) ?  1 : -1);
        printf("\nSegunda escolha : PIB \n");
        printf("Carta 1 - Estado:%c, Código:%s, PIB: %.2f \n", estado, codigoCard, pib);
        printf("Carta 2 - Estado:%c, Código:%s, PIB: %.2f \n", estado2, codigoCard2, pib2);
        break;
    case 4:
        esc2 = ((pontosTuristicos == pontosTuristicos2) ? 0 : (pontosTuristicos > pontosTuristicos2) ?  1 : -1);
        printf("\nSegunda escolha : Pontos turísticos \n");
        printf("Carta 1 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado, codigoCard, pontosTuristicos);
        printf("Carta 2 - Estado:%c, Código:%s, Pontos turísticos: %d \n", estado2, codigoCard2, pontosTuristicos2);
        break;
    case 5:
        esc2 = ((pib_per_capita == pib_per_capita2) ? 0 : (pib_per_capita > pib_per_capita2) ?  1 : -1);
        printf("\nSegunda escolha : PIB per capita \n");
        printf("Carta 1 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado, codigoCard, pib_per_capita);
        printf("Carta 2 - Estado:%c, Código:%s, PIB per capita: %.2f \n", estado2, codigoCard2, pib_per_capita2);
        break;
    case 6:
        esc2 = ((densidadePopulacional == densidadePopulacional2) ? 0 : (densidadePopulacional < densidadePopulacional2) ?  1 : -1);
        printf("\nSegunda escolha : Densidade populacional \n");
        printf("Carta 1 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado, codigoCard, densidadePopulacional);
        printf("Carta 2 - Estado:%c, Código:%s, Densidade populacional: %.2f \n", estado2, codigoCard2, densidadePopulacional2);
        break;
        default:
            printf("Opção inválida!\n");
            break;
    }
    // Determinando o vencedor de cada escolha e da soma das comparações!
    resultFinal = (esc1 + esc2);
// resultado da primeira escolha
    if (esc1 == 1) {
        printf("\nA carta 1 venceu a primeira comparação!\n", esc1);
    } else if (esc1 == -1) {
        printf("\nA carta 2 venceu a primeira comparação!\n", esc1);
    } else {
        printf("\nA primeira comparação deu empate!\n", esc1);
    }
// resultado da segunda escolha
    if (esc2 == 1) {
        printf("A carta 1 venceu a segunda comparação!\n", esc1);
    } else if (esc2 == -1) {
        printf("A carta 2 venceu a segunda comparação!\n", esc1);
    } else {
        printf("A segunda comparação deu empate!\n", esc1);
    }
// resuldado da soma das comparacoes
    if (resultFinal >= 1) {
        printf("## A carta 1 venceu! ##\n");
    }else if (resultFinal == 0) {
        printf("##A comparação deu empate! ##\n");
    } else {
        printf("## A carta 1 venceu! ##\n");
    }
    return 0;
}
