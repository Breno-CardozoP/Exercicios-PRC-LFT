/*8. Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse
valor.*/
#include <stdio.h>

int valor(int num);//prototipo

int main()
{
    int num;
    printf("insira o número: ");
    scanf("%d",&num);
    
	printf("O número %d apresenta %d divisores",num,valor(num));

	return 0;
}

int valor(int num){//função do numero de divisores
    int divisores=0;
    
for(int i=1; i<=num; i++) {
    
	if(num%i==0) {
		divisores++;
	}
	
}
return divisores;
}