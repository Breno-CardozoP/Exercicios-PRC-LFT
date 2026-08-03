/*1) Escreva um programa C que receba 10 valores inteiros, armazene em uma estrutura homogênea e imprima apenas os valores ímpares positivos.*/
#include <stdio.h>
#define inteiro 10//deinição de uma constante

int main()
{
    int num,impar[inteiro],Nimpar=0;
    int i=0;
    
    for(;i<inteiro;i++){
        printf("insira o %d* valor: ",i+1);
        scanf("%d",&num);
        
         if(num % 2 != 0){//encontrar os impares
             
             impar[Nimpar]=num;//quardar os valores
             Nimpar++;//quantidade de impares
             
             }
             
    }
    
    printf("valores impares:");
    
    for(i=0;i<Nimpar;i++){//exibindo os valores
        printf(" %d",impar[i]);
    }
   
   printf("\n");
    
    

    return 0;
}
