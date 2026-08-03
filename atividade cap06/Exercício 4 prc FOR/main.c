
#include <stdio.h>

int main()
{
    int total,valor=1000,bonus=100,i=1;
    
    for(;i<=10;i++){
        valor+=valor*0.15;
        valor+=bonus;
        printf("|ano %d: R$%d",i,valor);
        printf("\n");
    }
    

    return 0;
}
