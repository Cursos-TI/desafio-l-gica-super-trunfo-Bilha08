#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    printf("**Super Trunfo** \n");
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado, estado2;
    char codigoCard [50], codigoCard2 [50];
    char nomeCidade [50], nomeCidade2 [50];
    unsigned long int populacao, populacao2;
    float area, area2;
    double pib, pib2;
    int pontosTuristicos, pontosTuristicos2;
    float densidadePopulacional, densidadePopulacional2;
    float pib_per_capita, pib_per_capita2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
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

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    //Calculos de densidada populacional e Pib per capita da primeira carta.
    
    densidadePopulacional = populacao / area;

    pib_per_capita = pib / (float) populacao;


    //Calculos de densidada populacional e Pib per capita da segunda carta.

    
    densidadePopulacional2 = populacao2 / area2;

    pib_per_capita2 = pib2 / (float) populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
