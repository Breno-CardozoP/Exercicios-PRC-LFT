
#include <stdio.h>
#define TAN_MAX 10

int main()
{
    double vet1[TAN_MAX], vet2[TAN_MAX], vetCopia[TAN_MAX*2];
    int i;
    
    printf("digite %d valores para o vet1: \n",TAN_MAX);
    for(i=0;i<TAN_MAX;i++){
        printf("vet1[%d]: ",i);
        scanf("%1f",&vet1[i]);
    }
    
    printf("digite %d valores para o vet2: \n",TAN_MAX);
    for(i=0;i<TAN_MAX;i++){
        printf("vet2[%d]: ",i);
        scanf("%1f",&vet2[i]);
    }
     
     //copiando o vet1 para a primeira metade
     for(i=0;i<TAN_MAX;i++){
         vetCopia[i]=vet1[i];
         
     }
      //copiando o vet2 para a primeira metade
     for(i=0;i<TAN_MAX;i++){
         vetCopia[i+TAN_MAX]=vet2[i];
     }
         
         //exibindo vetCopia completo
    printf("\nvetor copia [vet]*vet2: \n");
    for(i=0;i<TAN_MAX*2;i++){
        printf("%.2f",vetCopia[i]);
    }

    return 0;
}










