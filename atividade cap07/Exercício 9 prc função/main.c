/*9. Escreva uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o somatório desse valor.*/
#include <stdio.h>

int somatório(int num);protótipo

int main()
{
    int num;
    printf("insira o número: ");
    scanf("%d",&num);
    
	printf("O número %d apresenta o somatório de %d",num,somatório(num));

	return 0;
}
int somatório(int num){//função do somatório
    int soma=0;
    for(int i=0;i<=num;i++){
        soma+=i;
    }
    return soma;
}