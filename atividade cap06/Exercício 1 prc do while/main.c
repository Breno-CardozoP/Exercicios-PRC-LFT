
#include <stdio.h>

int main()
{
    int num,i=1,soma=0,rep;
    
     printf("insira os numeros e precione -1 para terminar: ");
    
    do{
       
        scanf("%d",&num);//inserir os numeros
        
        soma++;//quantidade que foi digitadada
        
        if(num==-1){
            soma=soma-1;//não contabilizar o -1
        }
        
        
    }while(num!=-1);//terminar com -1
    
    printf("foram digitados %d numeros.",soma);

    return 0;
}
