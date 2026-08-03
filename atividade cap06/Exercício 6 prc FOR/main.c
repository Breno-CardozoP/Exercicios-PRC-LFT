
#include <stdio.h>

int main()
{
    int num,i=0;
    
    printf("insira um numero entre 1 e 30:");
    scanf("%d",&num);
    
    if(num<=30){
    for(;i<num;i++){
        
        printf("*");
        
    }
    }
    else{
        printf("não é um numero valido.");
    }

    return 0;
}
