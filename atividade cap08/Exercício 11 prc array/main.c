/*11) Escreva um programa C que receba 20 notas de provas e um valor N, imprimindo a média das N maiores notas.*/
#include <stdio.h>
#define MAXIMO 5

int main()
{
    int notas[MAXIMO],N,maior,local;
    int i=0,j=0,soma=0;
    float media;
    
    printf("-----insira as notas e a quantidade das maiores notas para a média-----");
    
    for(;i<MAXIMO;i++){
        printf("\ninsira a %d* nota: ",i+1);//preenchendo o vetor
        scanf("%d",&notas[i]);
    }
    
    printf("\ninsira a quantidade de notas desejadas para a media: ");
    scanf("%d",&N);
    
    //looping para criar a ordem decrescente
    for(i = 0; i < MAXIMO; i++){
        maior=0;
        local=0;
        for(j = i; j < MAXIMO; j++){
            if(maior<notas[j]){//achando o maior valor
                maior = notas[j];
                local = j;//sua posição
            }
        }
        notas[local] = notas[i];//ordenando-os
        notas[i] = maior;
    }
    
    for(i = 0;i < N; i++){//soma dos valores para o calculo da media
        soma += notas[i];
    }
    
    media=(float)soma/N;//calculo da media forçando o para ser float
    
    printf("\nA média é igual a: %.1f",media);

    return 0;
}










