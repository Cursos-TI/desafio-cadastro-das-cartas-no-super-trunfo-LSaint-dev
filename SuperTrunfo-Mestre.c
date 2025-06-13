#include <stdio.h>

int main() {
    // Variáveis para a CARTA 1
    char estado1;
    char codigoCarta1[5];
    char nomeCidade1[50];
    unsigned long int populacao1; // Mudança para unsigned long int
    float area1;
    float pib1;
    int numPontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1; // Nova variável para Super Poder

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

    printf("*****************************************\n");
    printf("  SUPER TRUNFO DE CIDADES - NÍVEL MESTRE \n");
    printf("*****************************************\n\n");

    // ENTRADA DE DADOS DA CARTA 1
    printf("INFORME OS DADOS DA CARTA 1\n");

    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade (sem espaços, por favor): ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos1);

    // CÁLCULOS PARA A CARTA 1
    // Atenção: para densidade, a população deve ser tratada como float
    densidadePopulacional1 = (float)populacao1 / area1;
    // PIB em bilhões, multiplica por 1 bilhão para calcular per capita
    // Casting de populacao1 para float antes da divisão para evitar problemas
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    // Cálculo do Super Poder 1
    // O inverso da densidade é 1.0 / densidade
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)numPontosTuristicos1 +
                  pibPerCapita1 + (1.0f / densidadePopulacional1);

    printf("\n");

    // ENTRADA DE DADOS DA CARTA 2
    printf("INFORME OS DADOS DA CARTA 2\n");

    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade (sem espaços, por favor): ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2); // %lu para unsigned long int

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos2);

    // CÁLCULOS PARA A CARTA 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // Cálculo do Super Poder 2
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)numPontosTuristicos2 +
                  pibPerCapita2 + (1.0f / densidadePopulacional2);

    printf("\n*****************************************\n");
    printf("  DADOS DAS CARTAS CADASTRADAS \n");
    printf("*****************************************\n\n");

    // EXIBIÇÃO DE DADOS DA CARTA 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1); // %lu para exibir unsigned long int
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1); // Exibindo o Super Poder
    printf("\n");

    // EXIBIÇÃO DE DADOS DA CARTA 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2); 
    printf("\n");

    printf("*****************************************\n");
    printf("          COMPARAÇÃO DE CARTAS                   \n");
    printf("*****************************************\n\n");

    // COMPARAÇÕES
    // População
    printf("População: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Área
    printf("Área: ");
    if (area1 > area2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // PIB
    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Pontos Turísticos
    printf("Pontos Turísticos: ");
    if (numPontosTuristicos1 > numPontosTuristicos2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Densidade Populacional (MENOR VALOR VENCE)
    printf("Densidade Populacional: ");
    if (densidadePopulacional1 < densidadePopulacional2) { // Invertido: menor valor vence
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // PIB per Capita
    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    // Super Poder
    printf("Super Poder: ");
    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu (1)\n");
    } else {
        printf("Carta 2 venceu (0)\n");
    }

    printf("\n*****************************************\n");
    printf("              FIM DA BATALHA    \n");
    printf("*****************************************\n");

    return 0;
}