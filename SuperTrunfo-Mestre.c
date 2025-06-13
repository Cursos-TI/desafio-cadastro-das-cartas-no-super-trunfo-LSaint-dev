#include <stdio.h> 

int main() {
    // Variáveis para a CARTA 1
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numPontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Variáveis para a CARTA 2
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    int opcaoAtributo1; // Primeira escolha do usuário
    int opcaoAtributo2; // Segunda escolha do usuário
    int entradaValida = 0; // Flag para validar entrada do menu

    // Variáveis para armazenar os valores dos atributos escolhidos para a soma
    float valorAttr1_C1 = 0.0f;
    float valorAttr1_C2 = 0.0f;
    float valorAttr2_C1 = 0.0f;
    float valorAttr2_C2 = 0.0f;

    // Variáveis para a soma final
    float somaAtributosC1;
    float somaAtributosC2;

    printf("*****************************************\n");
    printf("  SUPER TRUNFO DE CIDADES - DESAFIO FINAL\n");
    printf("*****************************************\n\n");

    // CARTA 1
    printf("INFORME OS DADOS DA CARTA 1\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigoCarta1);
    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos1);
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)numPontosTuristicos1 +
                  pibPerCapita1 + (1.0f / densidadePopulacional1);
    printf("\n");

    // CARTA 2
    printf("INFORME OS DADOS DA CARTA 2\n");
    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigoCarta2);
    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos2);
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)numPontosTuristicos2 +
                  pibPerCapita2 + (1.0f / densidadePopulacional2);
    printf("\n");

    // EXIBIÇÃO DE DADOS DAS CARTAS (Para referência do usuário)
    printf("*****************************************\n");
    printf("  CARTAS CADASTRADAS                     \n");
    printf("*****************************************\n\n");

    printf("Carta 1: %s (%c)\n", nomeCidade1, estado1);
    printf("  População: %lu\n", populacao1);
    printf("  Área: %.2f km²\n", area1);
    printf("  PIB: %.2f bilhões de reais\n", pib1);
    printf("  Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("  PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("\n");

    printf("Carta 2: %s (%c)\n", nomeCidade2, estado2);
    printf("  População: %lu\n", populacao2);
    printf("  Área: %.2f km²\n", area2);
    printf("  PIB: %.2f bilhões de reais\n", pib2);
    printf("  Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("  Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("  PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("\n");

    // PRIMEIRO MENU DE ESCOLHA DE ATRIBUTO
    while (!entradaValida) {
        printf("*****************************************\n");
        printf("  ESCOLHA O PRIMEIRO ATRIBUTO PARA A BATALHA \n");
        printf("*****************************************\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("6. PIB per Capita\n");
        printf("Digite o número do atributo desejado: ");
        scanf("%d", &opcaoAtributo1);

        switch (opcaoAtributo1) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                entradaValida = 1; // Entrada válida, sai do loop
                break;
            default:
                printf("Opção inválida! Por favor, escolha um número de 1 a 6.\n\n");
                // Limpa o buffer do teclado para evitar loop infinito em caso de entrada inválida
                while (getchar() != '\n');
                break;
        }
    }
    printf("\n");
    entradaValida = 0; // Reseta a flag para a segunda escolha

    // SEGUNDO MENU DE ESCOLHA DE ATRIBUTO (DINÂMICO)
    while (!entradaValida) {
        printf("*****************************************\n");
        printf("  ESCOLHA O SEGUNDO ATRIBUTO PARA A BATALHA \n");
        printf("  (Não pode ser o mesmo do primeiro!)\n");
        printf("*****************************************\n");

        if (opcaoAtributo1 != 1) printf("1. População\n");
        if (opcaoAtributo1 != 2) printf("2. Área\n");
        if (opcaoAtributo1 != 3) printf("3. PIB\n");
        if (opcaoAtributo1 != 4) printf("4. Número de Pontos Turísticos\n");
        if (opcaoAtributo1 != 5) printf("5. Densidade Populacional\n");
        if (opcaoAtributo1 != 6) printf("6. PIB per Capita\n");

        printf("Digite o número do segundo atributo desejado: ");
        scanf("%d", &opcaoAtributo2);

        if (opcaoAtributo2 == opcaoAtributo1) {
            printf("Erro: Você não pode escolher o mesmo atributo novamente! Tente outra vez.\n\n");
            // Limpa o buffer do teclado
            while (getchar() != '\n');
        } else {
            switch (opcaoAtributo2) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                    entradaValida = 1; // Entrada válida e diferente da primeira
                    break;
                default:
                    printf("Opção inválida! Por favor, escolha um número válido e diferente do primeiro.\n\n");
                    // Limpa o buffer do teclado
                    while (getchar() != '\n');
                    break;
            }
        }
    }
    printf("\n");

    // Atributo 1
    switch (opcaoAtributo1) {
        case 1: // População
            valorAttr1_C1 = (float)populacao1 / 1000000.0f; // Normaliza para milhões
            valorAttr1_C2 = (float)populacao2 / 1000000.0f;
            break;
        case 2: // Área
            valorAttr1_C1 = area1;
            valorAttr1_C2 = area2;
            break;
        case 3: // PIB
            valorAttr1_C1 = pib1; // Já em bilhões
            valorAttr1_C2 = pib2;
            break;
        case 4: // Número de Pontos Turísticos
            valorAttr1_C1 = (float)numPontosTuristicos1;
            valorAttr1_C2 = (float)numPontosTuristicos2;
            break;
        case 5: // Densidade Populacional (menor valor vence)
            // Para a soma, usamos o inverso para que um valor menor de densidade represente um valor maior de "poder"
            valorAttr1_C1 = (densidadePopulacional1 != 0) ? (1.0f / densidadePopulacional1) : 0.0f;
            valorAttr1_C2 = (densidadePopulacional2 != 0) ? (1.0f / densidadePopulacional2) : 0.0f;
            break;
        case 6: // PIB per Capita
            valorAttr1_C1 = pibPerCapita1 / 1000.0f; // Normaliza para milhares
            valorAttr1_C2 = pibPerCapita2 / 1000.0f;
            break;
    }

    // Atributo 2
    switch (opcaoAtributo2) {
        case 1: // População
            valorAttr2_C1 = (float)populacao1 / 1000000.0f;
            valorAttr2_C2 = (float)populacao2 / 1000000.0f;
            break;
        case 2: // Área
            valorAttr2_C1 = area1;
            valorAttr2_C2 = area2;
            break;
        case 3: // PIB
            valorAttr2_C1 = pib1;
            valorAttr2_C2 = pib2;
            break;
        case 4: // Número de Pontos Turísticos
            valorAttr2_C1 = (float)numPontosTuristicos1;
            valorAttr2_C2 = (float)numPontosTuristicos2;
            break;
        case 5: // Densidade Populacional (menor valor vence)
            valorAttr2_C1 = (densidadePopulacional1 != 0) ? (1.0f / densidadePopulacional1) : 0.0f;
            valorAttr2_C2 = (densidadePopulacional2 != 0) ? (1.0f / densidadePopulacional2) : 0.0f;
            break;
        case 6: // PIB per Capita
            valorAttr2_C1 = pibPerCapita1 / 1000.0f;
            valorAttr2_C2 = pibPerCapita2 / 1000.0f;
            break;
    }

    // Soma dos atributos (usando os valores normalizados/tratados)
    somaAtributosC1 = valorAttr1_C1 + valorAttr2_C1;
    somaAtributosC2 = valorAttr1_C2 + valorAttr2_C2;

    // --- EXIBIÇÃO DETALHADA E RESULTADO FINAL ---
    printf("*****************************************\n");
    printf("  DETALHES DA BATALHA                    \n");
    printf("*****************************************\n\n");

    // Nomes dos atributos para exibição
    char *nomeAtributo1;
    char *nomeAtributo2;

    // Usando switch para atribuir o nome baseado na escolha
    switch (opcaoAtributo1) {
        case 1: nomeAtributo1 = "População"; break;
        case 2: nomeAtributo1 = "Área"; break;
        case 3: nomeAtributo1 = "PIB"; break;
        case 4: nomeAtributo1 = "Pontos Turísticos"; break;
        case 5: nomeAtributo1 = "Densidade Populacional"; break;
        case 6: nomeAtributo1 = "PIB per Capita"; break;
        default: nomeAtributo1 = "Inválido"; break; // Nunca deve acontecer com a validação
    }

    switch (opcaoAtributo2) {
        case 1: nomeAtributo2 = "População"; break;
        case 2: nomeAtributo2 = "Área"; break;
        case 3: nomeAtributo2 = "PIB"; break;
        case 4: nomeAtributo2 = "Pontos Turísticos"; break;
        case 5: nomeAtributo2 = "Densidade Populacional"; break;
        case 6: nomeAtributo2 = "PIB per Capita"; break;
        default: nomeAtributo2 = "Inválido"; break;
    }

    printf("Atributos escolhidos: %s e %s\n\n", nomeAtributo1, nomeAtributo2);

    printf("Carta 1 (%s - %c):\n", nomeCidade1, estado1);
    printf("  %s: %.2f\n", nomeAtributo1, (opcaoAtributo1 == 1) ? (float)populacao1 : (opcaoAtributo1 == 3) ? pib1 : (opcaoAtributo1 == 5) ? densidadePopulacional1 : (opcaoAtributo1 == 6) ? pibPerCapita1 : (opcaoAtributo1 == 2) ? area1 : (float)numPontosTuristicos1);
    printf("  %s: %.2f\n", nomeAtributo2, (opcaoAtributo2 == 1) ? (float)populacao1 : (opcaoAtributo2 == 3) ? pib1 : (opcaoAtributo2 == 5) ? densidadePopulacional1 : (opcaoAtributo2 == 6) ? pibPerCapita1 : (opcaoAtributo2 == 2) ? area1 : (float)numPontosTuristicos1);
    printf("  Soma dos atributos (normalizada): %.2f\n", somaAtributosC1);
    printf("\n");

    printf("Carta 2 (%s - %c):\n", nomeCidade2, estado2);
    printf("  %s: %.2f\n", nomeAtributo1, (opcaoAtributo1 == 1) ? (float)populacao2 : (opcaoAtributo1 == 3) ? pib2 : (opcaoAtributo1 == 5) ? densidadePopulacional2 : (opcaoAtributo1 == 6) ? pibPerCapita2 : (opcaoAtributo1 == 2) ? area2 : (float)numPontosTuristicos2);
    printf("  %s: %.2f\n", nomeAtributo2, (opcaoAtributo2 == 1) ? (float)populacao2 : (opcaoAtributo2 == 3) ? pib2 : (opcaoAtributo2 == 5) ? densidadePopulacional2 : (opcaoAtributo2 == 6) ? pibPerCapita2 : (opcaoAtributo2 == 2) ? area2 : (float)numPontosTuristicos2);
    printf("  Soma dos atributos (normalizada): %.2f\n", somaAtributosC2);
    printf("\n");

    // Determinação do Vencedor da Rodada
    printf("*****************************************\n");
    printf("  RESULTADO FINAL DA RODADA              \n");
    printf("*****************************************\n\n");

    if (somaAtributosC1 > somaAtributosC2) {
        printf("A Carta 1 (%s) venceu a rodada com a maior soma de atributos!\n", nomeCidade1);
    } else if (somaAtributosC2 > somaAtributosC1) {
        printf("A Carta 2 (%s) venceu a rodada com a maior soma de atributos!\n", nomeCidade2);
    } else {
        printf("A rodada terminou em Empate!\n");
    }

    printf("\n*****************************************\n");
    printf("          FIM DE JOGO! \n");
    printf("*****************************************\n");

    return 0; 
}