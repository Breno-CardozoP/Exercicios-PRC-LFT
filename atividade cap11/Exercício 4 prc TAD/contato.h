#include <stdio.h>

typedef struct{
    int telefone;
    char nome[40];
    
}contato;

contato inicializar(int telefone,char* nome);
void atualizar(contato *C, float NovoNumero);
void imprimir(contato C);