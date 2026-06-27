#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Nível Novato - Comparando Cartas do Super Trunfo
//
// Este programa cadastra duas cartas do jogo Super Trunfo com informações
// de cidades brasileiras, calcula a densidade populacional e o PIB per capita,
// e compara as cartas utilizando estruturas de decisão (if / if-else).

int main() {
    // ============================================================
    // Definição das variáveis para armazenar as propriedades
    // das cidades - Carta 1
    // ============================================================

    // Estado da carta (letra de A a H)
    char estado1;

    // Código da carta (ex: A01)
    char codigo1[4];

    // Nome da cidade
    char nomeCidade1[50];

    // População da cidade
    unsigned long int populacao1;

    // Área da cidade em km²
    float area1;

    // PIB da cidade em bilhões de reais
    float pib1;

    // Número de pontos turísticos
    int pontosTuristicos1;

    // Densidade Populacional (hab/km²) - calculada
    float densidadePopulacional1;

    // PIB per Capita (reais) - calculado
    float pibPerCapita1;

    // ============================================================
    // Definição das variáveis para armazenar as propriedades
    // das cidades - Carta 2
    // ============================================================

    // Estado da carta (letra de A a H)
    char estado2;

    // Código da carta (ex: B02)
    char codigo2[4];

    // Nome da cidade
    char nomeCidade2[50];

    // População da cidade
    unsigned long int populacao2;

    // Área da cidade em km²
    float area2;

    // PIB da cidade em bilhões de reais
    float pib2;

    // Número de pontos turísticos
    int pontosTuristicos2;

    // Densidade Populacional (hab/km²) - calculada
    float densidadePopulacional2;

    // PIB per Capita (reais) - calculado
    float pibPerCapita2;

    // ============================================================
    // Cadastro das Cartas:
    // Solicita ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // ============================================================

    // --- Entrada de dados da Carta 1 ---

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o estado (letra): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Cálculo da Densidade Populacional e PIB per Capita da Carta 1 ---

    // Densidade Populacional = População / Área
    densidadePopulacional1 = (float)populacao1 / area1;

    // PIB per Capita = PIB / População
    // O PIB está em bilhões, então multiplicamos por 1.000.000.000
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    // --- Entrada de dados da Carta 2 ---

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o estado (letra): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Cálculo da Densidade Populacional e PIB per Capita da Carta 2 ---

    // Densidade Populacional = População / Área
    densidadePopulacional2 = (float)populacao2 / area2;

    // PIB per Capita = PIB / População
    // O PIB está em bilhões, então multiplicamos por 1.000.000.000
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // ============================================================
    // Exibição dos dados das cartas cadastradas
    // ============================================================

    printf("\n========================================\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("========================================\n");

    // ============================================================
    // Comparação de Cartas:
    // Lógica de comparação entre duas cartas utilizando
    // estruturas de decisão if e if-else.
    //
    // Atributo escolhido para comparação: População
    // Regra: a carta com MAIOR população vence.
    //
    // Nota: Para Densidade Populacional, a regra seria invertida
    // (menor valor vence), mas aqui usamos População.
    // ============================================================

    printf("\n========================================\n");
    printf("Comparação de cartas (Atributo: População):\n");
    printf("========================================\n");

    // Exibe os valores de população de cada carta para comparação
    printf("Carta 1 - %s (%c): %lu\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", nomeCidade2, estado2, populacao2);

    // Comparação utilizando if-else:
    // A carta com maior população é a vencedora
    if (populacao1 > populacao2) {
        // Carta 1 tem maior população, então vence
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        // Carta 2 tem maior população, então vence
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        // As populações são iguais, empate
        printf("\nResultado: Empate!\n");
    }

    // ============================================================
    // Comparação adicional: Área
    // Regra: a carta com MAIOR área vence.
    // ============================================================

    printf("\n========================================\n");
    printf("Comparação de cartas (Atributo: Área):\n");
    printf("========================================\n");

    // Exibe os valores de área de cada carta
    printf("Carta 1 - %s (%c): %.2f km²\n", nomeCidade1, estado1, area1);
    printf("Carta 2 - %s (%c): %.2f km²\n", nomeCidade2, estado2, area2);

    // Comparação: maior área vence
    if (area1 > area2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (area2 > area1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    // ============================================================
    // Comparação adicional: PIB
    // Regra: a carta com MAIOR PIB vence.
    // ============================================================

    printf("\n========================================\n");
    printf("Comparação de cartas (Atributo: PIB):\n");
    printf("========================================\n");

    // Exibe os valores de PIB de cada carta
    printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", nomeCidade1, estado1, pib1);
    printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", nomeCidade2, estado2, pib2);

    // Comparação: maior PIB vence
    if (pib1 > pib2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pib2 > pib1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    // ============================================================
    // Comparação adicional: Pontos Turísticos
    // Regra: a carta com MAIOR número de pontos turísticos vence.
    // ============================================================

    printf("\n========================================\n");
    printf("Comparação de cartas (Atributo: Pontos Turísticos):\n");
    printf("========================================\n");

    // Exibe os valores de pontos turísticos de cada carta
    printf("Carta 1 - %s (%c): %d\n", nomeCidade1, estado1, pontosTuristicos1);
    printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, pontosTuristicos2);

    // Comparação: maior número de pontos turísticos vence
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    // ============================================================
    // Comparação adicional: Densidade Populacional
    // Regra ESPECIAL: a carta com MENOR densidade vence!
    // (cidade menos densa é considerada melhor no jogo)
    // ============================================================

    printf("\n========================================\n");
    printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
    printf("========================================\n");

    // Exibe os valores de densidade populacional de cada carta
    printf("Carta 1 - %s (%c): %.2f hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
    printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomeCidade2, estado2, densidadePopulacional2);

    // Comparação INVERTIDA: menor densidade populacional vence
    if (densidadePopulacional1 < densidadePopulacional2) {
        // Carta 1 tem MENOR densidade, então vence
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (densidadePopulacional2 < densidadePopulacional1) {
        // Carta 2 tem MENOR densidade, então vence
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    // ============================================================
    // Comparação adicional: PIB per Capita
    // Regra: a carta com MAIOR PIB per capita vence.
    // ============================================================

    printf("\n========================================\n");
    printf("Comparação de cartas (Atributo: PIB per Capita):\n");
    printf("========================================\n");

    // Exibe os valores de PIB per capita de cada carta
    printf("Carta 1 - %s (%c): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%c): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);

    // Comparação: maior PIB per capita vence
    if (pibPerCapita1 > pibPerCapita2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    printf("\n========================================\n");

    return 0;
}
