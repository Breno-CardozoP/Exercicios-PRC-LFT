#include <stdio.h>

typedef struct{
    int codigo;
    char autor[40];
    char nome[40];
    float preço;
}livro;

livro inicializar(int codigo,char* autor,char* nome, int quantidade);
void atualizar(livro *L, int valor);
void imprimir(livro L);