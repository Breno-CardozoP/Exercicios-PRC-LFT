
#include <stdio.h>

//função que dobra o valor recebido
void dobrar(int n){
    n = n*2;//modifica apenas a copia loca
    printf("Dentro da função: n= %d\n",n);
}

int main()
{
    int numero=7;
    dobrar(numero);//passa por valor
    printf("Fora da função: numero= %d\n",numero);//original não muda

    return 0;
}
