/*a) Definir uma estrutura para armazenar as informações de um determinado produto. A
estrutura deve conter o nome do produto (até 15 caracteres) e o preço do produto (real).
Faça um programa para ler as duas informações e imprimi-las.*/
#include <stdio.h>
#include <string.h>


void main()
{
    struct Produto{//struct
        
        char nome[16];
        float preço;
    
    };
    
    struct Produto Conteudo;
    
    printf("insira o nome do produto: ");//insirir informações
    fgets(Conteudo.nome, 16 , stdin);
    printf("insira o preço do Produto: ");
    scanf("%f",&Conteudo.preço);//curiosidade não coloque .2 no scanf
    
   printf("-----leitura da struct-----");
   printf("\nNome do Produto: %s",Conteudo.nome);
   printf("Preço do Produto: %.2f",Conteudo.preço);
   

}
