#ifndef ESTOQUE_H
#define ESTOQUE_H

//estrutura
typedef struct{
    char nome[40];
    int codigo;
    int quantidade;
}estoqueEmpresa;

//prototipos
void entradaDePeças(estoqueEmpresa *p, int *total);
void saidaDePeças(estoqueEmpresa *p, int *total);
void relatorioDePeças(estoqueEmpresa *p, int *total);

#endif