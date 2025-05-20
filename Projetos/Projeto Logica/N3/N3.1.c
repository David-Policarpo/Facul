#include <stdio.h>
int main(){
    int nota;

    printf("Digite a sua nota: ");
    scanf("%d", &nota);

    if (nota >= 90)
    { printf ("A sua nota é A!\n");
    }else if (nota >= 80 && nota < 89){
        printf ("A sua nota é B!\n");
    }else if (nota >= 70 && nota < 79){
        printf ("A sua nota é C!\n");
    }else if (nota >= 60 && nota < 69){
        printf ("A sua nota é D!\n");
    }else if (nota >= 50 && nota < 59){
        printf ("A sua nota é F!\n");
    }else {
        printf("A sua nota é F!\n");
    }
    
}