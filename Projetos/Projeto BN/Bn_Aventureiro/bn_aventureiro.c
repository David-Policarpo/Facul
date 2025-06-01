#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10
int main(){

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro [LINHAS][COLUNAS] = {0}; // Iniciado o tabuleiro com todos os valores como 0
    int navio1 [3] = {3, 3, 3}; // Horizontal
    int navio2 [3] = {3, 3, 3}; // Vertical
    int navio3 [3] = {3, 3, 3}; // Diagonal 1
    int navio4 [3] = {3, 3, 3}; // Diagonal 2

    int sobreposicao; // variável auxiliar para checar sobreposição

    // Navio Horizontal
    int linhaH = 2; // 3 Linha
    int colunaH = 4; // 5 coluna
    if (colunaH + 3 <= COLUNAS) {
        sobreposicao = 0;
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linhaH][colunaH + i] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        if (!sobreposicao) {
            for (int i = 0; i < 3; i++) {
                tabuleiro[linhaH][colunaH + i] = navio1[i]; // Ocupando C5, C6 e C7
            }
        } else {
            printf("Erro: Navio horizontal sobreposto!\n");
        }
    } else {
        printf("Navio horizontal fora do tabuleiro!\n");
    }

    // Navio Vertical
    int linhaV = 6;
    int colunaV = 2;
    if (linhaV + 3 <= LINHAS) {  // Verifica se o navio cabe na vertical
        sobreposicao = 0;
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linhaV + i][colunaV] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        if (!sobreposicao) {
            for (int i = 0; i < 3; i++) {
                tabuleiro[linhaV + i][colunaV] = navio2[i];
            }
        } else {
            printf("Erro: Navio vertical sobreposto!\n");
        }
    } else {
        printf("Navio vertical fora do tabuleiro!\n");
    }

    // Navio Diagonal 1
    int  linhaD = 9; // Imprimir na ultima linha J
    int colunaD = 9; // Imprimir na ultima coluna 10
    if (linhaD - 2 >= 0 && colunaD - 2 >= 0) {
        sobreposicao = 0;
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linhaD - i][colunaD - i] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        if (!sobreposicao) {
            for (int i = 0; i < 3; i++) {
                tabuleiro[linhaD - i][colunaD - i] = navio3[i]; // Ocupando J10, I9 e H8
            }
        } else {
            printf("Erro: Navio diagonal 1 sobreposto!\n");
        }
    } else {
        printf("Navio diagonal 1 fora do tabuleiro!\n");
    }

    // Navio Diagonal 2
    int  linhaD2 = 0; // Imprimir na primeira linha A
    int colunaD2 = 2; // imprimir na primeira Coluna 3
    if (linhaD2 + 2 < LINHAS && colunaD2 - 2 >= 0) {
        sobreposicao = 0;
        for (int i = 0; i < 3; i++)  {
            if (tabuleiro[linhaD2 + i][colunaD2 - i] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        if (!sobreposicao) {
            for (int i = 0; i < 3; i++)  {
                tabuleiro[linhaD2 + i][colunaD2 - i] = navio4[i]; // Ocupando A3, B2 e C1
            }
        } else {
            printf("Erro: Navio diagonal 2 sobreposto!\n");
        }
    } else {
        printf("Navio diagonal 2 fora do tabuleiro!\n");
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
