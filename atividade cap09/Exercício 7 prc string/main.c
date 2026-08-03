/*7. Peça uma frase ao usuário e conte quantas vogais aparecem nela, sem diferenciar maiúsculas e  minúsculas.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char frase[100];
    int i=0,contador=0;
    
    printf("insira a frase: ");
    fgets(frase,sizeof(frase),stdin);
    frase[strcspn(frase, "\n")] = '\0';//tirar o \n
    
    for(i=0;i<strlen(frase);i++){
        frase[i]=toupper(frase[i]);//colocar todas maiúsculas para não diferenciar
    }
    
    for(i=0;i<strlen(frase);i++){//verificar a quantidade de vogais
        if(frase[i]=='A' || frase[i]=='E' || frase[i]=='I' || frase[i]=='O' || frase[i]=='U'){
            contador++;
        }
    }
    printf("apresenta %d vogais",contador);

    return 0;
}
