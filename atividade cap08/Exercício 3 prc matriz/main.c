/*3) Faça um programa C para ler uma matriz 5x5 e imprimir a soma dos elementos da diagonal principal.*/
#include <stdio.h>
#define NCOL 5
#define NLIN 5
int main()
{
    int matriz[NLIN][NCOL];
    int i=0,j=0,soma=0;
    
    for(i = 0; i < NLIN; i++) 
     for(j = 0; j < NCOL; j++) 
        matriz[i][j] = i * NCOL + j + 1; //preenchendo a matriz sequencialmente

    for(i=0;i<NCOL;i++){
    soma+=matriz[i][i];//calculo da soma
    }
    
    printf("a soma dos elementos da diagonal é %d",soma);
    return 0;
}
