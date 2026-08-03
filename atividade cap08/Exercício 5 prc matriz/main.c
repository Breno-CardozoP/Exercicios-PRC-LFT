/*5) Faça um programa C para ler duas matrizes A e B 3x3 e imprimir a matriz da sua soma. 
*/
#include <stdio.h>
#define NCON 3



int main()
{
    int matrizA[NCON][NCON],matrizB[NCON][NCON],matrizFinal[NCON][NCON];
    int i=0,j=0;
    
    printf("--- Preencha as Matriz 3x3 ---\n");
    for(i = 0; i < NCON; i++) {
        for(j = 0; j < NCON; j++) {
            printf("Digite os elementos da matriz A [%d][%d]: ", i + 1, j + 1);//insirir os valores da matriz A
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(i = 0; i < NCON; i++) {
        for(j = 0; j < NCON; j++) {
            printf("Digite os elementos da matriz B [%d][%d]: ", i + 1, j + 1);//insirir os valores da matriz B
            scanf("%d", &matrizB[i][j]);
        }
    }

    for(i=0;i<NCON;i++){
        for(j=0;j<NCON;j++){
            matrizFinal[i][j]=matrizA[i][j]+matrizB[i][j];//soma das matrizes
        }
    }
    
    printf("-----matriz final-----\n");
    for(i=0;i<NCON;i++){
        for(j=0;j<NCON;j++){
            printf("%3d ",matrizFinal[i][j]);//imprimir matriz final
        }
        printf("\n");
    }



    return 0;
}



