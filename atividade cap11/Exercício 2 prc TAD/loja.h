#include <stdio.h>

typedef struct{
    int codigo;
    char nome[40];
    float preço;
}Produto;

Produto inicializar(int codigo,char* nome, float preço);
void atualizar(Produto *P, float NovoPreço);
void imprimir(Produto P);