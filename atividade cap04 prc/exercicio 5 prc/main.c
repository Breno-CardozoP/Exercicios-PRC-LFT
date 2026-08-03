/*5.Faça um programa que leia as 4 notas de um aluno e a seguir calcule a média ponderada destas notas assumindo pesos respectivos de 1,  2, 3 e 4. 
*/
#include <stdio.h>

int main()
{
    float nota1,nota2,nota3,nota4,media;
    
    printf("Nota 1: ");
    scanf("%f",&nota1);
    
    printf("\nNota 2: ");
    scanf("%f",&nota2);
    
    printf("\nNota 3: ");
    scanf("%f",&nota3);
    
    printf("\nNota 4: ");
    scanf("%f",&nota4);
    
    media=(nota1*1+nota2*2+nota3*3+nota4*4)/10;
    
    printf("\nMédia: %.2f",media);

    return 0;
}
