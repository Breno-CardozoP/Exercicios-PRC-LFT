
#include <stdio.h>

int main()
{
    float n1,n2,n3,n4,media,soma;//entrada de dados
    
    printf("Notas:");
    
    scanf("%f\n %f\n %f\n %f",&n1,&n2,&n3,&n4);//leitura dos valores e calculos
    soma=n1+n2+n3+n4;
    media=soma/4;
    
    printf("Media: %.1f",media);//impressão do resultado

    return 0;
}
//breno cardozo