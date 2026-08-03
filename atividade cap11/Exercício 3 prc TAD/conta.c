#include <stdio.h>
#include "conta.h"
#include <string.h>

ContaAgua inicializar(int codigo,char* nome, float consumo, float valor){
    ContaAgua NovaConta;
    
    NovaConta.codigo=codigo;
    NovaConta.consumo=consumo;
    NovaConta.valor=valor;
    strcpy(NovaConta.nome,nome);
    
    return NovaConta;
    
}

float atualizar(ContaAgua *C){
    C->pagar=C->consumo*C->valor;
    return C->pagar;
}

void imprimir(ContaAgua C){
    printf("titular: %s\n",C.nome);
    printf("numero: %d\n",C.codigo);
    printf("consumo: %.2fm3\n",C.consumo);
    printf("valor a pagar: %.2f\n",C.pagar);
}