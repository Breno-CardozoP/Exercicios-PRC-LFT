
#include <stdio.h>

int main()
{
    int i=1,soma=0,num;
    
    while(i<=25){
        printf("insira os numeros: ");
        scanf("%d",&num);
        
        if(soma<num){
            soma=num;
            
        }
        
        
        i++;
        
    }
    printf("resultado: %d",soma);

    return 0;
}
