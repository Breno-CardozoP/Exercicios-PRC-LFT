#include <stdio.h>

int main()
{
    double total,valor=24;
    int i=1;
    
    for(;i<=194;i++){
        valor+=valor*0.15;
        printf("|ano %d: U$%.2f",i,valor);
        printf("\n");
    }
    

    return 0;
}
