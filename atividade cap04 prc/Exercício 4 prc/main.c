/*4.Faça um programa que leia um número em segundos e apresente o correspondente em horas, minutos e segundos no formato: 
xxx SEGUNDOS ---> hh:mm:ss 
*/
#include <stdio.h>

int main()
{ 
    int s, h, m;
    
   printf("Total de segundos: ");
scanf("%d",&s);
m=s/60;
h=m/60;
printf("\n%dhrs:%dmin:%ds",h,m,s);

    return 0;
}
