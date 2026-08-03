/*12) Escreva um programa C que receba 35 valores inteiros e imprima os valores maiores que 15 em ordem crescente.*/
#include <stdio.h>
#define TAMANHO 5
int main()
{
    int valores[TAMANHO],posição_K,maiores[TAMANHO],menor,posição_j;
    int i=0,j=0,k=0,contador=0;
    
    for(;i<TAMANHO;i++){
    printf("insira o %d* valore\n",i+1);//preenchendo o vetor incial
    scanf("%d",&valores[i]);
    }
   
   for(k=0;k<TAMANHO;k++){//preencehndo o novo vetor com valores maiores que 15
        if(valores[k]>15){
            maiores[contador] = valores[k];
            contador++;
        }
    }
    
    //ordenando de forma crescente
    for(i=0;i<contador;i++){
        menor = maiores[i];
        posição_j = i;
        if(i==0){
            menor = maiores[i];//no primeiro o ciclo o primeiro valor é o menor
        }
        
        for(j=i;j<contador;j++){
            if(menor > maiores[j]){//achando o menor valor
                menor = maiores[j];
                posição_j = j;
            }
        }
        maiores[posição_j] = maiores[i];//ordenando
        maiores[i] = menor;
    }
    
    printf("-----vetor final-----\n");
   for(i=0;i<contador;i++){//imprimir
       printf(" %d",maiores[i]);
   }
    return 0;
}
