
#include <stdio.h>

int main()
{
    int i,soma=0,num,candidato1=0,candidato2=0;
    
    printf("precione 999 para finalizar.");
    printf("\nvote 1 para José e 2 para Maria: ");
    
    do{
        scanf("%d",&num);
        
        if(num==1){
            candidato1++;//numero de votos
        }
        else if(num==2){
            candidato2++;//numero de votos
        }
       
        
    }while(num!=999);
    
    printf("total de votos: José(%d) e Maria(%d)",candidato1,candidato2);//total
    
    if(candidato1>candidato2){
            printf("\nJosé é o vencedor.");
        }
        else if(candidato2>candidato1){
            printf("\nMaria é a vencedora.");
        }

    return 0;
}
