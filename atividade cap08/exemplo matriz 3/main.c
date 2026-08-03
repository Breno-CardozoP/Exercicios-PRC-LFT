//acesso a elementos individuais
#include <stdio.h>

int main()
{
    int matriz[5][3];
    int i,j;
    
    //preenche toda a matriz com zeros
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            matriz[i][j]=0;
        }
    }
    
    //atribui um valor especifico
    matriz[0][1]=15;
    
    //exibe o resultado
    printf("matriz com valor 15 na posição [0][1]:\n");
     for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
