
#include <stdio.h>

int main()
{
    int i=1,par=0,num,impar=0;
    
    printf("insira os numeros e precione 0 para terminar: ");
    
    do{
       
        scanf("%d",&num);//inserir os numeros
        
        if(num%2==0){
            par++;//contar os pares
           
        }
        else{
            impar++;//contar os impares
            
        }
        if(num==0){//não contar o 0 
            
            par--;
        }
        
    }while(num!=0);//terminar com 0
    
    printf("apresenta %d numeros pares e %d numeros impares.",par,impar);

    

    return 0;
}
