#include <stdio.h>

int main() {
    // Variáveis para a CARTA 1
    char estado1_char;
    char codigo_carta1[5];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_demografica1; // Valor será lido, não calculado
    float super_poder1;           // Super Poder para a Carta 1

    // Variáveis para a CARTA 2
    char estado2_char;
    char codigo_carta2[5];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_demografica2; // Valor será lido, não calculado
    float super_poder2;           // Super Poder para a Carta 2

    int opcao_menu1;    // Escolha do primeiro atributo para comparação
    int opcao_menu2;    // Escolha do segundo atributo para comparação
    int valida_opcao;   // Para validar se a opção de menu é válida

    float soma_temp_carta1; // Soma temporária para comparar dois atributos antes do Super Poder
    float soma_temp_carta2;

    // CABEÇALHO DO JOGO
    printf("=======================================\n");
    printf("  DESAFIO SUPER TRUNFO - PAÍSES\n");
    printf("        NÍVEL MESTRE\n");
    printf("=======================================\n");

    // CADASTRO DA CARTA 1
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
    printf("Digite a densidade demográfica (hab/km²): ");
    scanf("%f", &densidade_demografica1);

    // CADASTRO DA CARTA 2
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
    printf("Digite a densidade demográfica (hab/km²): ");
    scanf("%f", &densidade_demografica2);


    printf("=======================================\n");
    printf("  CARTAS CADASTRADAS\n");
    printf("=======================================\n");

    printf("\nCARTA 1: %s (%s)\n", nome_cidade1, codigo_carta1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade_demografica1);
    printf("---------------------------\n");

    printf("\nCARTA 2: %s (%s)\n", nome_cidade2, codigo_carta2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade_demografica2);
    printf("---------------------------\n");


    // ESCOLHA DO PRIMEIRO ATRIBUTO
    printf("\n=======================================\n");
    printf("  ESCOLHA O PRIMEIRO ATRIBUTO PARA COMPARAR\n");
    printf("=======================================\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");

    do {
        printf("Escolha sua opção (1-5): ");
        scanf("%d", &opcao_menu1);
        valida_opcao = 1;
        if (opcao_menu1 < 1 || opcao_menu1 > 5) {
            printf("Opção inválida para o primeiro atributo. Tente novamente.\n");
            valida_opcao = 0;
        }
    } while (valida_opcao == 0);

    // ESCOLHA DO SEGUNDO ATRIBUTO (DINÂMICO)
    printf("\n=======================================\n");
    printf("  ESCOLHA O SEGUNDO ATRIBUTO PARA COMPARAR\n");
    printf("  (Não pode ser o mesmo do primeiro!)\n");
    printf("=======================================\n");

    printf("1. População%s\n", (opcao_menu1 == 1) ? " (Já escolhido)" : "");
    printf("2. Área%s\n", (opcao_menu1 == 2) ? " (Já escolhido)" : "");
    printf("3. PIB%s\n", (opcao_menu1 == 3) ? " (Já escolhido)" : "");
    printf("4. Número de Pontos Turísticos%s\n", (opcao_menu1 == 4) ? " (Já escolhido)" : "");
    printf("5. Densidade Demográfica%s\n", (opcao_menu1 == 5) ? " (Já escolhido)" : "");

    do {
        printf("Escolha sua opção (1-5, diferente do primeiro): ");
        scanf("%d", &opcao_menu2);
        valida_opcao = 1;
        if (opcao_menu2 < 1 || opcao_menu2 > 5 || opcao_menu2 == opcao_menu1) {
            printf("Opção inválida ou já escolhida. Tente novamente.\n");
            valida_opcao = 0;
        }
    } while (valida_opcao == 0);

    // Inicializa a soma temporária dos atributos para a comparação de 2 atributos e evitar que mostre lixo.
    soma_temp_carta1 = 0.0f;
    soma_temp_carta2 = 0.0f;

    // RESULTADO DA COMPARAÇÃO DOS DOIS ATRIBUTOS ESCOLHIDOS
    printf("\nRESULTADO DA BATALHA TRUNFO (Atributos Escolhidos)\n");
    printf("Comparando %s e %s\n\n", nome_cidade1, nome_cidade2);

    // Comparação do PRIMEIRO atributo escolhido
    printf("Primeiro Atributo\n");
    switch (opcao_menu1) {
        case 1: // População
            printf("Atributo: População\n");
            printf("  Valores: %d (%s) vs %d (%s)\n", populacao1, nome_cidade1, populacao2, nome_cidade2);
            soma_temp_carta1 += populacao1;
            soma_temp_carta2 += populacao2;
            if (populacao1 > populacao2) { printf("  Vencedor: 1 (%s)\n", nome_cidade1); }
            else if (populacao2 > populacao1) { printf("  Vencedor: 0 (%s)\n", nome_cidade2); }
            else { printf("  Empate!\n"); }
            break;
        case 2: // Área
            printf("Atributo: Área\n");
            printf("  Valores: %.2f (%s) vs %.2f (%s)\n", area1, nome_cidade1, area2, nome_cidade2);
            soma_temp_carta1 += area1;
            soma_temp_carta2 += area2;
            if (area1 > area2) { printf("  Vencedor: 1 (%s)\n", nome_cidade1); }
            else if (area2 > area1) { printf("  Vencedor: 0 (%s)\n", nome_cidade2); }
            else { printf("  Empate!\n"); }
            break;
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("  Valores: %.2f (%s) vs %.2f (%s)\n", pib1, nome_cidade1, pib2, nome_cidade2);
            soma_temp_carta1 += pib1;
            soma_temp_carta2 += pib2;
            if (pib1 > pib2) { printf("  Vencedor: 1 (%s)\n", nome_cidade1); }
            else if (pib2 > pib1) { printf("  Vencedor: 0 (%s)\n", nome_cidade2); }
            else { printf("  Empate!\n"); }
            break;
        case 4: // Pontos Turísticos
            printf("Atributo: Número de Pontos Turísticos\n");
            printf("  Valores: %d (%s) vs %d (%s)\n", pontos_turisticos1, nome_cidade1, pontos_turisticos2, nome_cidade2);
            soma_temp_carta1 += pontos_turisticos1;
            soma_temp_carta2 += pontos_turisticos2;
            if (pontos_turisticos1 > pontos_turisticos2) { printf("  Vencedor: 1 (%s)\n", nome_cidade1); }
            else if (pontos_turisticos2 > pontos_turisticos1) { printf("  Vencedor: 0 (%s)\n", nome_cidade2); }
            else { printf("  Empate!\n"); }
            break;
        case 5: // Densidade Demográfica (MENOR VALOR VENCE)
            printf("Atributo: Densidade Demográfica (MENOR VALOR VENCE)\n");
            printf("  Valores: %.2f (%s) vs %.2f (%s)\n", densidade_demografica1, nome_cidade1, densidade_demografica2, nome_cidade2);
            soma_temp_carta1 += densidade_demografica1 * -1; // Inverte para que menor valor adicione mais à soma
            soma_temp_carta2 += densidade_demografica2 * -1; // Inverte para que menor valor adicione mais à soma
            if (densidade_demografica1 < densidade_demografica2) { printf("  Vencedor: 1 (%s)\n", nome_cidade1); }
            else if (densidade_demografica2 < densidade_demografica1) { printf("  Vencedor: 0 (%s)\n", nome_cidade2); }
            else { printf("  Empate!\n"); }
            break;
    }

    // Comparação do SEGUNDO atributo escolhido
    printf("\nSegundo Atributo\n");
    switch (opcao_menu2) {
        case 1: // População
            printf("Atributo: População\n");
            printf("  Valores: %d (%s) vs %d (%s)\n", populacao1, nome_cidade1, populacao2, nome_cidade2);
            soma_temp_carta1 += populacao1;
            soma_temp_carta2 += populacao2;
            if (populacao1 > populacao2) { printf("  Vencedor: 1 (%s)\n", nome_cidade1); }
            else if (populacao2 > populacao1) { printf("  Vencedor: 0 (%s)\n", nome_cidade2); }
            else { printf("  Empate!\n"); }
            break;
        case 2: // Área
            printf("Atributo: Área\n");
            printf("  Valores: %.2f (%s) vs %.2f (%s)\n", area1, nome_cidade1, area2, nome_cidade2);
            soma_temp_carta1 += area1;
            soma_temp_carta2 += area2;
            if (area1 > area2) { printf("  Vencedor: 1 (%s)\n", nome_cidade1); }
            else if (area2 > area1) { printf("  Vencedor: 0 (%s)\n", nome_cidade2); }
            else { printf("  Empate!\n"); }
            break;
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("  Valores: %.2f (%s) vs %.2f (%s)\n", pib1, nome_cidade1, pib2, nome_cidade2);
            soma_temp_carta1 += pib1;
            soma_temp_carta2 += pib2;
            if (pib1 > pib2) { printf("  Vencedor: 1 (%s)\n", nome_cidade1); }
            else if (pib2 > pib1) { printf("  Vencedor: 0 (%s)\n", nome_cidade2); }
            else { printf("  Empate!\n"); }
            break;
        case 4: // Pontos Turísticos
            printf("Atributo: Número de Pontos Turísticos\n");
            printf("  Valores: %d (%s) vs %d (%s)\n", pontos_turisticos1, nome_cidade1, pontos_turisticos2, nome_cidade2);
            soma_temp_carta1 += pontos_turisticos1;
            soma_temp_carta2 += pontos_turisticos2;
            if (pontos_turisticos1 > pontos_turisticos2) { printf("  Vencedor: 1 (%s)\n", nome_cidade1); }
            else if (pontos_turisticos2 > pontos_turisticos1) { printf("  Vencedor: 0 (%s)\n", nome_cidade2); }
            else { printf("  Empate!\n"); }
            break;
        case 5: // Densidade Demográfica (MENOR VALOR VENCE)
            printf("Atributo: Densidade Demográfica (MENOR VALOR VENCE)\n");
            printf("  Valores: %.2f (%s) vs %.2f (%s)\n", densidade_demografica1, nome_cidade1, densidade_demografica2, nome_cidade2);
            soma_temp_carta1 += densidade_demografica1 * -1; // Inverte para que menor valor adicione mais à soma
            soma_temp_carta2 += densidade_demografica2 * -1; 
            if (densidade_demografica1 < densidade_demografica2) { printf("  Vencedor: 1 (%s)\n", nome_cidade1); }
            else if (densidade_demografica2 < densidade_demografica1) { printf("  Vencedor: 0 (%s)\n", nome_cidade2); }
            else { printf("  Empate!\n"); }
            break;
    }

    // RESULTADO FINAL DA SOMA DOS DOIS ATRIBUTOS ESCOLHIDOS
    printf("\nResultado Final da Soma dos Dois Atributos Escolhidos\n");
    printf("Soma de %s: %.2f\n", nome_cidade1, soma_temp_carta1);
    printf("Soma de %s: %.2f\n", nome_cidade2, soma_temp_carta2);

    if (soma_temp_carta1 > soma_temp_carta2) {
        printf("A carta VENCEDORA GERAL eh: %s!\n", nome_cidade1);
    } else if (soma_temp_carta2 > soma_temp_carta1) {
        printf("A carta VENCEDORA GERAL eh: %s!\n", nome_cidade2);
    } else {
        printf("EMPATE! As somas dos atributos são iguais.\n");
    }


    // CÁLCULO E COMPARAÇÃO DO SUPER PODER
    float densidade_invertida1 = (densidade_demografica1 > 0) ? (1.0f / densidade_demografica1) : 1000000.0f;
    float densidade_invertida2 = (densidade_demografica2 > 0) ? (1.0f / densidade_demografica2) : 1000000.0f;

    // Conversão de tipos para float para a soma do Super Poder
    super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + densidade_invertida1;
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + densidade_invertida2;

    printf("\n=======================================\n");
    printf("  RESULTADO DO SUPER PODER\n");
    printf("=======================================\n");
    printf("Super Poder de %s: %.2f\n", nome_cidade1, super_poder1);
    printf("Super Poder de %s: %.2f\n", nome_cidade2, super_poder2);

    if (super_poder1 > super_poder2) {
        printf("O VENCEDOR GERAL PELO SUPER PODER É: %s com %.2f!\n", nome_cidade1, super_poder1);
    } else if (super_poder2 > super_poder1) {
        printf("O VENCEDOR GERAL PELO SUPER PODER É: %s com %.2f!\n", nome_cidade2, super_poder2);
    } else {
        printf("EMPATE NO SUPER PODER!\n");
    }
    printf("---------------------------------------\n");


    return 0;
}