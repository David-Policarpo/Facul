#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int numJogador, numComputador, resultado;
    char tipoComparacao;

    // Gerar Número Aleatório.
    srand(time(0));
    numComputador = rand() % 100 + 1;

    //Início do jogo.
    printf("Bem vindo ao Jogo do Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparação: ");
    scanf("%c", &tipoComparacao);

    printf("Escolha seu número entre 1 e 100: ");
    scanf("%d", &numJogador);

      
    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção Maior!\n");
        resultado = numJogador > numComputador ? 1 : 0;
        
        
        break;

    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor!\n");
        resultado = numJogador < numComputador ? 1 : 0;

        break;

    case 'I':
    case 'i':
        printf("Você escolheu a opção Igual!\n");
        resultado = numJogador == numComputador ? 1 : 0;

        break;
    
    default:
    printf("Opção Inválida!\n");
        break;
    }

    printf("O número do computador é %d e o do Jogador é %d\n", numComputador, numJogador);

    if (resultado == 1)
    {
        printf("Parabéns você venceu!\n");
    } else {
        printf("Infelizmente você Perdeu!\n");
    }
    
}