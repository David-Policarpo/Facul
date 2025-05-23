#include <stdio.h>

int main() {
    char estado1, estado2; // estado1 = Primeira Carta / estado2 = Segunda Carta
    char cod1[5], cod2[5]; // Código da Carta 1 / Código da Carta 2 
    char cidade1[30], cidade2[30]; // Nome da Cidade 1 / Nome da Cidade 2
    unsigned long int populacao1, populacao2; // População da Cidade 1 / População da Cidade 2
    int turistico1, turistico2; // Número de pontos Turísticos da cidade 1 / Número de pontos Turísticos da cidade 2 
    double area1, area2, pib1, pib2, densidade1, densidade2, ppc1, ppc2;
    float superpoder1, superpoder2;

    // Cadastro da Carta 1
    printf("Carta 1:\n");
    printf("Digite a Letra do Estado da Primeira Carta (EX: A - H): ");
    scanf(" %c", &estado1);
    printf("Digite os dois dígitos Primeira Carta (EX: A01): ");
    scanf("%s", cod1);
    printf("Digite o Nome da cidade (EX: São Paulo): ");
    scanf(" %[^\n]", cidade1);
    printf("Digite o número de habitantes da cidade (EX: 12325000): ");
    scanf("%lu", &populacao1);
    printf("Digite a Área da cidade em quilômetros quadrados (EX: 1521.11): ");
    scanf("%lf", &area1);
    printf("Digite o PIB (em bilhões) (EX: 699.28): ");
    scanf("%lf", &pib1);
    printf("Digite o número de pontos turísticos (EX: 50): ");
    scanf("%d", &turistico1);

    // Cadastro da Carta 2
    printf("\nCarta 2:\n");
    printf("Digite a Letra do Estado da Segunda Carta (EX: A - H): ");
    scanf(" %c", &estado2);
    printf("Digite os dois dígitos Segunda Carta (EX: B02): ");
    scanf("%s", cod2);
    printf("Digite o Nome da cidade (EX: Rio de Janeiro): ");
    scanf(" %[^\n]", cidade2);
    printf("Digite o número de habitantes da cidade (EX: 6748000): ");
    scanf("%lu", &populacao2);
    printf("Digite a Área da cidade em quilômetros quadrados (EX: 1200.25): ");
    scanf("%lf", &area2);
    printf("Digite o PIB (em bilhões) (EX: 300.50): ");
    scanf("%lf", &pib2);
    printf("Digite o número de pontos turísticos (EX: 30): ");
    scanf("%d", &turistico2);

    // Cálculos adicionais
    pib1 *= 1000000000;
    pib2 *= 1000000000;
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    ppc1 = pib1 / populacao1;
    ppc2 = pib2 / populacao2;
    superpoder1 = (float)((double)populacao1 + area1 + pib1 + turistico1 + ppc1 + (1 / densidade1));
    superpoder2 = (float)((double)populacao2 + area2 + pib2 + turistico2 + ppc2 + (1 / densidade2));

    //Requisição das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB (bi): %.2f\n", pib1 / 1000000000);
    printf("Pontos Turisticos: %d\n", turistico1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", ppc1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", cod2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB (bi): %.2f\n", pib2 / 1000000000);
    printf("Pontos Turisticos: %d\n", turistico2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", ppc2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Escolha de Atributos
    int atributo1 = 0, atributo2 = 0;
    double valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2, soma1, soma2;

    // Primeiro atributo
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    scanf("%d", &atributo1);

    // Segundo atributo, com opções excluindo o primeiro
    printf("\nEscolha o segundo atributo para comparacao (diferente do primeiro):\n");

    if (atributo1 != 1) printf("1. Populacao\n");
    if (atributo1 != 2) printf("2. Area\n");
    if (atributo1 != 3) printf("3. PIB\n");
    if (atributo1 != 4) printf("4. Pontos Turisticos\n");
    if (atributo1 != 5) printf("5. Densidade Demografica\n");

    scanf("%d", &atributo2);

    // Validação 
    if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5) {
        printf("Erro: segundo atributo inválido ou igual ao primeiro.\n");
        return 1;
    }

    // Obter valores dos atributos escolhidos 
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = turistico1; valor1_carta2 = turistico2; break;
        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; break;
    }

    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = turistico1; valor2_carta2 = turistico2; break;
        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2; break;
    }

  
     // Exibição dos Atributos Escolhidos
    printf("\nAtributos Escolhidos:\n");
    printf("1. ");
    switch (atributo1) {
    case 1: printf("População - %.2f x %.2f\n", valor1_carta1, valor1_carta2); break;
    case 2: printf("Área - %.2f x %.2f\n", valor1_carta1, valor1_carta2); break;
    case 3: printf("PIB - %.2f x %.2f\n", valor1_carta1, valor1_carta2); break;
    case 4: printf("Pontos Turísticos - %.2f x %.2f\n", valor1_carta1, valor1_carta2); break;
    case 5: printf("Densidade Demográfica - %.2f x %.2f\n", valor1_carta1, valor1_carta2); break;
    }

    printf("2. ");
    switch (atributo2) {
    case 1: printf("População - %.2f x %.2f\n", valor2_carta1, valor2_carta2); break;
    case 2: printf("Área - %.2f x %.2f\n", valor2_carta1, valor2_carta2); break;
    case 3: printf("PIB - %.2f x %.2f\n", valor2_carta1, valor2_carta2); break;
    case 4: printf("Pontos Turísticos - %.2f x %.2f\n", valor2_carta1, valor2_carta2); break;
    case 5: printf("Densidade Demográfica - %.2f x %.2f\n", valor2_carta1, valor2_carta2); break;
    }

    // Ajuste para densidade (quanto menor, melhor)
    if (atributo1 == 5) {
    valor1_carta1 = 1 / valor1_carta1;
    valor1_carta2 = 1 / valor1_carta2;
    }
    if (atributo2 == 5) {
    valor2_carta1 = 1 / valor2_carta1;
    valor2_carta2 = 1 / valor2_carta2;
    }

    // Cálculo das somas
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    // Exibição da soma
    printf("\nSoma dos atributos comparados:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    // Resultado final 
    printf("\n### Resultado Final: ");
    (soma1 > soma2) ? printf("Carta 1 - %s venceu! ###\n", cidade1) :
    (soma2 > soma1) ? printf("Carta 2 - %s venceu! ###\n", cidade2) :
    printf("Empate! ###\n");

    return 0;

}