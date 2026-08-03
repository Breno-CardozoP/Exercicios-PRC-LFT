/*EXEMPLO 2 WHILE*/
#include <stdio.h>

int main()
{
    int linha,coluna;
    
    linha=1;
    while(linha<5){
        coluna=1;
        while(coluna<5){
            printf("%d ",linha*coluna);
            coluna++;
        }
        linha++;
    }
    printf("\n");

    return 0;
}
