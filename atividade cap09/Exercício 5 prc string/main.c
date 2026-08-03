/*5. Solicite uma frase do usuário e gere uma sigla usando apenas a primeira letra de cada palavra.  
Mostre a sigla em letras maiúsculas. Use fgets e strlen.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char string[100],Letra[1],sigla[50];
    int contador=0;//contador para o tamanho da sigla
    
    printf("insira a frase\n");
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';//tirar o \n
    
    for(int i=0; i < strlen(string); i++){
        if(i==0){
            sigla[contador]=string[i];//pegar a primeira letra
            contador++;
        }
        
        if(string[i]==' '){
            sigla[contador]=string[i+1];//pegar a primeira letra de cada palavra
            contador++;
        }
    }
    
    for(int j = 0; j < strlen(sigla); j++){//transformar em letra maiuscula
        sigla[j]=toupper(sigla[j]);
    }
    
    printf("sigla = %s", sigla);
    

    return 0;
}
