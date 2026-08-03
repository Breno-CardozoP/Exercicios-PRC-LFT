#include <stdio.h>
#include <string.h>
#include "estoque.h"

//função da entrada das peças no estoque
void entradaDePeças(estoqueEmpresa *p, int *total){
    int codigoTemporario;
    char nomeTemporario[40];
    int quantidadeTemporario;
    
    do{
    printf("---insira a nova peça(digite '0' para terminar)---");//leitura das informações
    printf("\ncodigo: ");
    scanf("%d",&codigoTemporario);
    getchar();
    if(codigoTemporario==0){
        *total-=1;
        break;
    }
    printf("\nnome: ");
    fgets(nomeTemporario,sizeof(nomeTemporario),stdin);
    nomeTemporario[strcspn(nomeTemporario, "\n")] = '\0';
    printf("\nquantidade: ");
    scanf("%d",&quantidadeTemporario);
    getchar();
    for(int i=0;i<*total;i++){//caso se insira peças iguais apenas somar a quanatidade
        if(p[*total].codigo==codigoTemporario && strcmp(p[*total].nome,nomeTemporario)==0){
            p[*total].quantidade+=quantidadeTemporario;
        }
    }
    (*total)++;
    
    p[*total].codigo=codigoTemporario;
    strcpy(p[*total].nome,nomeTemporario);
    p[*total].quantidade=quantidadeTemporario;
    
    }while(*total!=70);
    
    if(*total==70){
        printf("estoque cheio");
    }
}

//função da retirada das peças do estoque
void saidaDePeças(estoqueEmpresa *p, int *total){
    int NovoCodigo;
    char NovoNome[40];
    int NovaQuantidade;
    
    do{
    printf("---insira as peças e a quantidade que deseja se retirar('0' para parar)---");
    printf("\ncodigo: ");
    scanf("%d",&NovoCodigo);//inserir as peças que se deseja retirar
    getchar();
    printf("\nnome: ");
    fgets(NovoNome,sizeof(NovoNome),stdin);
    NovoNome[strcspn(NovoNome, "\n")] = '\0';
    printf("\nquantidade: ");
    scanf("%d",&NovaQuantidade);
    getchar();
    for(int i=0;i<*total;i++){
     if(NovoCodigo==p[i].codigo && strcmp(NovoNome,p[i].nome)==0){//diminuir a quantidade das peças
            if(p[i].quantidade>NovaQuantidade){
              p[i].quantidade-=NovaQuantidade;
             
            }else{
                printf("\nquantidade insuficiente-Total de peças=%d",p[*total].quantidade);
            }
        }else{
            printf("\npeça inexistente");
        }
    }
    }while(NovoCodigo!=0);
}

//função da lista total de peças no estoque
void relatorioDePeças(estoqueEmpresa *p, int *total){
    
    for(int i=0;i<*total;i++){
        printf("---total de peças---");//imprimir as informações
        printf("\ncodigo: %d nome: %s quantidade: %d\n",p[i].codigo,p[i].nome,p[i].quantidade);
    }
}