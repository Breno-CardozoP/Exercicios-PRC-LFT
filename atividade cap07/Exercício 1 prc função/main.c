/*1. Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico Verdadeiro caso
o valor seja primo e Falso em caso contrário.*/
#include <stdio.h>
#include <stdbool.h>//biblioteca para usar bool
bool primo(int num);//protótipo da função

int main()
{
    int num;
    printf("insira o número: ");
    scanf("%d",&num);
    
    if(primo(num)==true){//chamada da função
    printf("\né numero primo.");
}else{
    printf("\nnão é um numero primo.");
}
    return 0;
}

bool primo(int num){//função
    
    if(num%2!=0&&num%3!=0&&num%5!=0&&num%7!=0 || num==2&&num==3&&num==5&&num==7){//verificar se é primo
        
        return true;
    }
    else{
        return false;
    }
}