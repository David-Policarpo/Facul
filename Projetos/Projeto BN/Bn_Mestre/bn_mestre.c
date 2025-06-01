#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10
int main(){

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro [LINHAS][COLUNAS] = {0}; // Iniciado o tabuleiro com todos os valores como 0
    int cone[5][5],cruz [5][5], octaedro[5][5]; // Os três poderes com matriz 5x5 para ficar mais simétrico.

    //Espaço para pensar nos poderes.

    //Cruz
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        { 
            cruz[i][j] = (i == 2 || j == 2) ? 1 : 0;
        }
        
    }

    // Cone
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cone[i][j] = (i >= j - 2 && i >= 2 - j);
        }
        
    }

    // Octaedro
    for (int i = 0; i < 5; i++) 
    {
        for (int j = 0; j < 5; j++) {
        int inveri = (i - 2 < 0) ? -(i - 2) : (i - 2);
        int inverj = (j - 2 < 0) ? -(j - 2) : (j - 2);
        octaedro[i][j] = (inveri + inverj <= 2) ? 1 : 0;
    }
    }
    
    int origemL_cone = 2, origemC_cone = 2; // Testando as posições para melhor se encaixar no tabuleiro 10x10
    int origemL_cruz = 4, origemC_cruz = 6; // Colocando a cruz encostada do lado direito
    int origemL_octa = 7, origemC_octa = 2; // Tive que colocar embaixo do Cone porque não dava em outro lugar

    // Cone == Número 1
    for (int i = 0; i < 5; i++) 
    {
    for (int j = 0; j < 5; j++) 
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

    // Cruz == Número 2
    for (int i = 0; i < 5; i++) 
    {
    for (int j = 0; j < 5; j++) 
    {
        if (cruz[i][j] == 1) 
        {
            int lin = origemL_cruz + (i - 1);
            int col = origemC_cruz + (j - 1);
            if (lin >= 0 && lin < LINHAS && col >= 0 && col < COLUNAS) 
            {
                tabuleiro[lin][col] = 2;
                }
            }
        }
    }

    //  Octaedro == Numero 3
    for (int i = 0; i < 5; i++) 
    {
    for (int j = 0; j < 5; j++) 
    {
        if (octaedro[i][j] == 1) 
        {
            int lin = origemL_octa + (i - 2);
            int col = origemC_octa + (j - 2);
            if (lin >= 0 && lin < LINHAS && col >= 0 && col < COLUNAS)  // Pedi ajuda aos universitários.
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
