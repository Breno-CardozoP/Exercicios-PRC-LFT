/*6) Uma matriz quadrada (mesma quantidade de linhas e colunas) é dita “triangular”
se os elementos situados  acima de sua diagonal principal são todos nulos.
Escreva uma função booleana que receba uma matriz quadrada  10x10 e verifique se ela é uma matriz triangular. 
*/
#include <stdio.h>
#include <stdbool.h>
#define NCON 10

bool triangular(int matriz[NCON][NCON]);

int main()
{
    int i=0,j=0;
    int matriz[NCON][NCON];
    
    printf("--- Preencha as Matriz quadrada ---\n");
    for(i = 0; i < NCON; i++) {
        for(j = 0; j < NCON; j++) {
            printf("Digite os elementos da matriz [%d][%d]: ", i + 1, j + 1);//insirir os valores da matriz 
            scanf("%d", &matriz[i][j]);
        }
    }
    
    if(triangular(matriz)==true){
        printf("é uma matriz triangular");
    }else{
        printf("não é uma matriz triangular");//imprimir resultado
    }
    return 0;
}

bool triangular(int matriz[NCON][NCON]){
    int contador=0,soma=0;
    
    for(int i=0;i<NCON;i++){
       soma=0;
     for(int k=i+1;k<NCON;k++){//descobrir se é triangular
         soma+=matriz[i][k];
        }
        if(soma==0){
            contador++;
        }
            
        
    }
    if(contador==10){
        return true;
    }
    else{
        return false;
    }
}





