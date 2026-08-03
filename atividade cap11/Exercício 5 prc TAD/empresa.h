#include <stdio.h>

typedef struct{
    int codigo;
    char nome[40];
    float salario;
}funcionario;

funcionario inicializar(int codigo,char* nome, float salario);
void atualizar(funcionario *F, float aumento);
void imprimir(funcionario F);