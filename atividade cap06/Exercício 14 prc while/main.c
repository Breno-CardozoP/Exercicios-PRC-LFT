
#include <stdio.h>

int main()
{
    int num,soma=0,resultado,i=1,num2;
    
    printf("insira os numeros: ");
    scanf("%d",&num);//primeiro valor
    
    while(i<=num){//especicando o numero de valores restantes
        scanf("%d",&num2);
        soma=soma+num2;//soma
        
        i++;
    }
    resultado=soma+num;
    
    printf("resultado: %d",resultado);
    

    return 0;
}
