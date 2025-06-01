#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10
int main(){

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro [LINHAS][COLUNAS] = {0}; // Iniciado o tabuleiro com todos os valores como 0
    int cone[3][3],cruz [3][3], octaedro[3][3];

    //Espaço para pensar nos poderes.
    //cruz
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        { 
            cruz[i][j] = (i == 2 || j == 2) ? 1 : 0;
        }
        
    }

    // cone
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cone[i][j] = (i >= j - 2 && i >= 2 - j);
        }
        
    }

    //octaedro
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) {
        int inveri = (i - 2 < 0) ? -(i - 2) : (i - 2);
        int inverj = (j - 2 < 0) ? -(j - 2) : (j - 2);
        octaedro[i][j] = (inveri + inverj <= 2) ? 1 : 0;
    }
    }
    
    int origemL_cone = 2, origemC_cone = 2;
    int origemL_cruz = 3, origemC_cruz = 7;
    int origemL_octa = 7, origemC_octa = 4;

    // aplicar cone
    for (int i = 0; i < 3; i++) 
    {
    for (int j = 0; j < 3; j++) 
    {
        if (cone[i][j] == 1) 
        {
            int lin = origemL_cone + (i - 2);
            int col = origemC_cone + (j - 2);
            if (lin >= 0 && lin < LINHAS && col >= 0 && col < COLUNAS) 
            {
                tabuleiro[lin][col] = 1;
                }
            }
        }
    }

    // aplicar cruz
    for (int i = 0; i < 3; i++) 
    {
    for (int j = 0; j < 3; j++) 
    {
        if (cruz[i][j] == 1) 
        {
            int lin = origemL_cruz + (i - 2);
            int col = origemC_cruz + (j - 2);
            if (lin >= 0 && lin < LINHAS && col >= 0 && col < COLUNAS) 
            {
                tabuleiro[lin][col] = 2;
                }
            }
        }
    }

    // aplicar octaedro
    for (int i = 0; i < 3; i++) 
    {
    for (int j = 0; j < 3; j++) 
    {
        if (octaedro[i][j] == 1) 
        {
            int lin = origemL_octa + (i - 2);
            int col = origemC_octa + (j - 2);
            if (lin >= 0 && lin < LINHAS && col >= 0 && col < COLUNAS) 
            {
                tabuleiro[lin][col] = 3;
                }
            }
        }
    }   



    printf("TABULEIRO BATALHA NAVAL\n");
    printf(" "); // Espaço para os números ficarem certos em cima das casas.

    for (int i = 1; i <= COLUNAS; i++) // Iniciado em 1 para não ser impresso como 0 na numeração das colunas
    {
       printf(" %d", i);
    }

    printf("\n");

    // Agora vem a parte complicada, impressão do tabuleiro.
    for (int l = 0; l < LINHAS; l++) // l == linhas
    {
        printf("%c", linha[l]);
        for (int c = 0; c < COLUNAS; c++) // c == colunas
        {
            printf(" %d", tabuleiro[l][c]);
        }
        printf("\n");
    }

    

    return 0;
}
