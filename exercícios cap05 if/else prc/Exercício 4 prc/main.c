/*4. Faça um programa para ler o ano de nascimento de uma pessoa 
e escrever uma mensagem que diga se ela poderá votar ou não este ano (não é necessário considerar o mês em que ela nasceu). 
*/
#include <stdio.h>

int main()
{
    int anoAtual=2026,anoNascimento;
    printf("Insira o ano de nascimento: ");
    scanf("%d",&anoNascimento);
    
    if(anoAtual-anoNascimento>=16){
        printf("Poderá votar.");
    }
    else{
printf("Não poderá votar.");
    }

    return 0;
}
