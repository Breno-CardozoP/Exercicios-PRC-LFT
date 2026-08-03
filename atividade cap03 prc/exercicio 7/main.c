
#include <stdio.h>

int main()
{
    float P, cm;
    
    printf("Valor em polegadas:");
    
    scanf("%f",&P);//leitura do valor
    
    cm=P*2.54;//multiplicação
    
    printf("É equivalente a %.2f",cm); printf(" centimetros.");//impressão do resultado
    

    return 0;
}
//breno cardozo
