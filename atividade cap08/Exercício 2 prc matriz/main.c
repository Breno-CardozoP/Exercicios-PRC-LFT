/*2) Faça um programa C para ler uma matriz 4x5 e imprimir a soma dos elementos de uma coluna cujo número é fornecido pelo usuário.*/
#include <stdio.h>
#define LINHAS 4
#define COLUNAS 5
int main()
{
    int matriz[LINHAS][COLUNAS],num;
    int i=0,j=0,soma=0;
    
    for(i = 0; i < LINHAS; i++) 
    for(j = 0; j < COLUNAS; j++) 
     matriz[i][j] = i * COLUNAS + j + 1; // Preenche a matriz com valores sequenciais

printf("insira a coluna desejada(max=5): ");//escolher a coluna
scanf("%d",&num);

for(i=0;i<LINHAS;i++){
    soma+=matriz[i][num-1];//calcula da soma dos valores das linhas da coluna desejada
}

printf("a soma dos elementos é igual a %d",soma);

   

    return 0;
}
