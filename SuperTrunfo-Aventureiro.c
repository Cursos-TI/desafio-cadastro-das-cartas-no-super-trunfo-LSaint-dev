#include <stdio.h>

int main() {
    // Variáveis para a CARTA 1
    char estado1_char;              // Letra do estado
    char codigo_carta1[5];          // Código da carta
    char nome_cidade1[50];          // Nome da cidade
    int populacao1;                 // População
    float area1;                    // Área em KM²
    float pib1;                     // PIB
    int pontos_turisticos1;         // Número de pontos turísticos
    float densidade_demografica1;   // Nova propriedade: Densidade Demográfica

    // Variáveis para a CARTA 2
    char estado2_char;
    char codigo_carta2[5];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_demografica2;   

    int opcao_menu; // Variável para a escolha do jogador no menu

    // CABEÇALHO DO JOGO
    printf("=======================================\n");
    printf("  DESAFIO SUPER TRUNFO - PAÍSES\n");
    printf("        NÍVEL AVENTUREIRO\n");
    printf("=======================================\n");

    // CADASTRO DA PRIMEIRA CARTA
    printf("\nCADASTRO DA PRIMEIRA CARTA\n");
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

    // CALCULA A DENSIDADE DEMOGRÁFICA PARA CARTA 1
    // Se a área for zero para evitar divisão por zero
    if (area1 > 0) {
        densidade_demografica1 = (float)populacao1 / area1;
    } else {
        densidade_demografica1 = 0.0; // Define como 0 se a área for zero
    }


    // CADASTRO DA SEGUNDA CARTA
    printf("\nCADASTRO DA SEGUNDA CARTA\n");
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

    // CALCULA A DENSIDADE DEMOGRÁFICA PARA CARTA 2
    // Se a área for zero para evitar divisão por zero
    if (area2 > 0) {
        densidade_demografica2 = (float)populacao2 / area2;
    } else {
        densidade_demografica2 = 0.0; // Define como 0 se a área for zero
    }


    // EXIBIÇÃO DAS CARTAS CADASTRADAS (Para o jogador ver as opções)

    printf("=======================================\n");
    printf("  CARTAS CADASTRADAS\n");
    printf("=======================================\n");

    printf("\nCARTA 1: %s (%s)\n", nome_cidade1, codigo_carta1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f Bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Demográfica: %.2f hab/km2\n", densidade_demografica1);
    printf("---------------------------\n");

    printf("\nCARTA 2: %s (%s)\n", nome_cidade2, codigo_carta2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f Bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Demográfica: %.2f hab/km2\n", densidade_demografica2);
    printf("---------------------------\n");


    // MENU DE COMPARAÇÃO
    printf("\n=======================================\n");
    printf("  ESCOLHA UM ATRIBUTO PARA COMPARAR\n");
    printf("=======================================\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Escolha sua opção (1-5): ");
    scanf("%d", &opcao_menu);

    printf("\nRESULTADO DA COMPARAÇÃO\n");
    printf("Comparando %s e %s\n\n", nome_cidade1, nome_cidade2);

    // LÓGICA DE COMPARAÇÃO COM SWITCH E IF-ELSE
    switch (opcao_menu) {
        case 1: // Comparar População
            printf("Atributo Escolhido: População\n");
            printf("%s População: %d\n", nome_cidade1, populacao1);
            printf("%s População: %d\n", nome_cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s com %d habitantes!\n", nome_cidade1, populacao1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s com %d habitantes!\n", nome_cidade2, populacao2);
            } else {
                printf("Empate! População: %d habitantes.\n", populacao1);
            }
            break;

        case 2: // Comparar Área
            printf("Atributo Escolhido: Área\n");
            printf("%s Área: %.2f km2\n", nome_cidade1, area1);
            printf("%s Área: %.2f km2\n", nome_cidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s com %.2f km2!\n", nome_cidade1, area1);
            } else if (area2 > area1) {
                printf("Vencedor: %s com %.2f km2!\n", nome_cidade2, area2);
            } else {
                printf("Empate! Área: %.2f km2.\n", area1);
            }
            break;

        case 3: // Comparar PIB
            printf("Atributo Escolhido: PIB\n");
            printf("%s PIB: %.2f Bilhões\n", nome_cidade1, pib1);
            printf("%s PIB: %.2f Bilhões\n", nome_cidade2, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s com %.2f Bilhões!\n", nome_cidade1, pib1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s com %.2f Bilhões!\n", nome_cidade2, pib2);
            } else {
                printf("Empate! PIB: %.2f Bilhões.\n", pib1);
            }
            break;

        case 4: // Comparar Número de Pontos Turísticos
            printf("Atributo Escolhido: Número de Pontos Turísticos\n");
            printf("%s Pontos Turísticos: %d\n", nome_cidade1, pontos_turisticos1);
            printf("%s Pontos Turísticos: %d\n", nome_cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Vencedor: %s com %d pontos turísticos!\n", nome_cidade1, pontos_turisticos1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Vencedor: %s com %d pontos turísticos!\n", nome_cidade2, pontos_turisticos2);
            } else {
                printf("Empate! Pontos Turísticos: %d.\n", pontos_turisticos1);
            }
            break;

        case 5: // Comparar Densidade Demográfica (MENOR VALOR VENCE)
            printf("Atributo Escolhido: Densidade Demográfica (MENOR VALOR VENCE)\n");
            printf("%s Densidade Demográfica: %.2f hab/km2\n", nome_cidade1, densidade_demografica1);
            printf("%s Densidade Demográfica: %.2f hab/km2\n", nome_cidade2, densidade_demografica2);
            if (densidade_demografica1 < densidade_demografica2) { // Regra invertida: menor vence
                printf("Vencedor: %s com %.2f hab/km2!\n", nome_cidade1, densidade_demografica1);
            } else if (densidade_demografica2 < densidade_demografica1) {
                printf("Vencedor: %s com %.2f hab/km2!\n", nome_cidade2, densidade_demografica2);
            } else {
                printf("Empate! Densidade Demográfica: %.2f hab/km2.\n", densidade_demografica1);
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
            break;
    }

    printf("\nFim da comparação. Pressione enter para sair!");

    return 0;
}