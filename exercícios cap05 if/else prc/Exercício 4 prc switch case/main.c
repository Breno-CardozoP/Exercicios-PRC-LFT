/*•4. Um vendedor precisa de um programa que calcule o preço total devido por um cliente. 
O programa deve receber o  código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo. 
Mostre uma mensagem  no caso de código inválido. 
*/
#include <stdio.h>

int main()
{
    float Total;
    int codigo, quantidade;
    printf("Insira o codigo do produto: ");
    scanf("%d",&codigo);
    printf("\nInsira a quantidade comprada: ");
    scanf("%d",&quantidade);
    
    switch(codigo){
        case 11:
        Total=quantidade*5.3;
        printf("\ndeve-se: R$%.2f",Total);
        break;
        case 22:
        Total=quantidade*6;
        printf("\ndeve-se: R$%.2f",Total);
        break;
        case 33:
       Total=quantidade*3.2;
        printf("\ndeve-se: R$%.2f",Total);
        break;
        case 44:
        Total=quantidade*2.5;
        printf("\ndeve-se: R$%.2f",Total);
        break;
    }

    return 0;
}
