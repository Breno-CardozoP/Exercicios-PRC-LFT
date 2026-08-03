
#include <stdio.h>

int main()
{
    int maior=0,num;
    
    printf("insira os numeros e digite -999 para encerrar: ");
    
    do{
        scanf("%d",&num);
        
        if(num>maior){//achar o maior
            maior=num;
        }
        
        
    }while(num!=-999);
    
    printf("O maior numero é: %d",maior);

    return 0;
}
