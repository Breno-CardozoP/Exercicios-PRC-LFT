/*8) Faça um programa C que receba no máximo 15 valores inteiros e mostre a média aritmética e quantos valores estão acima da média.*/
#include <stdio.h>
#define maximo 15
int main()
{
    float num,acima[maximo],media,soma=0;//variaveis
    int i=0,contador=0;
    
    printf("-----insira no maximo 15 valores inteiros-----");
    
    for(;i<maximo;i++){
        printf("\n\ninsira o %d* valor: ",i+1);//preenchendo o vetor e encontrando a soma para o calculo da media
        scanf("%f",&num);
        acima[i]=num;
        soma+=num;
    }
    
    media=soma/maximo;//calculo da media
    
    for(i=0;i<maximo;i++){//identificar o quantidade de valores
        if(acima[i]>media){
            contador++;
        }
    }
    
    printf("a media aritmética é: %.1f",media);
    printf("\npossui %d valores acima da média",contador);//exibição
   
    
    
    return 0;
}

