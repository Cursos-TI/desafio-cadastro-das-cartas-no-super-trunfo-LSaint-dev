#include <stdio.h> 

// Desafio Super Trunfo - Países - Nível Novato

int main() {
    // --- Variáveis para a carta 1 ---
    char estado1_char;           // Letra do estado
    char codigo_carta1[5];       // Código da carta (ex: A01)
    char nome_cidade1[50];       // Nome da cidade
    int populacao1;              // População
    float area1;                 // Área em KM²
    float pib1;                  // PIB
    int pontos_turisticos1;      // Número de pontos turísticos

    // --- Variáveis para a carta 2 ---
    char estado2_char;
    char codigo_carta2[5];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("=======================================\n");
    printf("  DESAFIO SUPER TRUNFO - PAÍSES\n");
    printf("        NÍVEL NOVATO\n");
    printf("=======================================\n");
    printf("Vamos cadastrar duas cartas de cidades.\n");

    // --- CADASTRO DA CARTA 1 ---
    printf("\n--- Cadastro da CARTA 1 ---\n");

    printf("Digite a letra do estado da cidade (de A a H): ");
    scanf(" %c", &estado1_char);

    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo_carta1); 

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade1); 

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em KM²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em Bilhões: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastro da CARTA 2 ---\n");

    printf("Digite a letra do estado da cidade (de A a H): ");
    scanf(" %c", &estado2_char); 

    printf("Digite o código da carta (ex: B02): ");
    scanf(" %s", codigo_carta2); 

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade2); 

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em KM²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em Bilhões: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // --- CARTA 1 ---
    printf("\n--- Dados da CARTA 1 ---\n");
    printf("Estado: %c\n", estado1_char);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhoes R$\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("---------------------------\n");

    // --- CARTA 2 ---
    printf("\n--- Dados da CARTA 2 ---\n");
    printf("Estado: %c\n", estado2_char);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhoes de R$\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("---------------------------\n");

    return 0;
}
