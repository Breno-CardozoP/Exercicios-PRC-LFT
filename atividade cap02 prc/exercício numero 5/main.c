#include <stdio.h>

int x; //variavel global
void main(){
    x++;
    x=4; //valor atribuido da variavel global
    int y=2; //variavel local e valor atribuido
    int valor_final;
    
    valor_final = x + y;
    //exibição dos valores atribuidos
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    printf("valor_final:%d\n", valor_final);
}