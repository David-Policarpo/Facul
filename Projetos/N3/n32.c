#include <stdio.h>
int main(){

    int numero1 = 1;
    int resultado;

     
    printf("Antes incremento: %d \n", numero1);
    
    resultado = numero1++;
    
    printf("Após Pós-incremento - Número 1: %d - Resultado: %d \n", numero1, resultado);

    resultado = numero1--;

      printf("Após pré encremento - Número 1: %d - Resultado: %d \n", numero1, resultado);
    

    

return 0;
}