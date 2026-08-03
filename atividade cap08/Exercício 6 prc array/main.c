/*6) Uma loja de CDs possui 10 vendedores. 
Cada vendedor recebe um salário fixo de R$300,00 mais 10% do total de CDs vendidos. 
Cada CD custa R$20,00. Faça um
programa C que leia uma tabela com 10 posições (cada posição representa um vendedor) 
contendo o número de CDs vendidos por vendedor e imprima quanto cada um
deverá receber ao final do mês.
Vendedor 1 - Salário R$320,00
Vendedor 2 - Salário R$400,00*/
#include <stdio.h>
#define posição 10
int main()
{
    float salario[posição],num;//variaveis
    int i=0;
    
    for(;i<posição;i++){
        printf("insira os CDs do %d* vendedor: ",i+1);//preenchendo o vetor com o resultado do calculo do salario
        scanf("%f",&num);
        salario[i]=(num*20)*0.1+300;
    }
    for(i=0;i<posição;i++){
        printf("vendedor %d - Salário R$%.2f",i+1,salario[i]);//exibindo o resultado
        printf("\n");
    }
   

    return 0;
}
