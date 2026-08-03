/*2) Escreva um programa C que leia uma série de 10 números inteiros, 
armazene em uma estrutura homogênea e indique qual o menor número da série e quantas vezes o
mesmo ocorre.*/
#include <stdio.h>
#define inteiro 5

int main()
{
    int num,menor=0,ordem[inteiro],total=0;
    int i=0;
    
    for(;i<inteiro;i++){
        printf("insira o %d* valor: ",i+1);
        scanf("%d",&num);
        
        if(i==0){//no primeiro ciclo o 'num' sera o menor
            menor=num;
            ordem[total]=num;
            total=1;
        }
        
        if(menor>num){//identificar o menor numero e armazena-lo
            menor=num;
            ordem[total]=num;
            total=1;
        }
        else if(menor==num){//contador do menor numero
            total++;
        }
        
    }
    printf("\nO menor numero é: %d",menor);
    printf(" aparecendo %d vezes",total);
    
    return 0;
}
