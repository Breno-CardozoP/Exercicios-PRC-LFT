/*6. Faça um programa para ler um número inteiro e imprimir se ele é divisível por 2, divisível por 3, pelos 2 números ou por  nenhum dos dois.  
*/
#include <stdio.h>

int main()
{
    int numero;
    
    printf("Insira um número qualquer para checar sua divisibilidade por 2 e 3: ");
    scanf("%d",&numero);
    
    //checar se o resto das divisões é 0
 if(numero % 2==0 && numero % 3==0){ 
        printf("\nÉ divisível por 2 e 3");
    }
    else if(numero % 2==0){
        printf("\nÉ divisível por 2");
    }
    else if(numero % 3==0){
        printf("\nÉ divisível por 3");
    }
   
    else{
        printf("\nNão é divisivel por nenhum dos 2");
    }

    return 0;
}
