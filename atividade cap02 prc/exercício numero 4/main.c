#include <stdio.h>
//definição e atribuião da constante antes do programa principal
#define MENSALIDADE 130
#define DESCONTO 30

void main(){  //programa principal
     int Valor_final;
    
    Valor_final = MENSALIDADE - DESCONTO;
    
    printf("MENSALIDADE: R$%d\n",MENSALIDADE); //exibição do valor da contante atribuida
    printf("DESCONTO: R$%d\n",DESCONTO);
    printf("Valor_final: R$%d\n", Valor_final); 
}