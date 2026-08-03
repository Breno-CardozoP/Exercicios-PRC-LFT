/*7) Escreva um programa C que leia uma Matriz 25x25 e imprima a soma dos elementos das linhas e colunas pares.*/
#include <stdio.h>
#define NCOL 25
int main()
{
    int matriz[NCOL][NCOL];
    int i=0,j=0,soma=0;
    
    printf("--- Preencha a Matriz 25x25 ---\n");
    for(i = 0; i < NCOL; i++) {
        for(j = 0; j < NCOL; j++) {
            printf("Digite os elementos da matriz [%d][%d]: ", i + 1, j + 1);//insirir os valores da matriz A
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i=0;i<NCOL;i++){
        for(j=0;j<NCOL;j++){
            if(i%2==0){
                if(j%2==0){
                    soma+=matriz[i][j];//identificar as linhas e colunas parese fazer a soma
                }
            }
        }
    }
    
    printf("soma = %d",soma);

    return 0;
}
