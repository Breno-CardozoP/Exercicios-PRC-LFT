/*4) Faça um programa C para ler uma matriz 4x5 e mostre os números das linhas cujos elementos são todos ímpares. */
#include <stdio.h>
#define NLIN 4
#define NCON 5
int main()
{
    int matriz[NLIN][NCON],contador;
    int i=0,j=0,contadorImpar=0;
    
    printf("--- Preencha a Matriz 4x5 ---\n");
    for(i = 0; i < NLIN; i++) {
        for(j = 0; j < NCON; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);//insirir os valores da matriz
            scanf("%d", &matriz[i][j]);
    
    for(i=0;i<NLIN;i++){
        contador=0;
        for(j=0;j<NCON;j++){
            if(matriz[i][j]%2!=0){//identificar as linhas impares
                contador++;
            }
        }
        if(contador==5){
            printf("linha %d tem todos os valores impares",i+1);//imprimir as linhas
            contadorImpar++;
        }
    }
    
    
   

    return 0;
}
