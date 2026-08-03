
#include <stdio.h>

int main()
{
    float A, B, soma, subtração, multiplicação, divisão; //entrada de dados

    scanf("%f\n%f",&A,&B);//leitura dos valores e calculos
    
    soma=A+B;
    subtração=A-B;
    multiplicação=A*B;
    divisão=A/B;
    
    printf("resultados: soma: %.1f\n",soma);//impressão do resultado
    printf("subtração: %.1f\n",subtração);
    printf("multiplicação: %.1f\n",multiplicação);
    printf("divisão: %.1f\n",divisão);

    return 0;
}
//breno cardozo