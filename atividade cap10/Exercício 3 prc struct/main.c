/*Questão 3:
Desenvolva um programa que trabalhe com uma “lista de telefones”. As duas informações
armazenadas são:
Nome, Telefone.
Defina a “lista de endereços” como um vetor de tamanho 50. O programa deve apresentar
um menu para o usuário com as seguintes alternativas:
1. Inclusão (desenvolva uma função que inclua um novo endereço);
2. impressão (desenvolva uma função que mostre todos os nomes e endereços da “lista”);
3. Fim (encerra a execução do programa).*/
#include <stdio.h>
#include <string.h>
typedef struct{
    char nome[40];
    int Telefone;
}lista;

void inclusão(lista endereços[50], int codigo);//prototipo

void impressão(lista endereços[50], int contador){//função para a impressão da lista Telefonica
    printf("-----lista completa-----");
    for(int i=0;i<contador-1;i++){
        printf("\nNome: %s Telefone: %d\n",endereços[i].nome,endereços[i].Telefone);
    }
}

int main()
{
    lista endereços[50];
    int i=0,codigo;
    
   do{
    printf("-----Lista Telefonica-----");//leitura do menu
    printf("\n(1)incluir novo endereço \n(2)abrir a lista Telefonica \n(3)sair\n\n");
    scanf("%d",&codigo);
    getchar();

     if(codigo!=1 && codigo!=2){//possibilidades de escolha e a chamada da determinada função
        printf("opção invalida\n\n");
    }
    else if(codigo==1){
       inclusão(endereços, codigo);
    }
    else if(codigo==2){
       impressão(endereços, contador);
    }

   }while(codigo!=3);

    return 0;
}

//função para inserir os endereços na lista
void inclusão(lista endereços[50], int codigo){
  int contador=0, i=0;
    
  for(int i=0;i<50;i++){
    printf("---insira o nome e o endereço---");
    printf("\n(digite 'sair' para terminar.)");
    printf("\nnome: ");
    fgets(endereços[i].nome,sizeof(endereços[i].nome),stdin);
    endereços[i].nome[strcspn(endereços[i].nome, "\n")] = '\0';
    if(strcmp(endereços[i].nome,"sair")==0){
        break;
    }
    printf("\nnumero: ");
    scanf("%d",&endereços[i].Telefone);
    getchar();
    contador++;
    } 
 
}
