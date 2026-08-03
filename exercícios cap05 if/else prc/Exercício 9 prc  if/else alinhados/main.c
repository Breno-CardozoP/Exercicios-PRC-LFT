/*9. Faça um programa para ler o último dígito da placa de um automóvel e imprimir o mês de pagamento do imposto, da  seguinte forma:  
1 - "Pagar imposto em janeiro"  
2 - "Pagar imposto em fevereiro"  
3 - "Pagar imposto em março"  
Qualquer outro valor - "pagar imposto em abril”  
*/
#include <stdio.h>

int main()
{
   long long placa,num;
    printf("Digite o numero da placa: ");
    scanf("%lld",&placa);
    
    num=placa % 10;
    
    if(num==1){
        printf("\nPagar imposto em janeiro: %d",num);
    }
    else if(num==2){
        printf("Pagar imposto em fevereiro: %d",num);
    }
    else if(num==3){
        printf("Pagar imposto em março: %d",num);
    }
    else{
        printf("pagar imposto em abril: %d",num);
    }
    

    return 0;
}
