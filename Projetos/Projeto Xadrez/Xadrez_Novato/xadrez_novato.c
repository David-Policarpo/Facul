#include <stdio.h>
int main(){
    int torre = 1, bispo = 1, rainha = 1, cavalo = 1, cavalo2 = 3;



    printf("\nMovimento da Torre!\n"); // Movimentar 5 casas para a Direita com a Torre
    for (torre; torre <= 5 ; torre++)
    {
            printf("%d Direita\n", torre); // Adicionei o número da variável pra ficar mais fácil pra ver o resultado
    }


    printf("\nMovimento do Bispo!\n"); // Movimentar cinco casas na Diagonaal para cima e Direita
    while (bispo <= 5)
    {
        printf("%d Cima, Direita\n", bispo);

        bispo++;
    }
    
    printf("\nMovimento da Rainha!\n"); // Movimentar oito casas para a esquerda
    do
    {
        printf("%d Esquerda\n", rainha);
        rainha++;
    } while (rainha <= 8);


    printf("\nMovimento do Cavalo!\n"); // Movimentar 2 casas para Baixo e uma a Esquerda com o Cavalo.
    for (; cavalo < 3; cavalo++) 
    {
        printf("%d Baixo\n", cavalo);

       while (cavalo == 2 && cavalo2 == 3) // Tive que mudar o cavalo2 para 3 para ficar com a numeração na ordem certa.
       {
            printf("%d Esquerda\n", cavalo2);
            cavalo2++; // Para o while não rodar novamente
        }
    }
    
            
            
    

    
    

   
    


return 0;

}