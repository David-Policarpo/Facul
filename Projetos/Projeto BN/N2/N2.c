#include <stdio.h>
int main(){
int matriz[3][3];

for (int i = 0; i < 3; i++)
{
        for (int j = 0; j < 3; j++)
{

            matriz[i][j] = i + j;
            printf("Matriz [%d][%d] = %d\n", i, j, matriz[i][j]);
}

}


}