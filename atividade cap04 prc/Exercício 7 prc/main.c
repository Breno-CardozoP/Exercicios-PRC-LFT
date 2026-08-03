/*7.Sabendo que o latão é obtido fundindo-se sete partes de cobre com três partes de zinco. 
faça um programa que solicite quantos quilos de  latão se quer produzir e imprima quantos quilos de cobre e zinco são necessários. 
*/
#include <stdio.h>

int main()
{
    float kgLatão,kgCobre,kgZinco;
    
    printf("Quilos de Latão requisitados: ");
    scanf("%f",&kgLatão);
    
    kgZinco=kgLatão*0.3;
    kgCobre=kgLatão*0.7;
    
    printf("\nQuantidade de Cobre necessária: %.2fkg",kgCobre);
    printf("\nQuantidade de Zinco necessária: %.2fkg",kgZinco);
    

    return 0;
}
