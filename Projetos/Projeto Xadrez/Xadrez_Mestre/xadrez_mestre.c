#include <stdio.h>

void movimentoTorre(int torre) {
    if (torre < 6)
    {
       printf("Direita\n");
       movimentoTorre(torre + 1);
    }
    
} 


void movimentoBispo(int bispo){
    if (bispo > 6) return;
    
    for (int i = 0; i < 5; i++)
    {
        printf("Cima\n");

        int j = 0;
        while (j < 1)
        {
            printf("Direita\n");
            j++;
        }
        
    }
    
}

void movimentoRainha(int rainha){
    if (rainha <= 8) {
    printf("Esquerda\n");
    movimentoRainha(rainha + 1);
    }
    }

    void movimentoCavalo(int cavalo){
    
    for (int i = 0; i < 2; i++){
    
       printf("Cima\n");
    

    for (int j = 1; j <= 2; j++){
    if (j > 1) {
        break;
    }
       if (i == 0)
       {
        continue;
       }
       printf("Direita\n");
    }
  }
}

       
       
       
    
    


int main(){
   
    printf("\nMovimento da Torre!\n"); // Movimentar 5 casas para a Direita com a Torre
    movimentoTorre(1);


    printf("\nMovimento do Bispo!\n"); // Movimentar cinco casas na Diagonaal para cima e Direita
    movimentoBispo(1);
    
    printf("\nMovimento da Rainha!\n"); // Movimentar oito casas para a esquerda
    movimentoRainha(1);


    printf("\nMovimento do Cavalo!\n"); // Movimentar 2 casas para Baixo e uma a Esquerda com o Cavalo.
    movimentoCavalo(1);
     
    


return 0;

}