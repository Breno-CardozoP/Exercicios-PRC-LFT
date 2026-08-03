/*5. Faça uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. A função deve retornar um
valor booleano.*/
#include <stdio.h>
#include <stdbool.h>
bool valor(int num);//prototipo

int main()
{
    int num;
    printf("insira o valor: ");
    scanf("%d",&num);
    
    if(valor(num)==true){
    printf("O valor é par.");
}
else{
    printf("O valor é impar.");
}
    return 0;
}
bool valor(int num){//função paridade
    if(num%2==0){
        return true;
    }
    else{
        return false;
    }
}