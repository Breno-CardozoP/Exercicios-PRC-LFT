/*2. Leia uma frase completa do usuário e conte quantos caracteres ela possui, 
sem incluir o Enter.  Mostre a frase e o número de caracteres usando strlen.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char frase[100];
    
    printf("insira a frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';//tirar o \n
    
    printf("frase: %s",frase);
    printf("\ntamanho dela: %lu", strlen(frase));//numero de caracteres

    return 0;
}
