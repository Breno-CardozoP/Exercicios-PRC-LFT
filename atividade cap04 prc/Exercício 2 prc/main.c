/*2.Elabore um programa para entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o inicio do ano. 
Esqueça a  questão dos anos bissextos e considere 1 mês=30 dias.*/
#include <stdio.h>

int main()
{
    int Dia,Mês,AnoTotal,DiasPassados;
    AnoTotal=365;
    printf("Data Atual");
    printf("\nDia:");
    scanf("%d",&Dia);
    printf("\nMês:");
    scanf("%d",&Mês);
 
DiasPassados=Mês*30+Dia;
 printf("\nSe passara %d dias",DiasPassados);
    return 0;
}
