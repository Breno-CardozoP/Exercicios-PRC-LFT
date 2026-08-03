/*4) Faça um programa C para ler um vetor com 20 elementos. 
Modifique o vetor de modo que o primeiro elemento passe para a última posição, e desloque todos os outros
elementos uma posição para a esquerda. Imprima depois o vetor.
Exemplo:
Antes: 12 14 02 07 05 00 10 19 34 52 26 12 53 78 56 32 33 45 44 18
Depois: 14 02 07 05 00 10 19 34 52 26 12 53 78 56 32 33 45 44 18 12*/
#include <stdio.h>

int main()
{
    int vetor[20],primeiro;
    int i=0;
    
    for(;i<20;i++){
        printf("insira o %d* valor: ",i+1);
        scanf("%d",&vetor[i]);
        
        if(i==0){
            primeiro=vetor[i];//salvar o primeiro valor
        }
    }
    
    for(i = 0; i < 19; i++){//deslocar para a esquerda,sem o primeiro valor
        vetor[i] = vetor[i + 1];
    }
    
    vetor[i]=primeiro;//colocar novamente o primeiro valor
    
    printf("vetor final:");
    
    for(i=0;i<20;i++){
        printf("\n %d",vetor[i]);//exibição
    }

    return 0;
}
