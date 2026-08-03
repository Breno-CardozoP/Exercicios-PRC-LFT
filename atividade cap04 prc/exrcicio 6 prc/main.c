/*6.Faça um programa para calcular e apresentar o valor do volume de uma lata de óleo. 
utilizando a fórmula: Volume = Pl x R2 x H Onde R é  o raio e H a altura da lata. 
*/
#include <stdio.h>

int main()
{
    float V,Pi,r,h;
    
    Pi=3.14;
    
    printf("-------Insirir valores.-------");
    printf("\nValor do raio: ");
    scanf("%f",&r);
    printf("\nValor da altura: ");
    scanf("%f",&h);
    
    V=Pi*(r*r)*h;
    
    printf("\nO Valor do volume do cilindro: %.2f",V);

    return 0;
}
