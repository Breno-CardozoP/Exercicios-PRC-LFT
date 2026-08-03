/*8.A fábrica de refrigerantes Meia Cola vende seu produto em 3 formatos: lata 355ml, garrafa de 290ml e garrafa de 2l. 
Se um comerciante  compra um certa quantidade de cada formato, faça um programa para calcular quantos litros ele comprou no total 
*/
#include <stdio.h>

int main()
{
    float valorTotal,lata,garrafa,garrafaL;
    
    printf("------Quantidade Comprada------");
    
    printf("\nlata: ");
    scanf("%f",&lata);
    
    printf("\ngarrafa pequena: ");
    scanf("%f",&garrafa);
    
    printf("\ngarrafa grande: ");
    scanf("%f",&garrafaL);
    
    valorTotal=(lata*355+garrafa*290+garrafaL*2000)/1000;
    
    printf("\nQuantidade total de litros comprada: %.2fL",valorTotal);

    return 0;
}
