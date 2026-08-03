/*8) Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento de uma linha onde  
se encontra o maior elemento da matriz. Faça uma função C que receba, por parâmetro, uma matriz 10X10 e  
retorne o seu elemento minimax. O programa principal recebe os valores da matriz e imprime o retorno da função.
*/
#include <stdio.h>
#define NCON 10

int minimax(int matriz[NCON][NCON]);//prototipo
int main()
{
    int matriz[NCON][NCON];
    int i=0,j=0;
    printf("--- Preencha as Matriz 3x3 ---\n");
    for(i = 0; i < NCON; i++) {
        for(j = 0; j < NCON; j++) {
            printf("Digite os elementos da matriz A [%d][%d]: ", i + 1, j + 1);//insirir os valores da matriz 
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("o valor minimax desta matriz é %d",minimax(matriz));//imprimir valor final

    return 0;
}

int minimax(int matriz[NCON][NCON]){
    int i=0,j=0,maior=0,linhaMaior=0;
    
    
    for(i=0;i<NCON;i++){
        for(j=0;j<NCON;j++){
            if(maior<matriz[i][j]){//descobrir o maior elemento e sua linha
                maior=matriz[i][j];
                linhaMaior=i;
            }
        }
    }
    
    int minimo=matriz[linhaMaior][0];
    for(i=0;i<NCON;i++){
        if(minimo>matriz[linhaMaior][j]){//descobrir o menor elemento da linha ja descoberta
         minimo=matriz[linhaMaior][j];
        }
    }
    
    return minimo;
}
