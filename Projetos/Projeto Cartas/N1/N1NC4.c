#include <stdio.h>
int main(){

    int idade;
    int quantidade;
    float altura;
    double peso;
    char letra;
    char nome[20];

    printf("Digite sua Idade!\n");
    scanf("%i", &idade);
    printf ("Digite sua Altura!\n");
    scanf("%f", &altura);
    printf("Você além de velho... %i Anos. \n", idade);
    printf("Você é baixo... %.2f de Altura.\n", altura);

}