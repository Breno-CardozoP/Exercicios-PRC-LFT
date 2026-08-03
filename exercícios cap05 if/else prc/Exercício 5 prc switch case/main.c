/*5. Faça um programa C que mostre o menu abaixo: 
 1. Cálculo da área do quadrado 
 2. Cálculo da área do círculo 
 Opção: 
Caso o usuário escolha a opção 1, o programa deve solicitar o valor do lado do quadrado e mostrar o resultado (ÁREA DO  QUADRADO = LADO * LADO ). 
Caso o usuário escolha a opção 2, o programa deve solicitar o valor do raio do cireulo e mostrar o resultado (ÁREA DO  CÍRCULO = P| * RAIO * RAIO ). 
Caso o usuário escolha qualquer outra opção, o programa deve mostrar a mensagem "OPÇÃO INVÁLIDA".
*/
#include <stdio.h>

int main()
{
    int OPÇÃO,area,lado,pi;
    //menu
    printf("1. Cálculo da área do quadrado");
    printf("\n2. Cálculo da área do círculo");
    printf("\nOpção: ");
    scanf("%d",&OPÇÃO);
    
    pi=3;
    
    switch(OPÇÃO){
        case 1://area do quadrado
        printf("Insira o valor do lado: ");
        scanf("%d",&lado);
        area=lado*lado;
        printf("Área= %d",area);
        break;
        
        case 2://area do circulo
        printf("Insira o valor do raio:");
        scanf("%d",&lado);
        area=pi*(lado*lado);
        printf("Área= %d",area);
        break;
        
        default:printf("OPÇÃO INVÁLIDA");
    }

    return 0;
}
