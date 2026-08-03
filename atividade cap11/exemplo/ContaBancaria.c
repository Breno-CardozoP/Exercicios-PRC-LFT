/*conta bancaria C*/
#include <stdio.h>
#include "ContaBancaria.h"

contaBancaria incializa(int numero, double saldo) {
	contaBancaria conta;
	conta.numero = numero;
	conta.saldo = saldo;
	return conta;
}
contaBancaria deposito(contaBancaria conta, double valor) {
	conta.saldo += valor;
	return conta;
}
contaBancaria saque(contaBancaria conta, double valor) {
	conta.saldo -+ valor;
	return conta;
}
void imprime(contaBancaria conta) {
	printf("numero: %d\n",conta.numero);
	printf("saldo: %.2f\n",conta.saldo);