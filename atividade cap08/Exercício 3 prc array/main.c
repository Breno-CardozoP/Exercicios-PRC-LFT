/*3) Uma central de meteorologia anota diariamente a temperatura média da cidade. 
Faça um programa C para ler cada temperatura do mês de setembro e informar qual a
maior temperatura e em qual dia ela ocorreu.
Ex: "A maior temperatura ocorreu no dia 22 foi de 34,5 graus.”*/
#include <stdio.h>
#define dias 3
int main()
{
    int temperatura[dias];
    int i=0,total=0;
    float maior=0,num;
    
    for(;i<dias;i++){
        printf("insira o %d* valor: ",i+1);
        scanf("%f",&num);
        
        temperatura[i]=num;//quardar as temperaturas
        
        if (i == 0) {//no primeiro ciclo a primeira temperatura sera a maior
            maior = num;
            total = i;
        }
        
        if(maior<num){//acha a maior temperatura
            maior=num;
           total=i;
        }
        
    }
    printf("\nA maior temperatura ocorreu no dia %d",total+1);//soma mais 1 no total pq começa a contar a partir do 0
    printf(" foi de %1.f",maior);

    return 0;
}
