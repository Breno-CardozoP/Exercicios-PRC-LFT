	/*exemplo conta bancaria*/
#include <stdio.h>

typedef struct {
    int numero;
    double saldo;
    }contaBancaria;
    
    contaBancaria inicializa(int numero, double saldo);
    contaBancaria deposito(contaBancaria conta, double valor);
    contaBancaria saque(contaBancaria conta, double valor);
    void imprime(contaBancaria conta);

