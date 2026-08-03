/*3. Faça um programa que leia 3 valores representando as notas de um aluno. 
Informe a situação do aluno: Aprovado,  Reprovado ou Prova Final.  */
#include <stdio.h>

int main()
{
    int nota1,nota2,nota3,media;
    
    printf("insira as 3 notas: ");
    scanf("%d%d%d",&nota1,&nota2,&nota3);
    
    media=(nota1+nota2+nota3)/3;
    
    if(media<4){
        printf("\nReprovado");
    }
    else if(media>=6){
        printf("\nAprovado");
    }
    else if(4<media<6){
        printf("\nProva Final");
    }

    return 0;
}
