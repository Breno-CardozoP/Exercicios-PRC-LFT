
#include <stdio.h>

int main()
{
    int i=1,soma=1,num,resultado;
    
    printf("insira o numero: ");
    scanf("%d",&num);
    
    while(i<=num){
        
        soma=soma*i;
        i++;
    }
    
    printf("resultado: %d",soma);

    return 0;
}
