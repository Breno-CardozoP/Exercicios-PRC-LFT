/*3. Faça uma função que verifique se um valor é perfeito ou não. Um valor é dito perfeito quando ele é igual a
soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A
função deve retornar um valor booleano.*/
#include <stdio.h>
#include <stdbool.h>
bool valor(int num);//prototipo

int main()
{
    int num;
    printf("insira o valor: ");
    scanf("%d",&num);
    
    if(valor(num)==true){
        printf("o valor é perfeito.");
    }
    else{
        printf("o valor é imperfeito.");
    }
    

    return 0;
}

//função valor perfeito
bool valor(int num){
    int soma=0;
    for(int i=1;soma<num;i++){//verificar os divisores
        
        if(num%i==0){
            soma+=i;
        }
       
    }
    if(soma==num){//verificar se é perfeito
        return true;
    }
    else{
        return false;
    }
}