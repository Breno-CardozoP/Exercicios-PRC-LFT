/*1. Peça ao usuário para digitar seu primeiro nome e depois o sobrenome. Em seguida, 
junte-os em uma  única string, separando por um espaço, e mostre o nome completo. 
Use strcpy e strcat. */
#include <stdio.h>
#include <string.h>

int main()
{
    char nome[100],sobrenome[50],completo[100];
    
    printf("Insira seu primeiro nome: ");//primeiro nome
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] ='\0';
    
    printf("insira o segundo nome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);//segundo nome
    sobrenome[strcspn(sobrenome, "\n")] ='\0';
    
    strcat(nome, " ");
    strcat(nome, sobrenome);//concatenar com espaço
    strcpy(completo, nome);
    
    printf("nome completo: %s\n", completo);//imprimir

    return 0;
}
