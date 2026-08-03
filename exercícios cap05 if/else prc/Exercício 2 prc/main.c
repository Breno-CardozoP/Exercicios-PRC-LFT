/*2. Faça um programa para ler a temperatura de uma pessoa e exibir a mensagem “ESTÁ COM FEBRE” ou “ESTÁ  NORMAL”. Considere o valor base como 37.5.*/
#include <stdio.h>

int main()
{
    float TempNormal=37.5,TempAtual;
    
    //leitura
    printf("insira a temperatura atual: ");
    scanf("%f",&TempAtual);
    
    //variavel
    if(TempAtual>TempNormal)
    printf("\nEstá com febre.");
    if(TempAtual<TempNormal)
    printf("\nEstá normal.");

    return 0;
}
