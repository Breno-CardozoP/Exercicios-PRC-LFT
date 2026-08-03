/*1. Faça um programa para entrar com um valor e dizer a qual mês do ano o mesmo corresponde. 
Se o valor for maior que doze e  menor que 1, avise que o valor não corresponde a nenhum mês. Exemplo: 3 = março 
*/
#include <stdio.h>

int main()
{
    int mes;
    printf("Digito o valor: ");
    scanf("%d",&mes);
    
    switch(mes){
        case 1:printf("Janeiro");
        break;
        case 2:printf("Fevereiro");
        break;
        case 3:printf("Março");
        break;
        case 4:printf("Abril");
        break;
        case 5:printf("Maio");
        break;
        case 6:printf("Junho");
        break;
        case 7:printf("Julho");
        break;
        case 8:printf("Agosto");
        break;
        case 9:printf("Setembro");
        break;
        case 10:printf("Outubro");
        break;
        case 11:printf("Novembro");
        break;
        case 12:printf("Desembro");
        break;
        default: printf("não corresponde a nenhum mês");
    }
    return 0;
}
