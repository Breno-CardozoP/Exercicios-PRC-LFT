/*c) Definir três registros para armazenarem informações sobre três funcionários. 
Cada  registro deve guardar a matrícula do funcionário (até 6 caracteres), 
o nome do funcionário  (até 40 caracieres) e o salário. 
Faça um programa para ler as três informações e imprimir as informações por ordem crescente de salário, 
com o seguinte formato: MATRÍCULA NOME SALÁRIO 
XXXXX YYYYYYYYYY ZZZ.ZZ 
XXXXX YYYYYYYYYY ZZZ.ZZ 
XXXXX YYYYYYYYYY ZZZ.ZZ
*/
#include <stdio.h>
#include <string.h>
   typedef struct{
        char matrícula[7];
        char nome[41];
        float salario;
    }infoFuncionarios;//struct
    
    void imprimir_info(infoFuncionarios F){
        printf(" matrícula: %s nome: %s salario: %.2f\n",F.matrícula ,F.nome ,F.salario);//função para imprimir
    }
    
int main(){
    infoFuncionarios F;
    infoFuncionarios funcionário_1;
    infoFuncionarios funcionário_2;
    infoFuncionarios funcionário_3;
    int i=0;
    
    printf("--insira as informações--");
    for(i=0;i<3;i++){
        if(i==0){
            menor=F.salario;
        }
        printf("\nfuncionario %d:",i+1);
        printf("\nmatricula: ");
        fgets(F.matrícula,sizeof(F.matrícula),stdin);
        F.matrícula[strcspn(F.matrícula, "\n")] = '\0';//leitura das informações
        printf("\nnome: ");
        fgets(F.nome,sizeof(F.nome),stdin);
        F.nome[strcspn(F.nome, "\n")] = '\0';
        printf("\nsalario: ");
        scanf("%f",&F.salario);
        getchar();
        
        if(i==0){
        strcpy(funcionário_1.matrícula,F.matrícula);//quardando as informações dos salarios para calculo
        strcpy(funcionário_1.nome,F.nome);
        funcionário_1.salario=F.salario;
        }
        else if(i==1){
        strcpy(funcionário_2.matrícula,F.matrícula);
        strcpy(funcionário_2.nome,F.nome);
        funcionário_2.salario=F.salario;
        }
        else{
        strcpy(funcionário_3.matrícula,F.matrícula);
        strcpy(funcionário_3.nome,F.nome);
        funcionário_3.salario=F.salario;
        }
    }
    
    
    printf("--informações--\n");
    //imprimindo na ordem crescente
    if (funcionário_1.salario <= funcionário_2.salario && funcionário_2.salario <= funcionário_3.salario) {
        imprimir_info(funcionário_1); imprimir_info(funcionário_2); imprimir_info(funcionário_3);
    }
    else if (funcionário_1.salario <= funcionário_3.salario && funcionário_3.salario <= funcionário_2.salario) {
        imprimir_info(funcionário_1); imprimir_info(funcionário_3); imprimir_info(funcionário_2);
    }
    else if (funcionário_2.salario <= funcionário_1.salario && funcionário_1.salario <= funcionário_3.salario) {
        imprimir_info(funcionário_2); imprimir_info(funcionário_1); imprimir_info(funcionário_3);
    }
    else if (funcionário_2.salario <= funcionário_3.salario && funcionário_3.salario <= funcionário_1.salario) {
        imprimir_info(funcionário_2); imprimir_info(funcionário_3); imprimir_info(funcionário_1);
    }
    else if (funcionário_3.salario <= funcionário_1.salario && funcionário_1.salario <= funcionário_2.salario) {
        imprimir_info(funcionário_3); imprimir_info(funcionário_1); imprimir_info(funcionário_2);
    }
    else {
        imprimir_info(funcionário_3); imprimir_info(funcionário_2); imprimir_info(funcionário_1);
    }
    
    
   }

