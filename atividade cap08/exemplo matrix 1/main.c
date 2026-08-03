//declaração e preenchimento manual
#include <stdio.h>

int main()
{
    int m[3][3];//matrix 3x3
    int i,j;
    
    //preenchendo a matrix manualmente
    m[0][0]=1; m[0][1] = 2; m[0][2] = 3;
    m[1][0]=4; m[1][1] = 5; m[1][2] = 6;
    m[2][0]=7; m[2][1] = 8; m[2][2] = 9;
    
    //exibindo a matrix
    printf("matrix jxj:\n");
    for(i=0;i<j;i++){
        for(j=0;j<3;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
