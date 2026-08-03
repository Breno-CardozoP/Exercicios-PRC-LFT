#include <stdio.h>
#include "empresa.h"
#include <string.h>

funcionario inicializar(int codigo,char* nome, float salario){
    funcionario Novofuncionario;
    
    Novofuncionario.salario=salario;
    Novofuncionario.codigo=codigo;
    strcpy(Novofuncionario.nome,nome);
    
    return Novofuncionario;
}

void atualizar(funcionario *F, float aumento){
    F->salario+=aumento;
}

void imprimir(funcionario F){
    printf("nome: %s\n",F.nome);
    printf("matricula: %d\n",F.codigo);
    printf("salario: R$%.2f",F.salario);
}