/*WHILE EXEMPLO 3*/
#include <stdio.h>

int main()
{
    float soma, valor;
    int contador; //variavel de controle
    soma=0; //acumulador
    contador=1; //inicializa a variavel de controle
    while(contador<=5)
    {
        printf("\nDigite o %do numero: ",contador);
        scanf("%f",&valor);
        soma=soma+valor;//acumula a soma a cada literação
        contador++;//atualiza a variavel de controle(incremento+1)
    }
    printf("\nO resultado dsa soma é %2f,",soma);

    return 0;
}
