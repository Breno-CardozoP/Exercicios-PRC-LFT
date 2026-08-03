
#include <stdio.h>

int main()
{
    int x=20000,total,i=0;//atribuição de variavel
    
    for(;i<=10;i++){//calculo
        x-=x*0.05;
        total=x;
    }
     printf("População total: %d",total);

    return 0;
}
