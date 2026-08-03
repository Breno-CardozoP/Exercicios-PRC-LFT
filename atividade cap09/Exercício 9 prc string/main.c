/*9. Leia uma linha inteira usando getchar, sem exceder o tamanho do array, e mostre quantos caracteres  foram digitados. 
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100],c; 
    int i = 0; 

    printf("Digite uma frase: "); 
    
    while ((c = getchar()) != '\n' && i < 99){  //leitura da frase
    frase[i++] = c;
    } 
    
    frase[i] = '\0'; 
    
    printf("Você digitou: %s\n", frase);//frase completa
    printf("ele apresenta %d caracteres",i);//numero de caracteres


    return 0;
}
