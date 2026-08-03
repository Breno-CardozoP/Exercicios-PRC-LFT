/*5. Desenvolva um programa para uma loja, em que os preços das mercadorias apresentam descontos diferenciados pela  forma de pagamento. 
Escreva um programa que leia o tipo de pagamento e o preço da mercadoria e imprima o resultado  com desconto de acordo com a tabela abaixo: 
Forma de Pagamento Código percentual 
 Cartão de crédito 5 -10% 
 À Vista. Outro valor -20% 
*/
#include <stdio.h>
#include <string.h>//necessario para usar o strcmp

int main()
{
    float  preço, valorFinal;
    char Pagamento[20];
    //leitura
    printf("insira a forma de pagamento: ");
    scanf(" %[^\n]s", Pagamento);//%[^\n]=evitar erro de espaçamento
    
    printf("insira o preço da mercadoria: ");
    scanf("%f",&preço);
    
    //variavel
    if(strcmp(Pagamento,"Cartão de crédito")==0){ //strcmp= comparar strings
        valorFinal=preço-preço*0.05;
        printf("Valor a pagar: %f",valorFinal);
    }
    else if(strcmp(Pagamento,"À Vista")==0){
        valorFinal=preço-preço*0.1;
        printf("Valor a pagar: %f",valorFinal);
    }
    else{
        valorFinal=preço-preço*0.2;
        printf("Valor a pagar: %f",valorFinal);
    }

    return 0;
}
