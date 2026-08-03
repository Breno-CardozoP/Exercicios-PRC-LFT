/*7. Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.*/
#include <stdio.h>

int valor(int num);//prototipo

int main()
{
    int num;
    printf("insira o valor: ");
    scanf("%d",&num);
    
    printf("%d fatorial é %d",num,valor(num));

    return 0;
}

int valor(int num){//função fatorial
    
    int fatorial=1;
    
    for(int i=1;i<=num;i++){
        
        fatorial*=i;
        
    }
    return fatorial;
}