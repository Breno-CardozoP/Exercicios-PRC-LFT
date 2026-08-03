/*14) Escreva um programa C que receba 30 valores inteiros e imprima apenas os cinco maiores números pares. 
CUIDADO: Existe a possibilidade da quantidade de números
pares ser menor do que 5.*/
#include <stdio.h>
#define TAMANHO 30

int main()
{
    int valores[TAMANHO],pares[TAMANHO],maior,indice;
    int i=0,contador=0,j=0,limite=5;
    
    for(;i<TAMANHO;i++){
        printf("insira o %d* valor: ",i+1);//preenchendo o 1* vetor e o segundo com apenas pares
        scanf("%d",&valores[i]);
        if(valores[i]%2==0){
            pares[contador]=valores[i];
            contador++;
        }
    }
    
    for(i=0;i<contador;i++){// identificar os maiores e ordena-los
        maior=0;
        indice=0;
        for(j=i;j<contador;j++){
            if(pares[j]>maior){
                maior=pares[j];
                indice=j;
            }
        }
        pares[indice]=pares[i];
        pares[i]=maior;
    }
    
    
     if(contador<limite){//caso tenha menos de 5 pares
            limite=contador;
        }
    
    
    printf("vetor final:");
    for(i=0;i<limite;i++){
        printf(" %d",pares[i]);
    }
   
    return 0;
}
