#include <stdio.h>
int main(){

    char estado1, estado2; // estado1 = Primeira Carta / estado2 = Segunda Carta
    char cod1[5], cod2[5]; // Código da Carta 1 / Código da Carta 2 
    char cidade1[30], cidade2[30]; // Nome da Cidade 1 / Nome da Cidade 2
    unsigned long int populacao1, populacao2; // População da Cidade 1 / População da Cidade 2
    int turistico1, turistico2, resultado; // Número de pontos Turísticos da cidade 1 / Número de pontos Turísticos da cidade 2 / Comparação das cartas.    
    double area1, area2; // Área em km² cidade 1 / Área em km² cidade 2
    double pib1, pib2; // PIB (Produto Interno Bruto) cidade 1 / PIB (Produto Interno Bruto) cidade 2
    double densidade1, densidade2; // Densidade Populacional das cidades
    double ppc1, ppc2; //PIB per capta das cidades
    float superpoder1, superpoder2; // Super poderes das cidades
    
    // Iremos fazer uma carta de cada vez.

    printf("Carta 1:\n");    
    printf("Digite a Letra do Estado da Primeira Carta (EX: A - H): "); // Uma letra entre A e H.
    scanf(" %c", &estado1); // Espaço adicionado antes do "%c" porque estava lendo caracteres diferentes do que realmente estava sendo computado.

    printf("Digite os dois dígitos Primeira Carta (EX: A01): ");
    scanf("%s", cod1); // FINALMENTE era o "&" que tava dando problema D:

    printf("Digite o Nome da cidade (EX: São Paulo): ");
    scanf(" %[^\n]", cidade1);   // Pesquisando um pouco descobri que usando esse especificador dá pra usar nomes compostos para as cidades com o Scanf.

    printf("Digite o número de habitantes da cidade (EX: 12325000): "); // Vou melhorar colocando a pontuação certinha de mil, milhão e etc...
    scanf("%lu", &populacao1);

    printf("Digite a Área da cidade em quilômetros quadrados (EX: 1521.11): "); // Adicionar KM² no terminal de saída.
    scanf("%lf", &area1);

    printf("Digite o PIB (EX: 699.28): ");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos (EX: 50): ");
    scanf("%d", &turistico1);

        // Iremos pra segunda carta agora...

        printf("\nCarta 2:\n");
        printf("Digite a Letra do Estado da Segunda Carta (EX: A - H): "); // Uma letra entre A e H.
        scanf(" %c", &estado2);

        printf("Digite os dois dígitos Segunda Carta (EX: B02): ");
         scanf("%s", cod2);

        printf("Digite o Nome da cidade (EX: Rio de Janeiro): ");
        scanf(" %[^\n]", cidade2);   // Pesquisando um pouco descobri que usando esse especificador dá pra usar nomes compostos para as cidades com o Scanf.

        printf("Digite o número de habitantes da cidade (EX: 6748000): "); 
        scanf("%lu", &populacao2);

        printf("Digite a Área da cidade em quilômetros quadrados (EX: 1200.25): "); // Adicionar KM² no terminal de saída.
        scanf("%lf", &area2);

        printf("Digite o PIB (EX: 300.50): ");
        scanf("%lf", &pib2);

        printf("Digite o número de pontos turísticos (EX: 30): ");
        scanf("%d", &turistico2);

       
            pib1 *= 1000000000; // Tive que apelar para a internet pra achar isso aqui
            pib2 *= 1000000000; // E ainda assim não foi fácil.
            
            densidade1 = populacao1 / area1; // Densidade Populacional da cidade 1
            densidade2 = populacao2 / area2; // Densidade Populacional da cidade 2

            ppc1 = pib1 / populacao1; // PIB per capta Cidade 1
            ppc2 = pib2 / populacao2; // PIB per capta Cidade 2

            superpoder1 = (float)((double)populacao1 + area1 + pib1 + (double)turistico1 + ppc1 + (1 / densidade1));
            superpoder2 = (float)((double)populacao2 + area2 + pib2 + (double)turistico2 + ppc2 + (1 / densidade2)); // testando se vai funcionar pra sair ali em baixo.

            // Agora vamos puxar os dados digitados na ordem que foi pedida... Colocando em ordem para que as duas cartas apareçam uma após a outra.
            // Requisição da primeira carta
                printf("\nCarta 1:\n");
                printf("Estado: %c\n", estado1);
                printf("Código: %s\n", cod1);  
                printf("Nome da Cidade: %s\n", cidade1);
                printf("População: %lu\n", populacao1);
                printf("Área: %.2f KM²\n", area1);
                printf("PIB: %.2f Bilhões\n", pib1 / 1000000000);
                printf("Número de Pontos Turísticos: %d\n", turistico1);
                printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
                printf("PIB per Capita: %.2f reais\n", ppc1);
                printf("Super Poder Carta 1: %.2f \n", superpoder1);

                // Requisição da Segunda carta

                    printf("\nCarta 2:\n");
                    printf("Estado: %c\n", estado2);
                    printf("Código: %s\n", cod2); 
                    printf("Nome da Cidade: %s\n", cidade2);
                    printf("População: %lu\n", populacao2);
                    printf("Área: %.2f KM²\n", area2);
                    printf("PIB: %.2f Bilhões\n", pib2 / 1000000000);
                    printf("Número de Pontos Turísticos: %d\n", turistico2);
                    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
                    printf("PIB per Capita: %.2f reais\n", ppc2);
                    printf("Super Poder Carta 2: %.2f \n", superpoder2);


                        //Comparação das cartas.
                        resultado = (populacao1 > populacao2);
                        
                        printf("\nComparação de Cartas:\n");             
                        printf("População: Carta %d venceu (%d)\n", 2 - resultado, resultado);

                        resultado = (area1 > area2);
                        printf("Área: Carta %d venceu (%d)\n", 2 - resultado, resultado);

                        resultado = (pib1 > pib2);
                        printf("PIB: Carta %d venceu (%d)\n", 2 - resultado, resultado);

                        resultado = (turistico1 > turistico2);
                        printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - resultado, resultado);

                        resultado = (densidade1 < densidade2);
                        printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - resultado, resultado);

                        resultado = (ppc1 > ppc2);
                        printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - resultado, resultado);

                        resultado = (superpoder1 > superpoder2);
                        printf("Super Poder: Carta %d venceu (%d)\n", 2 - resultado, resultado);
return 0;

}

// Fim???