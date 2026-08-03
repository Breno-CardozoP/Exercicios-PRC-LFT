/*2. Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela  abaixo. 
Faça um programa que leia o salário e o código do cargo de um funcionário e calcule o novo salário. 
Se o código do cargo  do funcionário não estiver na tabela, ele deverá, então, receber 40% de aumento. 
Mostre o salário antigo, o novo salário e a  
diferença. 
*/
#include <stdio.h>
int main()
{
    int codigo,salario,salarioAtual,diferença;
    printf("Insira o codigo do cargo: ");
    scanf("%d",&codigo);
    printf("\nInsira o salario atual: ");
    scanf("%d",&salario);
    
    
    
    switch(codigo){
        case 101:
        salarioAtual=salario*1.1;
        printf("\nsalario atual: %d",salario);
        printf("\nNovo salario: %d",salarioAtual);
        diferença=salarioAtual-salario;
        printf("\naumento de R$%d",diferença);
        break;
        case 102:
        salarioAtual=salario*1.2;
        printf("\nsalario atual: %d",salario);
        printf("\nNovo salario: %d",salarioAtual);
        diferença=salarioAtual-salario;
        printf("\naumento de R$%d",diferença);
        break;
        case 103:
        salarioAtual=salario*1.3;
        printf("\nsalario atual: %d",salario);
        printf("\nNovo salario: %d",salarioAtual);
        diferença=salarioAtual-salario;
        printf("\naumento de R$%d",diferença);
        break;
        
    }

    return 0;
}
