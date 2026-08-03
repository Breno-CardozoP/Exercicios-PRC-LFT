/*1. Faça um programa para ler 2 valores e imprimir “EM ORDEM” caso o primeiro valor seja menor que o segundo e “FORA DE  ORDEM”, caso contrário.  
*/
#include <stdio.h>

int main()
{
int A,B;
    printf("insira dois numeros: ");
    scanf("%d%d",&A,&B);
    
    if(A<B){
        printf("%d,",A);
        printf("%d",B);
    }
    else{
         printf("%d,",B);
         printf("%d",A);
    }

    return 0;
}
