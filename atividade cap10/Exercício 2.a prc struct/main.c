/*Questão 2:
a) Faça um programa para ler os dados de 6 funcionários (matrícula, nome, cargo e salário)
de uma empresa e gerar uma relação daqueles que têm salários superiores à média geral
de salários.*/
#include <stdio.h>
#include <string.h>
typedef struct{//struct dos dados
    int matricula;
    char nome[40];
    char cargo[40];
    float salário;
}dados;

void imprimirRelação(dados D){
    printf("matricula: %d nome: %s cargo: %s salário: %.2f\n", D.matricula, D.nome, D.cargo, D.salário);//função para imprimir os resultados
}

float calculo(dados funcionários[6]);//prototipo

int main()
{
    int i=0;
    dados funcionários[6];
    float media=0;
    
    for(i=0;i<6;i++){//ler os dados
        printf("----insira os dados do %d* funcionário----",i+1);
        printf("\nmatricula: ");
        scanf("%d",&funcionários[i].matricula);
        getchar();//limpa o buffer(retira o \n deixado pelo scanf não atrapalhando a leitura das strings seguintes)
        
        printf("nome: ");
        fgets(funcionários[i].nome,sizeof(funcionários[i].nome),stdin);
        funcionários[i].nome[strcspn(funcionários[i].nome, "\n")] = '\0';
        
        printf("cargo: ");
        fgets(funcionários[i].cargo,sizeof(funcionários[i].cargo),stdin);
        funcionários[i].cargo[strcspn(funcionários[i].cargo, "\n")] = '\0';
        
        printf("salário: ");
        scanf("%f",&funcionários[i].salário);
    }
    
    media=calculo(funcionários);
    for(i=0;i<6;i++){//identificar quem esta acima da media e imprimi-los
        if(funcionários[i].salário>media){
           imprimirRelação(funcionários[i]);
        }
    }

    return 0;
}
//função do calculo da media
float calculo(dados funcionários[6]){
    float soma=0,media=0;
    int i=0;
    
    for(i=0;i<6;i++){
        soma+=funcionários[i].salário;
    }
    media=soma/6;
    
    return media;
    
}
