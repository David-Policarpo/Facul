#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int escolhaComputador, escolhaJogador;
    srand(time(0));


    printf("Jogo de Jokenpô\n");
    printf("Escolha uma opção:\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand () % 3 + 1;


    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra - ");
        break;

    case 2:
        printf("Jogador: Papel - ");
        break;
        
    case 3:
        printf("Jogador: Tesoura - ");
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

        switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Pedra\n");
        break;

    case 2:
        printf("Computador: Papel\n");
        break;
        
    case 3:
        printf("Computador: Tesoura\n");
        break;


    }

    if (escolhaComputador == escolhaJogador)
    {
        printf("### O jogo Empatou! ###\n");
    } else if ((escolhaJogador == 1) && (escolhaComputador == 3) || (escolhaJogador == 2) && (escolhaComputador == 1) || (escolhaJogador == 3) && (escolhaComputador == 2)) 
    
    {
        printf("### Parabéns você ganhou! ###\n");
    } else {
        printf("### Você perdeu! ###\n");
    }

    
return 0;
}