/*15) Escreva um programa C que receba no máximo 35 valores inteiros e imprima os valores maiores que 15 em ordem crescente.
Considere, que ao digitar o valor -999, o
usuário deseja encerrar a sequência.*/
#include <stdio.h>
#define TAMANHO 5
int main()
{
    int valores[TAMANHO],maiores[TAMANHO],menor,indice;
    int i=0,j=0,contador=0;
    
    printf("-----insira os valores(max:35) e insira -999 para encerrar-----\n");
    
     for(;i<TAMANHO;i++){
        printf("insira o %d* valor: ",i+1);//preenchendo o 1* vetor e o segundo com os maiores que 15
        scanf("%d",&valores[i]);
        if(valores[i]==-999){
            break;
        }
        if(valores[i]>15){
            maiores[contador]=valores[i];
            contador++;
        }
    }
    
    for(i=0;i<contador;i++){// identificar o menor e ordena-los de forma crescente
        menor=maiores[i];
        indice=i;
        for(j=i;j<contador;j++){
            if(maiores[j]<menor){
                menor=maiores[j];
                indice=j;
            }
        }
        maiores[indice]=maiores[i];
        maiores[i]=menor;
    }
    
    printf("vetor final:");
    for(i=0;i<contador;i++){
        printf(" %d",maiores[i]);
    }
   

    return 0;
}
