/*5. Faça um programa que leia um caractere e imprima a mensagem “VOGAL”, “CONSOANTE” ou “OUTRO SÍMBOLO”*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    char caractere,maiusculo;
    
    printf("Insira um caractere qualquer: ");
    scanf("%c",&caractere);
    
maiusculo=toupper(caractere);//converter todas as vogais para maiusculo

    if(maiusculo=='A'|| maiusculo == 'E' || maiusculo == 'I' || maiusculo == 'O' || maiusculo == 'U'){
        printf("VOGAL");
    }
    else if(isalpha(caractere)){//isalpha=conferir se esta entre A e Z(caractere>='A' && caractere<='Z')
        printf("CONSOANTE");
    }
    else{
        printf("OUTRO SÍMBOLO");
    }
    

    return 0;
}
