/*2. Crie um programa em C para gerenciar produtos de uma loja. Cada produto possui código, nome e preço. Implemente funções para:
Inicializar o produto;
Alterar o preço do produto;
Imprimir os dados do produto.
Use TAD com arquivos separados e um main.c que teste os procedimentos.*/
#include <stdio.h>
#include "loja.h"
int main()
{
    Produto Produto1;
    
    printf("\nInicializar\n");
    Produto1=inicializar(110,"vassoura", 10);
    imprimir(Produto1);
    
    printf("\nalterar preço\n");
    atualizar(&Produto1, 15);
    imprimir(Produto1);
    
    printf("\nimprimir dados\n");
    imprimir(Produto1);

    return 0;
}
