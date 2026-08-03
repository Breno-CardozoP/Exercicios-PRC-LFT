
#include <stdio.h>
#define NLIN 10
#define NCOL 10

int main()
{
     int matriz[NLIN][NCOL];
    int i,j;
    
    //preenche toda a matriz com 30
    for(i=0;i<NLIN;i++){
        for(j=0;j<NCOL;j++){
            matriz[i][j]=30;
        }
    }
    
    //exibe a matriz
    printf("matriz 10x10 preenchida com 30 {mostrando as primeiras 5 linhas):\n");
     for(i=0;i<5;i++){
        for(j=0;j<NCOL;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

