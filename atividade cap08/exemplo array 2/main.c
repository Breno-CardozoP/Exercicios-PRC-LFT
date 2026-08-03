/*exemplo array 2*/
#include <stdio.h>

int main()
{
    int Vetor[5];
    int i;
    
    //preenchendo o vetor com o valor 30
    for(i=0;i<5;i++){
        
        Vetor[i]=30;
        
    }
    
    //exibindo o vetor
    printf("Vetor preenchido com 30: \n");
    for(i=0;i<5;i++){
        printf("%d ",Vetor[i]);
    }
    printf("\n");

    return 0;
}
