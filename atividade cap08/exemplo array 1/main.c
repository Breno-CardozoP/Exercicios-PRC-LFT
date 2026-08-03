/*exemplo array*/
#include <stdio.h>
#define TAMANHO 5 //definição de uma constante

int main(void)
{
    float notas[TAMANHO], media=0.0;
    int i;
    
    for(i=0;i<TAMANHO;i++){
        printf("digite a %d* notas do aluno: ", i+1);
        scanf("%f",&notas[i]); //soma acumulada
    }
    
    media /= TAMANHO; //divisão fora do loop
    printf("resultado: %d",media);

    return 0;
}
