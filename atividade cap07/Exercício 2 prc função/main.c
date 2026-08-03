/*2. Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em
dias.*/
#include <stdio.h>

int idade(int anos,int meses,int dias);//prototipo

int main()
{
    int anos,meses,dias;
    printf("insira sua idade completa(anos, meses e dias): ");
    scanf("%d%d%d",&anos,&meses,&dias);
    
    printf("Sua idade em dias: %d ",idade(anos,meses,dias));

    return 0;
}
//função dias
int idade(int anos,int meses,int dias){
    
    return anos*365+meses*30+dias;
}
