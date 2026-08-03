/*13) Escreva um programa C que receba 10 valores inteiros e 
imprima apenas os valores ímpares positivos em ordem decrescente*/
#include <stdio.h>
#define TAMANHO 10
int main()
{
    int valores[TAMANHO],impares[TAMANHO],num;
    int i=0,indice;
    
    printf("-----insira no maximo 10 valores inteiros-----");
    for(;i<maximo;i++){
        printf("\ninsira o %d* valor: ",i+1);
        scanf("%d",&valores[i]);
        if(valores[i] % 2 != 0 && valores[i]>0){
            impares[contador]=valores[i];
            contador++;
        }
    
for(i=0;i<contador;i++){
        num=impares[i];
        indice=i;
        for(j=i;j<contador;j++){
            if(impares[j] > num){
                num = valores[j];
                indice = j;
            }
        }
        impares[indice] = impares[i];
        impares[i] = num;
    }
    
    printf("vetor final:\n");
    for(i=0;i<contador;i++){
        printf(" %d",impares[i]);
    }
    return 0;
}
