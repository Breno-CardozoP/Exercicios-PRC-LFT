/*4. Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou negativo. A função deve retornar
um valor booleano.*/
#include <stdio.h>
#include <stdbool.h>
bool valor(int num);//prototipo

int main()
{
    int num;
    printf("insira o valor: ");
    scanf("%d",&num);
    
    if(valor(num)==true){
    printf("o valor é negativo.");
}else{
    printf("o valor é positivo.");
}
    return 0;
}

bool valor(int num){//função
    if(num<0){
        return true;
    }
    else{
        return false;
    }
}