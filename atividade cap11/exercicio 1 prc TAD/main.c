/*1. Faça um programa em C para gerenciar informações de livros em uma biblioteca. 
Para cada livro, armazene código, título, autor e quantidade
em estoque. Implemente funções para:
Inicializar um livro;
Atualizar o estoque (entrada ou saída de unidades);
Imprimir os dados do livro.
Organize o código em TAD (arquivos .h e .c) e um main.c que teste todas as funcionalidades.*/
#include <stdio.h>
#include "bibliotec.h"
int main()
{
    livro livro1;
    printf("biblioteca\n\n");
    
    printf("Inicializar livro:");
    livro1=inicializarLivro(101, "Machado de Assis", "Dom Casmurro", 5);
    imprimirDados(livro1);
    
    printf("\nretirar livro");
    atualizarEstoque(&livro1,-2);
    imprimirDados(livro1);
    
    printf("\ninsirir livro");
    atualizarEstoque(&livro1,4);
    imprimirDados(livro1);
    
    printf("dados completos");
    imprimirDados(livro1);

    return 0;
}
