#include <stdio.h>
#include "bibliotec.h"
#include <string.h>

livro inicializarLivro(int codigo,char* autor,char* nome,int quantidade){
    livro novoLivro;
    
    novoLivro.codigo=codigo;
    novoLivro.quantidade=quantidade;
    strcpy(novoLivro.nome,nome);
    strcpy(novoLivro.autor,autor);
    
    return novoLivro;
    
}

void atualizarEstoque(livro *L, int valor){
    L->quantidade+=valor;
    
}

void imprimirDados(livro L){
   
    printf("titulo: %s\n",L.nome);
    printf("autor: %s\n",L.autor);
    printf("codigo: %d\n",L.codigo);
    printf("quantidade: %d\n",L.quantidade);
}