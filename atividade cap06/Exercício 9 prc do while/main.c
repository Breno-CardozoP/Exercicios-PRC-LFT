
#include <stdio.h>

int main()
{
    int soma=0,codigo,valor;
    
    printf("-----menu-----");//menu
     printf("\n(1)Vendas à vista");
     printf("\n(2)vendas à prazo");
     printf("\n(3)Relatório de Compras");
     printf("\n(4)Fim");
     printf("\n\nCodigo: ");
    
    
   do{
        
       scanf("%d",&codigo);
        
       
       if(codigo==1||codigo==2){
        printf("\n\ninsira o valor da compra: R$");//codigo 1 e 2
        scanf("%d",&valor);
     }
      else if(codigo==3){
         printf("\n\nquantidade de compras á vista: 5 ");//codigo 3
         printf("\nquantidade de compras á prazo: 10 ");
     }
     else if(codigo==4){
         printf("\n\npercentual de compras a vista e a prazo: 50%");//codigo 4
     }
     else{
         printf("\n\nERRO");
         printf("\n\nse deseja escolher novamente digite 5 ou 4 se desejar sair.");//outro digito
         
     }
     if(codigo==5){
            printf("-----menu-----");//opção de repetição
     printf("\n(1)Vendas à vista");
     printf("\n(2)vendas à prazo");
     printf("\n(3)Relatório de Compras");
     printf("\n(4)Fim");
     printf("\n\nCodigo: ");}
     
     printf("\n\n");
     
     
   } while(codigo!=4);
   
    

    return 0;
}
