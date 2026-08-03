#include <stdio.h>

typedef struct{
    int codigo;
    char nome[40];
    float consumo;
    float valor;
    float pagar;
}ContaAgua;

ContaAgua inicializar(int codigo,char* nome, float consumo, float valor);
float atualizar(ContaAgua *C);
void imprimir(ContaAgua C);