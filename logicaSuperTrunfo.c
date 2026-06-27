#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Nível Aventureiro - Interatividade no Super Trunfo
//
// Este programa cadastra duas cartas do jogo Super Trunfo, calcula
// densidade populacional e PIB per capita, e permite ao jogador
// escolher o atributo de comparação através de um menu interativo
// utilizando switch e estruturas de decisão aninhadas (if-else).

int main() {
    // ============================================================
    // Definição das variáveis para armazenar as propriedades
    // das cidades - Carta 1
    // ============================================================

    char estado1;                    // Estado da carta (letra de A a H)
    char codigo1[4];                 // Código da carta (ex: A01)
    char nomeCidade1[50];            // Nome da cidade
    unsigned long int populacao1;    // População da cidade
    float area1;                     // Área da cidade em km²
    float pib1;                      // PIB em bilhões de reais
    int pontosTuristicos1;           // Número de pontos turísticos
    float densidadePopulacional1;    // Densidade Populacional (calculada)
    float pibPerCapita1;             // PIB per Capita (calculado)

    // ============================================================
    // Definição das variáveis para armazenar as propriedades
    // das cidades - Carta 2
    // ============================================================

    char estado2;                    // Estado da carta (letra de A a H)
    char codigo2[4];                 // Código da carta (ex: B02)
    char nomeCidade2[50];            // Nome da cidade
    unsigned long int populacao2;    // População da cidade
    float area2;                     // Área da cidade em km²
    float pib2;                      // PIB em bilhões de reais
    int pontosTuristicos2;           // Número de pontos turísticos
    float densidadePopulacional2;    // Densidade Populacional (calculada)
    float pibPerCapita2;             // PIB per Capita (calculado)

    // Variável para armazenar a opção do menu escolhida pelo jogador
    int opcao;

    // ============================================================
    // Cadastro das Cartas:
    // Solicita ao usuário os dados de cada cidade
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

    // Cálculo da Densidade Populacional: População / Área
    densidadePopulacional1 = (float)populacao1 / area1;

    // Cálculo do PIB per Capita: PIB (em reais) / População
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

    // Cálculo da Densidade Populacional: População / Área
    densidadePopulacional2 = (float)populacao2 / area2;

    // Cálculo do PIB per Capita: PIB (em reais) / População
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // ============================================================
    // Exibição dos dados das cartas cadastradas
    // ============================================================

    printf("\n========================================\n");
    printf("         CARTAS CADASTRADAS\n");
    printf("========================================\n");

    printf("\nCarta 1:\n");
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

    // ============================================================
    // Menu Interativo:
    // Utiliza a estrutura switch para permitir ao jogador
    // escolher qual atributo será usado na comparação.
    // ============================================================

    printf("\n========================================\n");
    printf("   MENU DE COMPARAÇÃO - SUPER TRUNFO\n");
    printf("========================================\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("========================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    // ============================================================
    // Lógica de comparação usando switch:
    // Cada case trata um atributo específico.
    // Dentro de cada case, usamos if-else aninhados para
    // determinar o vencedor e tratar empate.
    // ============================================================

    printf("\n========================================\n");

    switch (opcao) {

        // --------------------------------------------------------
        // Caso 1: Comparação por População
        // Regra: MAIOR população vence
        // --------------------------------------------------------
        case 1:
            printf("Comparação de cartas (Atributo: População):\n");
            printf("========================================\n");
            printf("Carta 1 - %s (%c): %lu habitantes\n", nomeCidade1, estado1, populacao1);
            printf("Carta 2 - %s (%c): %lu habitantes\n", nomeCidade2, estado2, populacao2);

            // Comparação aninhada: verifica maior, menor ou empate
            if (populacao1 > populacao2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else {
                // Se não é maior, pode ser menor ou igual
                if (populacao2 > populacao1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
                } else {
                    // Populações iguais: empate
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        // --------------------------------------------------------
        // Caso 2: Comparação por Área
        // Regra: MAIOR área vence
        // --------------------------------------------------------
        case 2:
            printf("Comparação de cartas (Atributo: Área):\n");
            printf("========================================\n");
            printf("Carta 1 - %s (%c): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("Carta 2 - %s (%c): %.2f km²\n", nomeCidade2, estado2, area2);

            // Comparação aninhada para determinar vencedor
            if (area1 > area2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else {
                if (area2 > area1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        // --------------------------------------------------------
        // Caso 3: Comparação por PIB
        // Regra: MAIOR PIB vence
        // --------------------------------------------------------
        case 3:
            printf("Comparação de cartas (Atributo: PIB):\n");
            printf("========================================\n");
            printf("Carta 1 - %s (%c): %.2f bilhões de reais\n", nomeCidade1, estado1, pib1);
            printf("Carta 2 - %s (%c): %.2f bilhões de reais\n", nomeCidade2, estado2, pib2);

            // Comparação aninhada para determinar vencedor
            if (pib1 > pib2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else {
                if (pib2 > pib1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        // --------------------------------------------------------
        // Caso 4: Comparação por Pontos Turísticos
        // Regra: MAIOR número de pontos turísticos vence
        // --------------------------------------------------------
        case 4:
            printf("Comparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("========================================\n");
            printf("Carta 1 - %s (%c): %d pontos turísticos\n", nomeCidade1, estado1, pontosTuristicos1);
            printf("Carta 2 - %s (%c): %d pontos turísticos\n", nomeCidade2, estado2, pontosTuristicos2);

            // Comparação aninhada para determinar vencedor
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else {
                if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        // --------------------------------------------------------
        // Caso 5: Comparação por Densidade Populacional
        // Regra ESPECIAL: MENOR densidade vence!
        // (cidade menos densa é considerada melhor no jogo)
        // --------------------------------------------------------
        case 5:
            printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
            printf("========================================\n");
            printf("Carta 1 - %s (%c): %.2f hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
            printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomeCidade2, estado2, densidadePopulacional2);

            // Comparação INVERTIDA aninhada: menor densidade vence
            if (densidadePopulacional1 < densidadePopulacional2) {
                // Carta 1 tem MENOR densidade, então vence
                printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else {
                // Se não é menor, pode ser maior ou igual
                if (densidadePopulacional2 < densidadePopulacional1) {
                    // Carta 2 tem MENOR densidade, então vence
                    printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
                } else {
                    // Densidades iguais: empate
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        // --------------------------------------------------------
        // Caso 6: Comparação por PIB per Capita
        // Regra: MAIOR PIB per capita vence
        // --------------------------------------------------------
        case 6:
            printf("Comparação de cartas (Atributo: PIB per Capita):\n");
            printf("========================================\n");
            printf("Carta 1 - %s (%c): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
            printf("Carta 2 - %s (%c): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);

            // Comparação aninhada para determinar vencedor
            if (pibPerCapita1 > pibPerCapita2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else {
                if (pibPerCapita2 > pibPerCapita1) {
                    printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        // --------------------------------------------------------
        // Caso default: Opção inválida
        // Trata a segurança contra entradas inválidas do usuário
        // --------------------------------------------------------
        default:
            printf("Opção inválida! Por favor, escolha uma opção de 1 a 6.\n");
            break;
    }

    printf("========================================\n");

    return 0;
}
