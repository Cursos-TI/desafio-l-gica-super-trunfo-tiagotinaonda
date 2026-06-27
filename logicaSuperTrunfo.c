#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Nível Mestre - Comparações Avançadas com Atributos Múltiplos
//
// Este programa cadastra duas cartas do jogo Super Trunfo, calcula
// densidade populacional e PIB per capita, e permite ao jogador
// escolher DOIS atributos diferentes para comparação através de
// menus dinâmicos (switch). Utiliza operador ternário, if-else
// aninhados e soma dos atributos para determinar o vencedor.

int main() {
    // ============================================================
    // Definição das variáveis - Carta 1
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
    // Definição das variáveis - Carta 2
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

    // ============================================================
    // Variáveis de controle do menu e comparação
    // ============================================================

    int opcao1;          // Primeira opção do menu escolhida pelo jogador
    int opcao2;          // Segunda opção do menu escolhida pelo jogador

    float valor1_attr1;  // Valor do atributo 1 para a Carta 1
    float valor2_attr1;  // Valor do atributo 1 para a Carta 2
    float valor1_attr2;  // Valor do atributo 2 para a Carta 1
    float valor2_attr2;  // Valor do atributo 2 para a Carta 2

    float soma1;         // Soma dos dois atributos da Carta 1
    float soma2;         // Soma dos dois atributos da Carta 2

    // Flags para controlar validade das opções escolhidas
    int opcao1_valida;   // 1 se a primeira opção é válida, 0 caso contrário
    int opcao2_valida;   // 1 se a segunda opção é válida, 0 caso contrário

    // ============================================================
    // Cadastro das Cartas
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

    // Cálculo do PIB per Capita: PIB (convertido para reais) / População
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

    // Cálculo do PIB per Capita: PIB (convertido para reais) / População
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
    // MENU 1 - Escolha do primeiro atributo
    // Menu interativo usando switch com todas as opções disponíveis
    // ============================================================

    printf("\n========================================\n");
    printf("   SUPER TRUNFO - COMPARAÇÃO AVANÇADA\n");
    printf("========================================\n");
    printf("Escolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("========================================\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao1);

    // Inicializa as flags de validade e os valores dos atributos
    opcao1_valida = 1;
    valor1_attr1 = 0;
    valor2_attr1 = 0;

    // ============================================================
    // Processamento do primeiro atributo usando switch
    // Obtém os valores do atributo escolhido para ambas as cartas
    // ============================================================

    switch (opcao1) {
        case 1:
            // População: maior vence
            valor1_attr1 = (float)populacao1;
            valor2_attr1 = (float)populacao2;
            break;
        case 2:
            // Área: maior vence
            valor1_attr1 = area1;
            valor2_attr1 = area2;
            break;
        case 3:
            // PIB: maior vence
            valor1_attr1 = pib1;
            valor2_attr1 = pib2;
            break;
        case 4:
            // Pontos Turísticos: maior vence
            valor1_attr1 = (float)pontosTuristicos1;
            valor2_attr1 = (float)pontosTuristicos2;
            break;
        case 5:
            // Densidade Populacional: MENOR vence (regra invertida)
            // Para manter a lógica de "maior soma vence", invertemos os valores
            // usando o operador ternário para normalizar a comparação
            valor1_attr1 = (densidadePopulacional1 > 0) ? (1.0f / densidadePopulacional1) : 0;
            valor2_attr1 = (densidadePopulacional2 > 0) ? (1.0f / densidadePopulacional2) : 0;
            break;
        case 6:
            // PIB per Capita: maior vence
            valor1_attr1 = pibPerCapita1;
            valor2_attr1 = pibPerCapita2;
            break;
        default:
            // Opção inválida: marca como inválida
            printf("\nOpção inválida! Por favor, escolha uma opção de 1 a 6.\n");
            opcao1_valida = 0;
            break;
    }

    // ============================================================
    // MENU 2 - Escolha do segundo atributo (MENU DINÂMICO)
    // O atributo já escolhido NÃO aparece como opção.
    // Isso garante que o jogador escolha dois atributos diferentes.
    // ============================================================

    // Só exibe o segundo menu se a primeira opção foi válida
    if (opcao1_valida == 1) {

        printf("\n========================================\n");
        printf("Escolha o SEGUNDO atributo para comparação:\n");
        printf("(O atributo já escolhido não está disponível)\n");
        printf("----------------------------------------\n");

        // Menu dinâmico: exibe apenas os atributos que NÃO foram escolhidos
        // Utiliza operador ternário para decidir se exibe ou pula cada opção
        // O operador ternário (condição ? "texto" : "") permite exibir
        // condicionalmente cada linha do menu

        // Exibe opção 1 apenas se não foi a primeira escolha
        printf("%s", (opcao1 != 1) ? "1 - População\n" : "");
        // Exibe opção 2 apenas se não foi a primeira escolha
        printf("%s", (opcao1 != 2) ? "2 - Área\n" : "");
        // Exibe opção 3 apenas se não foi a primeira escolha
        printf("%s", (opcao1 != 3) ? "3 - PIB\n" : "");
        // Exibe opção 4 apenas se não foi a primeira escolha
        printf("%s", (opcao1 != 4) ? "4 - Número de Pontos Turísticos\n" : "");
        // Exibe opção 5 apenas se não foi a primeira escolha
        printf("%s", (opcao1 != 5) ? "5 - Densidade Populacional\n" : "");
        // Exibe opção 6 apenas se não foi a primeira escolha
        printf("%s", (opcao1 != 6) ? "6 - PIB per Capita\n" : "");

        printf("========================================\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao2);

        // Inicializa a flag de validade e os valores do segundo atributo
        opcao2_valida = 1;
        valor1_attr2 = 0;
        valor2_attr2 = 0;

        // ============================================================
        // Validação: verifica se o jogador escolheu o mesmo atributo
        // Usa if-else aninhado para tratar essa situação
        // ============================================================

        if (opcao2 == opcao1) {
            // O jogador tentou escolher o mesmo atributo duas vezes
            printf("\nErro: Você não pode escolher o mesmo atributo duas vezes!\n");
            printf("Você já escolheu a opção %d no primeiro atributo.\n", opcao1);
            opcao2_valida = 0;
        } else {
            // A opção é diferente da primeira, prosseguir com o processamento

            // ============================================================
            // Processamento do segundo atributo usando switch
            // ============================================================

            switch (opcao2) {
                case 1:
                    valor1_attr2 = (float)populacao1;
                    valor2_attr2 = (float)populacao2;
                    break;
                case 2:
                    valor1_attr2 = area1;
                    valor2_attr2 = area2;
                    break;
                case 3:
                    valor1_attr2 = pib1;
                    valor2_attr2 = pib2;
                    break;
                case 4:
                    valor1_attr2 = (float)pontosTuristicos1;
                    valor2_attr2 = (float)pontosTuristicos2;
                    break;
                case 5:
                    // Densidade: inversão para manter lógica de maior soma vence
                    valor1_attr2 = (densidadePopulacional1 > 0) ? (1.0f / densidadePopulacional1) : 0;
                    valor2_attr2 = (densidadePopulacional2 > 0) ? (1.0f / densidadePopulacional2) : 0;
                    break;
                case 6:
                    valor1_attr2 = pibPerCapita1;
                    valor2_attr2 = pibPerCapita2;
                    break;
                default:
                    printf("\nOpção inválida! Por favor, escolha uma opção de 1 a 6.\n");
                    opcao2_valida = 0;
                    break;
            }
        }

        // ============================================================
        // Exibição dos resultados e comparação final
        // Só executa se ambas as opções são válidas
        // ============================================================

        if (opcao2_valida == 1) {

            // Nomes dos atributos para exibição usando operador ternário encadeado
            // Isso evita a necessidade de múltiplos if-else para definir strings
            const char *nomeAttr1 = (opcao1 == 1) ? "População" :
                                    (opcao1 == 2) ? "Área" :
                                    (opcao1 == 3) ? "PIB" :
                                    (opcao1 == 4) ? "Pontos Turísticos" :
                                    (opcao1 == 5) ? "Densidade Populacional" :
                                                    "PIB per Capita";

            const char *nomeAttr2 = (opcao2 == 1) ? "População" :
                                    (opcao2 == 2) ? "Área" :
                                    (opcao2 == 3) ? "PIB" :
                                    (opcao2 == 4) ? "Pontos Turísticos" :
                                    (opcao2 == 5) ? "Densidade Populacional" :
                                                    "PIB per Capita";

            // ============================================================
            // Exibição da comparação individual de cada atributo
            // ============================================================

            printf("\n========================================\n");
            printf("       RESULTADO DA COMPARAÇÃO\n");
            printf("========================================\n");

            // --- Comparação do Atributo 1 ---

            printf("\n--- Atributo 1: %s ---\n", nomeAttr1);

            // Para Densidade Populacional, exibe os valores originais (não invertidos)
            if (opcao1 == 5) {
                printf("Carta 1 - %s (%c): %.2f hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
                printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomeCidade2, estado2, densidadePopulacional2);

                // Densidade: menor valor vence (if-else aninhado)
                if (densidadePopulacional1 < densidadePopulacional2) {
                    printf("Vencedor do atributo: Carta 1 (%s) - menor densidade!\n", nomeCidade1);
                } else {
                    if (densidadePopulacional2 < densidadePopulacional1) {
                        printf("Vencedor do atributo: Carta 2 (%s) - menor densidade!\n", nomeCidade2);
                    } else {
                        printf("Atributo empatado!\n");
                    }
                }
            } else {
                // Para outros atributos, exibe os valores diretamente
                printf("Carta 1 - %s (%c): %.2f\n", nomeCidade1, estado1, valor1_attr1);
                printf("Carta 2 - %s (%c): %.2f\n", nomeCidade2, estado2, valor2_attr1);

                // Maior valor vence (if-else aninhado)
                if (valor1_attr1 > valor2_attr1) {
                    printf("Vencedor do atributo: Carta 1 (%s)\n", nomeCidade1);
                } else {
                    if (valor2_attr1 > valor1_attr1) {
                        printf("Vencedor do atributo: Carta 2 (%s)\n", nomeCidade2);
                    } else {
                        printf("Atributo empatado!\n");
                    }
                }
            }

            // --- Comparação do Atributo 2 ---

            printf("\n--- Atributo 2: %s ---\n", nomeAttr2);

            // Para Densidade Populacional, exibe os valores originais (não invertidos)
            if (opcao2 == 5) {
                printf("Carta 1 - %s (%c): %.2f hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
                printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomeCidade2, estado2, densidadePopulacional2);

                // Densidade: menor valor vence
                if (densidadePopulacional1 < densidadePopulacional2) {
                    printf("Vencedor do atributo: Carta 1 (%s) - menor densidade!\n", nomeCidade1);
                } else {
                    if (densidadePopulacional2 < densidadePopulacional1) {
                        printf("Vencedor do atributo: Carta 2 (%s) - menor densidade!\n", nomeCidade2);
                    } else {
                        printf("Atributo empatado!\n");
                    }
                }
            } else {
                printf("Carta 1 - %s (%c): %.2f\n", nomeCidade1, estado1, valor1_attr2);
                printf("Carta 2 - %s (%c): %.2f\n", nomeCidade2, estado2, valor2_attr2);

                // Maior valor vence
                if (valor1_attr2 > valor2_attr2) {
                    printf("Vencedor do atributo: Carta 1 (%s)\n", nomeCidade1);
                } else {
                    if (valor2_attr2 > valor1_attr2) {
                        printf("Vencedor do atributo: Carta 2 (%s)\n", nomeCidade2);
                    } else {
                        printf("Atributo empatado!\n");
                    }
                }
            }

            // ============================================================
            // Soma dos Atributos e Resultado Final
            // A soma dos valores normalizados determina o vencedor.
            // Para Densidade, a inversão já foi aplicada para que
            // a carta com menor densidade tenha maior valor na soma.
            // ============================================================

            soma1 = valor1_attr1 + valor1_attr2;
            soma2 = valor2_attr1 + valor2_attr2;

            printf("\n========================================\n");
            printf("         RESULTADO FINAL\n");
            printf("========================================\n");
            printf("Atributos comparados: %s + %s\n", nomeAttr1, nomeAttr2);
            printf("----------------------------------------\n");
            printf("Soma dos atributos - Carta 1 (%s): %.2f\n", nomeCidade1, soma1);
            printf("Soma dos atributos - Carta 2 (%s): %.2f\n", nomeCidade2, soma2);
            printf("----------------------------------------\n");

            // Resultado final usando operador ternário para definir a mensagem
            // e if-else aninhado para a lógica de decisão
            if (soma1 > soma2) {
                // Carta 1 tem maior soma, então vence
                // Operador ternário para compor mensagem de vitória
                printf("Resultado: %s\n",
                    (soma1 > soma2) ? "Carta 1 venceu!" : "Empate!");
                printf("Parabéns, %s é a cidade vencedora!\n", nomeCidade1);
            } else {
                // Soma1 não é maior, verificar se é menor ou igual
                if (soma2 > soma1) {
                    // Carta 2 tem maior soma, então vence
                    printf("Resultado: %s\n",
                        (soma2 > soma1) ? "Carta 2 venceu!" : "Empate!");
                    printf("Parabéns, %s é a cidade vencedora!\n", nomeCidade2);
                } else {
                    // Somas iguais: empate
                    // Operador ternário para confirmar o empate
                    printf("Resultado: %s\n",
                        (soma1 == soma2) ? "Empate!" : "Erro inesperado");
                    printf("As duas cidades empataram na soma dos atributos!\n");
                }
            }

            printf("========================================\n");
        }
    }

    return 0;
}
