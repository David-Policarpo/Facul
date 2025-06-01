#include <stdio.h>
int main(){

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro [10][10] = {0}; // Iniciado o tabuleiro com todos os valores como 0
    int navio1 [3] = {3, 3, 3}; // Horizontal
    int navio2 [3] = {3, 3, 3}; // Vertical


    // Navio Horizontal
    int linhaH = 2; // 3 Linha
    int colunaH = 4; // 5 coluna
    for (int i = 0; i < 3; i++) {
    tabuleiro[linhaH][colunaH + i] = navio1[i];
    }   


    // Navio Vertical
    int linhaV = 6; // 7 linha
    int colunaV = 2; // 3 coluna
    for (int i = 0; i < 3; i++)
    {
       tabuleiro[linhaV + i][colunaV] = navio2[i];
    }
    

    printf("TABULEIRO BATALHA NAVAL\n");
    printf(" "); // Espaço para os números ficarem certos em cima das casas.
    for (int i = 1; i <= 10; i++) // Iniciado em 1 para não ser impresso como 0 na numeração das colunas
    {
       printf(" %d", i);
    }

    printf("\n");

    // Agora vem a parte complicada, impressão do tabuleiro.
    
        for (int l = 0; l < 10; l++) // l == linhas
        {
        
            printf("%c", linha[l]);

        for (int c = 0; c < 10; c++) // c == colunas
        {

        printf(" %d", tabuleiro[l][c]);
        }

        printf("\n");
   
        }


        printf("Teste %d", tabuleiro[2][4]);
    return 0;
}
 //Coluna 5 = indice 6
 //Linha C = indice 2