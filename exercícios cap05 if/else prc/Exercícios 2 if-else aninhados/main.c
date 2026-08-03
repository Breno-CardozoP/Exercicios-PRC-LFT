/*2. Desenvolva um programa para uma loja, em que os preços das mercadorias apresentam descontos pela forma de  pagamento. 
Escreva um programa para ler o tipo de pagamento e o preço da mercadoria e imprimir o resultado com desconto  de acordo com a tabela abaixo:  
Forma de Pagamento Código Percentual  
 Cartão de Crédito 5 -10%  
 À Vista 6 -20%  
 3 vezes 7 -5% 
*/
#include <stdio.h>

int main()
{
    int preço,preçoFinal,codigo;
    //leitura do preço
    printf("Insira o preço da mercadoria: ");
    scanf("%d",&preço);
    //leitura das formas de pagamento
    printf("\nEscolha a forma de Pagamento;");
    printf("\nCartão de Crédito--5\nÀ Vista--6\n3 vezes--7");
    printf("\ninsira o codigo da forma de Pagamento: ");
    scanf("%d",&codigo);
    //variações do codigo do produto
    if(codigo==5){
        preçoFinal=preço*0.9;
    }
    else if(codigo==6){
        preçoFinal=preço*0.8;
    }
    else if(codigo==7){
        preçoFinal=preço*0.95;
    }
    //valor final
    printf("Valor a pagar: R$%d",preçoFinal);

    return 0;
}
