/*4. Faça um programa que solicite o sexo do usuário (M ou F) e a 
seguir informe a mensagem “homem”, “mulher" e “letra  inválida”. */
#include <stdio.h>

int main()
{
    
    char S;
    printf("Insira o seu sexo. Utilizando as letras 'M'(masculino)e'F'(feminino): ");
    scanf("%c",&S);
    
    if(S=='M'){
        printf("Homem");
    }
    else if(S=='F'){
        printf("Mulher");
    }
    else{
        printf("Letra inválida");
    }

    return 0;
}
