/*9.Uma firma contrata um encanador por RS 150.00 por dia. 
Crie um programa que solicite o número de dias trabalhados pelo encanador 
e a  seguir imprima a quantia líquida que deverá ser paga, sabendo-se que são descontados 8% para o imposto de renda. */
#include <stdio.h>

int main()
{
    float DiaTrabalho, ValorTotal, ValorDescontado;
    
    printf("Quantidade de dias trabalhados: ");
    scanf("%f",&DiaTrabalho);
    
    ValorTotal=DiaTrabalho*150;
    ValorDescontado=ValorTotal*0.08;

    printf("Valor total que deverá ser pago: R$%.2f",ValorDescontado);

    return 0;
}
