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

    int opcaoAtributo;

    printf("*****************************************\n");
    printf("  SUPER TRUNFO DE CIDADES - INTERATIVO \n");
    printf("*****************************************\n\n");

    // ENTRADA DE DADOS DAS CARTAS
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

    // EXIBIÇÃO DE DADOS DAS CARTAS
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

    // MENU INTERATIVO
    printf("*****************************************\n");
    printf("  ESCOLHA O ATRIBUTO PARA A BATALHA      \n");
    printf("*****************************************\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Digite o número do atributo desejado: ");
    scanf("%d", &opcaoAtributo);
    printf("\n");

    // LÓGICA DE COMPARAÇÃO COM SWITCH
    printf("*****************************************\n");
    printf("  RESULTADO DA BATALHA                   \n");
    printf("*****************************************\n\n");

    switch (opcaoAtributo) {
        case 1: // População
            printf("Atributo escolhido: População\n");
            printf("%s (%c): %lu\n", nomeCidade1, estado1, populacao1);
            printf("%s (%c): %lu\n", nomeCidade2, estado2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo escolhido: Área\n");
            printf("%s (%c): %.2f km²\n", nomeCidade1, estado1, area1);
            printf("%s (%c): %.2f km²\n", nomeCidade2, estado2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("%s (%c): %.2f bilhões de reais\n", nomeCidade1, estado1, pib1);
            printf("%s (%c): %.2f bilhões de reais\n", nomeCidade2, estado2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Número de Pontos Turísticos
            printf("Atributo escolhido: Número de Pontos Turísticos\n");
            printf("%s (%c): %d pontos\n", nomeCidade1, estado1, numPontosTuristicos1);
            printf("%s (%c): %d pontos\n", nomeCidade2, estado2, numPontosTuristicos2);
            if (numPontosTuristicos1 > numPontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (numPontosTuristicos2 > numPontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Populacional (MENOR VALOR VENCE)
            printf("Atributo escolhido: Densidade Populacional\n");
            printf("%s (%c): %.2f hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
            printf("%s (%c): %.2f hab/km²\n", nomeCidade2, estado2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) { // MENOR VALOR VENCE AQUI!
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6: // PIB per Capita
            printf("Atributo escolhido: PIB per Capita\n");
            printf("%s (%c): %.2f reais\n", nomeCidade1, estado1, pibPerCapita1);
            printf("%s (%c): %.2f reais\n", nomeCidade2, estado2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default: // Caso a opção digitada não seja válida
            printf("Opção inválida! Por favor, escolha um número de 1 a 6.\n");
            break;
    }

    printf("\n*****************************************\n");
    printf("  FIM DA RODADA!                         \n");
    printf("*****************************************\n");

    return 0;
}