#include <stdio.h>
int main(){

    int idade = 12;

    printf(idade<18?"Menor de idade\n":"Maior de idade\n");

    if (idade<18){ printf("Menor de idade\n");}else{printf("Maior de idade\n");}

     if (idade<18){ printf("Menor de idade\n");}else if(idade>=18) {printf("Maior de idade\n");}

     switch (idade)
     {
     case <18:
     printf("Menor de idade"); break;
     case >=18:
     printf("Maior de idade");}