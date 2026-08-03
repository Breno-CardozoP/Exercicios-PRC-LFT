/*exemplo array 3*/
#include <stdio.h>

int main()
{
    int vetor[5];
    int i;
    
    //preenchendo o vetor com numeros de 1 a 5
    for(i=0;i<5;i++){
        vetor[i]=i+1;
    }
    
    //exibindo o vetor
    printf("Vetor com valores de 1 a 5:\n");
    
    for(i=0;i<5;i++){
        printf("%d ",vetor[i]);
    }
    printf("\n");

    return 0;
}
