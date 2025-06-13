#include <stdio.h>

int main() {
    // Variáveis para a CARTA 1
    char estado1;             // Estado da carta
    char codigoCarta1[5];     // Código da carta
    char nomeCidade1[50];     // Nome da cidade 
    int populacao1;           // População da cidade
    float area1;              // Área da cidade em km²
    float pib1;               // PIB da cidade
    int numPontosTuristicos1; // Número de pontos turísticos

    // Variáveis para a CARTA 2
    char estado2;
    char codigoCarta2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;

    printf("*****************************************\n");
    printf("  SUPER TRUNFO DE CIDADES - NÍVEL NOVATO \n");
    printf("  Vamos cadastrar os dados de duas cartas!\n");
    printf("*****************************************\n\n");

    // ENTRADA DE DADOS DA CARTA 1
    printf("INFORME OS DADOS DA CARTA 1\n");

    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1); // O espaço antes de %c ainda é importante, quebrei muito a cabeça para descobrir isso, o resultado sempre saia errado

    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigoCarta1); 

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos1);

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
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos2);

    printf("\n*****************************************\n");
    printf("  DADOS DAS CARTAS CADASTRADAS           \n");
    printf("*****************************************\n\n");

    // EXIBIÇÃO DE DADOS DA CARTA 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); 
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("\n"); 

    // EXIBIÇÃO DE DADOS DA CARTA 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("\n");

    return 0;
};