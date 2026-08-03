/*b) Faça um programa que leia 7 códigos de profissão e o respectivo nome da profissão. Em
seguida, leia um número indeterminado de códigos e informe, para cada código lido, o nome
da profissão correspondente. Elabore uma função para retornar o nome da profissão.*/
#include <stdio.h>
#include <string.h>
typedef struct{
    int codigo;
    char nome[40];//struct profissão
}profissão;

char* AcharProfissão(profissão lista[7], int NovoCodigo);//prototipo

int main()
{
    profissão lista[7];
    int NovoCodigo;
    int i=0;
    
    for(i=0;i<7;i++){
        printf("insira o %d* codigo: ",i+1);//leitura dos codigos e profissões correspondente
        scanf("%d",&lista[i].codigo);
        getchar();
        printf("insira a profissão correspondente: ");
        fgets(lista[i].nome,sizeof(lista[i].nome),stdin);
        lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0';
    }
    
    printf("\n----codigos para busca(digite 0 para sair)-----");//leitura e printar a profissão correspondente ao codigo
    while(1){
        printf("insira o codigo para busca: ");
        scanf("%d",&NovoCodigo);
        
        if(NovoCodigo==0) {
            printf("Programa encerrado.\n");
            break;
        }
        printf("%s",AcharProfissão(lista, NovoCodigo));
    }
  

    return 0;
}
//função para descobrir a função correspondente ao codigo;
char* AcharProfissão(profissão lista[7], int NovoCodigo){
    int i=0,j=0,k=0;
    
    for(i=0;i<7;i++){
        if(lista[i].codigo==NovoCodigo){
            return lista[i].nome;
    }
}
return "sem profissão correspondente.";
}
