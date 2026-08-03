/*1. Faça um programa para entrar com uma distância (Km), o tempo de viagem (horas) e dizer se a velocidade média foi  superior ao limite (80 Km/h) ou não. 
*/
#include <stdio.h>

int main()
{
    int Km,Hrs,Vm,Vlimite=80;
    //inserir medidas
    printf("Distância em quilometros: ");
    scanf("%d",&Km);
    printf("\nTempo de viagem em horas: ");
    scanf("%d",&Hrs);
    //Calculo da VelocidadeMedia
    Vm=Km/Hrs;
    printf("\nVelocidade Média: %d",Vm);
    //variavel
    if(Vm>Vlimite)
    printf("\nVelocidade foi superior ao limite.");
    else
    printf("\nVelocidade esta dentro do limite.");

    return 0;
}
