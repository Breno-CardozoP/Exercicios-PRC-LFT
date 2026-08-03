/*5. Elabore um programa em C para gerenciar informações de funcionários de uma empresa. Cada funcionário deve possuir matrícula, nome e
salário. Implemente funções para:
Inicializar um funcionário;
Aumentar o salário;
Imprimir os dados do funcionário.
Estruture o código em TAD (.h e .c) e crie um main.c para testar todas as funções.*/
#include <stdio.h>
#include "empresa.h"
int main()
{
    funcionario funcionario1;
    
    printf("\nInicializar\n");
    funcionario1=inicializar(110,"Breno", 1640);
    imprimir(funcionario1);
    
    printf("\aumentar salario\n");
    atualizar(&funcionario1, 200);
    imprimir(funcionario1);
    
    printf("\nimprimir dados\n");
    imprimir(funcionario1);

    return 0;
}

