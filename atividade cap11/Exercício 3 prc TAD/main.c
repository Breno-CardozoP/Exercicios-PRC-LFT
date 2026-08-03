/*3. Faça um programa em C para gerenciar contas de água de clientes. 
Cada conta deve armazenar número da conta, titular, consumo em metros
cúbicos e valor a pagar. Implemente funções para:
Inicializar a conta;
Calcular o valor da conta com base no consumo e valor por metro cúbico;
Imprimir os dados da conta.
Estruture o programa em TAD (.h e .c) e crie um main.c que execute todas as funções.*/
#include <stdio.h>
#include "conta.h"
int main()
{
    ContaAgua Conta1;
    
    printf("\nInicializar\n");
    Conta1=inicializar(110,"breno", 10, 2);
    imprimir(Conta1);
    
    printf("\nCalcular o total a pagar\n");
    atualizar(&Conta1);
    imprimir(Conta1);
    
    printf("\nimprimir dados\n");
    imprimir(Conta1);

    return 0;
}
