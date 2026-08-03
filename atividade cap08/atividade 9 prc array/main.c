/*9) Escreva um programa C que receba 20 valores inteiros 
e imprima os valores em ordem decrescente.*/
#include <stdio.h>
#define maximo 20

int main()
{
    int num, indice,valores[maximo];
    int i=0,j=0;
    
    printf("-----insira no maximo 20 valores inteiros-----");
    for(;i<maximo;i++){
        printf("\ninsira o %d* valor: ",i+1);
        scanf("%d",&valores[i]);
    }
    
    for(i=0;i<maximo;i++){
        num=0;
        indice=0;
        for(j=i;j<maximo;j++){
            if(valores[j]>num){
                num = valores[j];
                indice = j;
            }
        }
        valores[indice] = valores[i];
        valores[i] = num;
    }
    
    printf("vetor final");
    
    for(i=0;i<maximo;i++){
        printf(" %d",valores[i]);
    }

    return 0;
}
