#include <stdio.h>
int main(){

    char estado1, estado2; // estado1 = Primeira Carta / estado2 = Segunda Carta
    char cod1[5], cod2[5]; // Código da Carta 1 / Código da Carta 2 
    char cidade1[30], cidade2[30]; // Nome da Cidade 1 / Nome da Cidade 2
    int populacao1, populacao2; // População da Cidade 1 / População da Cidade 2
    int turistico1, turistico2; // Número de pontos Turísticos da cidade 1 / Número de pontos Turísticos da cidade 2
    float area1, area2; // Área em km² cidade 1 / Área em km² cidade 2
    float pib1, pib2; // PIB (Produto Interno Bruto) cidade 1 / PIB (Produto Interno Bruto) cidade 2


    // Iremos fazer uma carta de cada vez.

    printf("Carta 1:\n");    
    printf("Digite a Letra do Estado da Primeira Carta (EX: A - H): "); // Uma letra entre A e H.
    scanf(" %c", &estado1); // Espaço adicionado antes do "%c" porque estava lendo caracteres diferentes do que realmente estava sendo computado.

    printf("Digite os dois dígitos Primeira Carta (EX: A02): ");
    scanf("%s", cod1); // FINALMENTE era o "&" que tava dando problema D:

    printf("Digite o Nome da cidade (EX: Rio de Janeiro): ");
    scanf(" %[^\n]", cidade1);   // Pesquisando um pouco descobri que usando esse especificador dá pra usar nomes compostos para as cidades com o Scanf.

    printf("Digite o número de habitantes da cidade (EX: 12345): "); // Vou melhorar colocando a pontuação certinha de mil, milhão e etc...
    scanf("%d", &populacao1);

    printf("Digite a Área da cidade em quilômetros quadrados (EX: 1200.02): "); // Adicionar KM² no terminal de saída.
    scanf("%f", &area1);

    printf("Digite o PIB (EX: 699.00): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos (EX: 20): ");
    scanf("%d", &turistico1);

        // Iremos pra segunda carta agora...

        printf("\nCarta 2:\n");
        printf("Digite a Letra do Estado da Segunda Carta (EX: A - H): "); // Uma letra entre A e H.
        scanf(" %c", &estado2);

        printf("Digite os dois dígitos Segunda Carta (EX: A02): ");
         scanf("%s", &cod2);

        printf("Digite o Nome da cidade (EX: Rio de Janeiro): ");
        scanf(" %[^\n]", cidade2);   // Pesquisando um pouco descobri que usando esse especificador dá pra usar nomes compostos para as cidades com o Scanf.

        printf("Digite o número de habitantes da cidade (EX: 12345): "); 
        scanf("%d", &populacao2);

        printf("Digite a Área da cidade em quilômetros quadrados (EX: 1200.02): "); // Adicionar KM² no terminal de saída.
        scanf("%f", &area2);

        printf("Digite o PIB (EX: 699.00): ");
        scanf("%f", &pib2);

        printf("Digite o número de pontos turísticos (EX: 20): ");
        scanf("%d", &turistico2);
    

            // Agora vamos puxar os dados digitados na ordem que foi pedida... Colocando em ordem para que as duas cartas apareçam uma após a outra.
            // Requisição da primeira carta
            printf("\nCarta 1:\n");
            printf("Estado: %c\n", estado1);
            printf("Código: %s\n", cod1);  
            printf("Nome da Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %.2f KM²\n", area1);
            printf("PIB: %.2f Bilhões\n", pib1);
            printf("Número de Pontos Turísticos: %d\n", turistico1);

                // Requisição da Segunda carta

                printf("\nCarta 2:\n");
                printf("Estado: %c\n", estado2);
                printf("Código: %s\n", cod2); 
                printf("Nome da Cidade: %s\n", cidade2);
                printf("População: %d\n", populacao2);
                printf("Área: %.2f KM²\n", area2);
                printf("PIB: %.2f Bilhões\n", pib2);
                printf("Número de Pontos Turísticos: %d\n", turistico2);

return 0;

}

// Fim???