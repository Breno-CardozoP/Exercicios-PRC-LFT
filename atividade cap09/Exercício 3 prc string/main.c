/*3. Peça duas palavras ao usuário e verifique se elas são iguais. 
Caso não sejam, informe qual vem  antes na ordem alfabética. Use strcmp para a comparação.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char word1[50],word2[50];
    
    printf("insira as duas palavras:\n");
    
    printf("1*: ");
    fgets(word1, sizeof(word1), stdin);
    word1[strcspn(word1, "\n")] = '\0';//tirar o \n
    
    printf("2*: ");
    fgets(word2, sizeof(word2), stdin);
    word2[strcspn(word2, "\n")] = '\0';//tirar o \n
    
//verificar posição lexical e a possivel igualdade    
    if(strcmp(word2,word1)==0){
        printf("as palavras são iguais");
    }else if(strcmp(word1,word2)<0){
        printf("a palavra '%s' vem antes na ordem alfabética",word1);
    }else{
        printf("a palavra '%s' vem antes na ordem alfabética",word2);
    }
    
    
    return 0;
}
