#include <stdio.h>
int main(){
    int numerosinal = 3000000000;
    unsigned int numerosemsinal = 3000000000;
    int numeronormal = 214748364;
    long int numerogrande = 2147483647;
    
   
    unsigned long int numerouns = 3141592651239793;
    long long int numerolongl = 3141592651239793;
    int numeroprecisos = 3141592651239793;

    printf("Numero com sinal: %i\n", numerosinal);
    printf("Numero sem sinal: %u\n", numerosemsinal);

        printf("Numero regular: %d\n", numeronormal);
        printf("Numero Grande: %li \n", numerogrande);

           
            printf("Numero unsigned long int: %ld\n", numerouns);
            printf("Numero long long int: %lli\n", numerolongl);
            printf("Numero int: %d\n", numeroprecisos);
             
    return 0;
}