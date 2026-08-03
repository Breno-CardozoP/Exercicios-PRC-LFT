/*1. Um motorista deseja colocar no seu tanque X reais de gasolina.
Escreva um programa para ler o valor do pagamento e o preço do litro da  gasolina, e exibir quantos litros ele conseguiu colocar no tanque.*/
#include <stdio.h>

void main()
{
float ValorReais,ValorGasolina,TotalLitros;

ValorGasolina=6.77;

printf("Valor em reais:");
scanf("%f",&ValorReais); //leitura do valor

TotalLitros=ValorReais/ValorGasolina; //calcular a gosolina adquirida

printf("Litros no tanque: %.2fL",TotalLitros); //exibição
}