#include <stdio.h>
int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura:");
    scanf("%f", &temperatura);
    printf("Entre com a umidade:");
    scanf("%f", &umidade);
    printf("Entre com o Estoque:");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("A temperatura está alta.\n");
    } else { 
        printf("A temperatura está dentro dos Parâmetros.\n");
    }

    if(umidade > 50){
        printf("Umidade está muito elevada.\n");
    } else {
        printf("Umidade está em níveis normais.\n");
    }

    if(estoque < estoqueMinimo){
        printf("Estoque abaixo do mínimo.\n");
    } else {
            printf("Estoque normal.\n");
    }
        
    
    

}