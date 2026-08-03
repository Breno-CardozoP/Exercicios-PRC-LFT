
#include <stdio.h>

int main()
{
    int i=1,soma=0,num,media,numTermos=0;
    
    printf("insira os numeros e precione -99 para terminar: ");
    
    do{
       
        scanf("%d",&num);//inserir os numeros
        
        numTermos++;//quantidade que foi digitadada
        soma=soma+num;//soma
       
        if(num==-99){
            numTermos=numTermos-1;//não contabilizar o -99
            soma=soma+99;
        }
        
        media=soma/numTermos;//calcula da media
        
    }while(num!=-99);//terminar com -99
    
    printf("Média sendo %d.",media);

    

    return 0;
}
