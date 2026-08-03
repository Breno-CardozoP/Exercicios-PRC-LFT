/*EXEMPLO FUNÇÃO*/
#include <stdio.h>

float pl(float x,int y)//definição da função
{
    float r;
    r=x*y+2;
    
    return(r);
}

int main()
{
    
    float a;
    a=pl(5.0, 3);//uso da função
    printf("O valor de a= %.2f",a);

    return 0;
}
