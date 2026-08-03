//exemplo função 3
#include <stdio.h>

float soma (float a, int b);//prototipo da função soma

void main(){

//chamada da função soma antes de sua definição,mas após prototipação
printf("A soma é %.2f",soma(16.7,15));
}

float soma (float a, int b) //definição da função soma
{
    float result;
    result=a+b;
    return result;
}

