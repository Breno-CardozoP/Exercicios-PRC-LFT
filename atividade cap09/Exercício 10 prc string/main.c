/*10.Leia duas palavras do usuário, informe se são iguais ou qual vem primeiro na ordem alfabética e  
depois junte-as em uma única string e mostre o resultado.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char word_1[50],word_2[50];
    
    printf("insira a primeira palavra: ");//primeira palavra
    fgets(word_1,sizeof(word_1),stdin);
    word_1[strcspn(word_1, "\n")] = '\0';//tirar o \n
    
    printf("\ninsira a segunda palavra: ");//segunda palavra
    fgets(word_2,sizeof(word_2),stdin);
    word_2[strcspn(word_2, "\n")] = '\0';//tirar o \n
    
    //comparações(caso seja igual e sua ordem lexical)
    if(strcmp(word_1,word_2)==0){
        printf("\nsão palavras iguais.");
        printf("\n%s",strcat(word_1, word_2));
    }
    else if(strcmp(word_1,word_2)>0){
        printf("\na palavra '%s' vem primeira na ordem alfabética.",word_2);
        printf("\n%s",strcat(word_1, word_2));
    }else{
        printf("\na palavra '%s' vem primeira na ordem alfabética.",word_1);
        printf("\n%s",strcat(word_2, word_1));
    }
    
    return 0;
}
