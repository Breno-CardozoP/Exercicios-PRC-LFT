
#include <stdio.h>

int main()
{
    int soma=0,num;
    
    printf("insira os numeros e digite 0 para encerrar: ");
    
    do{
        scanf("%d",&num);
        
        soma=soma+num;
        
    }while(num!=0);

printf("resultado da soma: %d",soma);
    return 0;
}
