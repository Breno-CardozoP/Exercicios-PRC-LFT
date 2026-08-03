/*3.O restaurante “Bom e Barato" cobra R$ 45,90 por quilo de comida, porém sua balança só marca a pesagem em gramas. 
Faça um  programa para ler o valor pesado de um cliente e informar o preço a pagar pelo prato. 
*/
#include <stdio.h>

int main()
{
   float PesoClienteG, ValorKG=45.90, ValorFinal;
   printf("Peso do prato em gramas:");
   scanf("%f",&PesoClienteG);
   ValorFinal=PesoClienteG/1000*ValorKG;
    printf("\nValor a pagar: R$%.2f",ValorFinal);

    return 0;
}
