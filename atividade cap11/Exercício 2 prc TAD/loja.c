#include <stdio.h>
#include "loja.h"
#include <string.h>

Produto inicializar(int codigo,char* nome, float preço){
    Produto NovoProduto;
    
    NovoProduto.preço=preço;
    NovoProduto.codigo=codigo;
    strcpy(NovoProduto.nome,nome);
    
    return NovoProduto;
}

void atualizar(Produto *P, float NovoPreço){
    P->preço=NovoPreço;
}

void imprimir(Produto P){
    printf("nome: %s\n",P.nome);
    printf("codigo: %d\n",P.codigo);
    printf("preço: %.2f",P.preço);
}