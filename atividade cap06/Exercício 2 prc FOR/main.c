
#include <stdio.h>

int main()
{
    int num,par=0,valor=0;//variaveis
    
    printf("insira o numero: ");
    scanf("%d",&num);
    
    for(;num>0;num/=10){//diminuir o numero dividindo por 10 para ler o ultimo algarismo e verificar paridade.
        
        valor=num%10;//pegar o ultimo numero
        
        if(soma%2==0){//soma dos pares
            par++;
        }
    }
   
    printf("total de pares: %d",par);

    return 0;
}
