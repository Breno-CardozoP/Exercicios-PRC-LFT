#include <stdio.h>
#include "contato.h"
#include <string.h>

contato inicializar(int telefone,char* nome){
    contato NovoContato;
    
    NovoContato.telefone=telefone;
    strcpy(NovoContato.nome,nome);
    
    return NovoContato;
}

void atualizar(contato *C, float NovoNumero){
    C->telefone=NovoNumero;
}

void imprimir(contato C){
    printf("nome: %s\n",C.nome);
    printf("codigo: %d\n",C.telefone);

}