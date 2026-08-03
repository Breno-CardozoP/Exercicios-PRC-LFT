/*4. Desenvolva um programa em C para controlar uma agenda de contatos. Cada contato deve ter nome e telefone. Crie funções para:
Inicializar um contato;
Atualizar o telefone de um contato;
Imprimir os dados do contato.
Organize o programa em TAD com arquivos separados e um main.c para testar todas as funções.*/
#include <stdio.h>
#include "contato.h"
int main()
{
    contato contato1;
    
    printf("\nInicializar\n");
    contato1=inicializar(9881647,"breno");
    imprimir(contato1);
    
    printf("\nalterar preço\n");
    atualizar(&contato1, 9987654);
    imprimir(contato1);
    
    printf("\nimprimir dados\n");
    imprimir(contato1);

    return 0;
}
