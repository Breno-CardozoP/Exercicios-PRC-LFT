/*10) Escreva um programa C que receba 10 valores inteiros
e imprima os valores divisíveis por 5 em ordem crescente.*/
#include <stdio.h>
#define maximo 10
int main()
{
    int num, indice,valores[maximo],divisíveis[maximo];
    int i=0,j=0,contador=0;
    
    printf("-----insira no maximo 20 valores inteiros-----");
    for(;i<maximo;i++){
        printf("\ninsira o %d* valor: ",i+1);
        scanf("%d",&valores[i]);
        if(valores[i] % 5 == 0){
            divisíveis[contador]=valores[i];
            contador++;
        }
    }
    
    for(i=0;i<contador;i++){
        num=divisíveis[i];
        indice=i;
        for(j=i;j<contador;j++){
            if(divisíveis[j] < num){
                num = valores[j];
                indice = j;
            }
        }
        divisíveis[indice] = divisíveis[i];
        divisíveis[i] = num;
    }
    
    printf("vetor final:\n");
    for(i=0;i<contador;i++){
        printf(" %d",divisíveis[i]);
    }

    return 0;
}
