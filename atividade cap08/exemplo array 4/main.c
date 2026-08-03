/*exemplo array 4*/
#include <stdio.h>

int main()
{
    int vetor[5];
    int i;
    
    //preenchendo o vetor com numeros de 5 a 1 
    for(i=0;i<5;i++){
        vetor[i]=5-i;
    }
    
    //exibindo o vetor
    printf("vetor com valores de 5 a 1:\n");
    for(i=0;i<5;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");

    return 0;
}
