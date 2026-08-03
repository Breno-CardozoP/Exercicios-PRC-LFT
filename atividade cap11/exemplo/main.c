/**/
#include <stdio.h>
#include "ContaBancaria.h"

int main(){
    contaBancaria conta1;
    
    conta1 = inicializa(918556, 300.00);
    
    printf("antes de movimentação:\n");
    imprime(conta1);
    
    conta1 = deposito(conta1, 50.00);
    
    conta1 = saque(conta1, 70.00);
    
    printf("\nDepois da movimentação:\n");
    imprime(conta1);

    return 0;
}