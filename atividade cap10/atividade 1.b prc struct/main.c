/*b) Definir uma estrutura para conter a avaliação de um aluno na disciplina de ED. A
estrutura deve conter a matrícula do aluno (até 10 caracteres), o nome do aluno (até 40
caracteres) e três notas. Faça um programa para ler as informações e mostrá-las
juntamente com um aviso sobre a situação do aluno (APROVADO, REPROVADO ou
DEPENDÊNCIA).*/
#include <stdio.h>
#include <string.h>
int main()
{
   
   typedef struct {
   
        char matrícula[10];
        char nome[40];
        float nota1,nota2,nota3,notaFinal;
        
    }avaliacao;
    
    avaliacao AV;
    
    printf("insira matrícula do aluno: ");
    fgets(AV.matrícula, 10 , stdin);
    printf("insira o nome do aluno: ");
    fgets(AV.nome, 40 , stdin);
    printf("\n-----insira as notas----\n");
    printf("1*nota: ");
    scanf("%f",&AV.nota1);
    printf("2*nota: ");
    scanf("%f",&AV.nota2);
    printf("3*nota: ");
    scanf("%f",&AV.nota3);
    
    AV.notaFinal=(AV.nota1+AV.nota2+AV.nota3)/3;
    
    printf("media igual a %.2f",AV.notaFinal);
    
    if(AV.notaFinal>6){
        printf("aluno APROVADO");
    }else if(AV.notaFinal<4){
        printf("\nREPROVADO");
    }else{
        printf("\nDEPENDÊNCIA");
    }

    return 0;
}
