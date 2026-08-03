
#include <stdio.h>

int main()
{
    int soma=0,num,divisores=0;
    
    printf("insira os numeros(max15) ou aperte 0 para sair: ");
    
    do{
        scanf("%d",&num);
        
        soma++;
        
        if(num%5==0){
            
            divisores++;//contabiliza os divisores
            
        }
        
        if(num==0){
            divisores--;//não conta o 0
        }
        
        
    }while(num!=0 && soma<15);//finaliza com o max e com 0
    
    printf("apresenta %d divisores de cinco.",divisores);
    

    return 0;
}
