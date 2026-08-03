/*10.Faça um programa para ler dois valores para as variáveis A e B, 
efetuar a troca dos valores de modo que a variável A passe a possuir o  conteúdo da variável B e que a variável B passe a possuir o conteúdo da variável A. 
Apresentar os valores trocados. ATENÇÃO: Não usar  variável auxiliar para fazer a troca.*/
#include <stdio.h>

int main()
{
    int A,B;
    
    printf("Valor de A: ");
    scanf("%d",&A);
    
    printf("\nValor de B: ");
    scanf("%d",&B);
    
    A=B++;
    //B=A;
    
    printf("\nValores invertidos:" );
    printf("\nA=%d",A);
    printf("\nB=%d",B);

    return 0;
}
