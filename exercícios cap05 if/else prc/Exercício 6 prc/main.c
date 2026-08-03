/*6. Uma empresa concederá um aumento de salário aos funcionários que possuem mais de 4 anos de serviço, 
mais de 3  dependentes e salário atual abaixo de R$ 2000,00. Escreva um programa que leia estes dados do funcionário e imprima  
uma mensagem dizendo se o funcionário tem direito ao aumento ou não. Caso ele tenha direito, calcule o novo salário  com 20% de aumento. 
Mostre o salário antigo, o novo salário e a diferença.
*/
#include <stdio.h>

int main()
{
    float anos,dependentes,salario,novoSalario,valorFinal;
    //leitura
    printf("insira o tempo de serviço em anos: ");
    scanf("%f",&anos);
    printf("\ninsira o número de dependentes: ");
    scanf("%f",&dependentes);
    printf("\ninsira o salario atual: ");
    scanf("%f",&salario);
    
    //variavel
    if(anos>4, dependentes>3, salario<2000){
        printf("\npossui direito ao aumento.");
        
        novoSalario=salario+salario*0.2;
        valorFinal=novoSalario-salario;
        
        printf("\nsalário atual: R$%.2f",salario);
        printf("\nNovo salário: R$%.2f",novoSalario);
        printf("\nValor do aumento: R$%.2f",valorFinal);
    }
    else{
        printf("não possui direito ao aumento.");
    }
   

    return 0;
}
