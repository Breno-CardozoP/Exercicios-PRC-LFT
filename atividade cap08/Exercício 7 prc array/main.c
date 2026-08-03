/*7) Faça um programa C para ler no máximo 30 valores inteiros e imprimir aqueles que são divisíveis por 7. 
Considere que o número —999 encerra a sequência.*/
#include <stdio.h>
#define maximo 30
int main()
{
    int num,divisíveis[maximo];//variaveis
    int i=0,contador=0;
    
     printf("-----insira no maximo 30 valores inteiros e digite -999 para finalizar-----");
    
    for(;i<maximo;i++){
        printf("\n\ninsira o %d* valor: ",i+1);
        scanf("%d",&num);
     
        if(num==-999){//encerrar sequência
            break;
        }
        if(num%7==0){//identificar os divisíveis por 7 e utiliza-los para preencher o vetor
            
            divisíveis[contador]=num;
            contador++;
        }
    }
    
    if(cotador==0){//caso não tenho divisiveis
      printf("nenhum numero é divisivel por 7.");
       }
        else{
            for(i=0;i<contador;i++){
             printf("Os valores divisíveis por 7 são: %d",divisíveis[i]);//exibição
            }
        }
    
    return 0;
}
