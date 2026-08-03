/*3. Um posto está vendendo combustíveis com a seguinte tabela de descontos: 
Álcool: Até 20 litros, desconto de 3 % por litro. 
 Acima de 20 litros, desconto de 5 % por litro. 
Gasolina: Até 15 litros, desconto de 3,5 % por litro. 
 Acima de 15 litros, desconto de 8 % por litro 
Escreva um programa que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: 1- Alcool 2-  Gesolina), 
calcule e imprima o valor a ser pago pelo cliente, sabendo que o preço da gasolina é de R$5,29 o litro e o álcool R$4,39.
*/
#include <stdio.h>

int main()
{//leitura dos valores
    int L,tipo;
    float ValorG,ValorA,ValorTotalG,ValorTotalA,Total;
    printf("Insira os litros vendidos: ");
    scanf("%d",&L);
    printf("Insira o tipo de combustível (codificado da seguinte forma: 1- Alcool 2-  Gesolina): ");
    scanf("%d",&tipo);
    
    ValorG=5.29;//atribuição do preço
    ValorA=4.39;
    
   switch(tipo){
       case 1://calculo do Alcool
    
    if(L<=20){
        ValorTotalA=ValorA*0.97;
        Total=L*ValorTotalA;
        printf("Valor a ser pago: R$%.2f",Total);
    }
        else if (L>20){
        ValorTotalA=ValorA*0.95;
        Total=L*ValorTotalA;
        printf("Valor a ser pago: R$%.2f",Total);
   }
        break;
        
    
    case 2://calculo da gasolina
        if (L<=15){
        ValorTotalG=ValorG*0.965;
        Total=L*ValorTotalG;
        printf("Valor a ser pago: R$%.2f",Total);}
        
        else if (L>15){
        ValorTotalG=ValorG*0.92;
        Total=L*ValorTotalG;
        printf("Valor a ser pago: R$%.2f",Total);
        }
        break;
    }

    return 0;
}
