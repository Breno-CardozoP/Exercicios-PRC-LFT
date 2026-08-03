/*7. Escreva um programa que leia 3 números inteiros e mostre o maior deles.*/
#include <stdio.h>

int main()
{
    int num1,num2,num3,numMaior;
    
    printf("insira 3 números: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    numMaior=num1;
    if(num2>numMaior){
        numMaior=num2;
    }
    if(num3>numMaior){
        numMaior=num3;
    }
    printf("\no maior numero é: %d",numMaior);

    return 0;
}
