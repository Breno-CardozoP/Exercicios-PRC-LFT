/*6. Faça um procedimento que recebe 3 valores inteiros por parâmetro e retorna-os ordenados em ordem
crescente.*/

#include <stdio.h>

void ordem(int num);//prototipo

int main()
{
    int num;
    ordem(num);//chamando a função

    return 0;
}

void ordem(int num) {//função
    int maior = 0, medio = 0, menor = 0; 
    
    printf("Insira os 3 valores:\n");
    for(int i = 0; i < 3; i++) {//criar o ordem
        scanf("%d", &num);
        
        if (num > maior) {
            menor = medio;
            medio = maior;
            maior = num;
        } else if (num > medio) {
            menor = medio;
            medio = num;
        } else {
            menor = num;
        }
    }
    
    printf("\nOs valores em ordem sao: %d %d %d\n", maior, medio, menor);//imprimir
}