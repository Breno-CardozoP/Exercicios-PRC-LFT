/*3. Faça um programa para entrar com um número e dizer se o mesmo é par ou ímpar.*/
#include <stdio.h>

int main()
{
    int numero;
    printf("insira o numero: ");
    scanf("%d",&numero);
    
    if(numero % 2==0){
        printf("Este numero é par.");
    }
    else{
        printf("Este numero é impar.");
    }

    return 0;
}
