/*6. Leia uma palavra do usuário e imprima a palavra invertida. Use strlen para percorrer a palavra de trás  para frente.*/
#include <stdio.h>
#include <string.h>
int main()
{
    char word[50],inverso[50];
    int contador=0;
    
    printf("insira a palavra: ");
    fgets(word,sizeof(word),stdin);
    word[strcspn(word, "\n")] = '\0';//tirar o \n
    
    for(int i=strlen(word)-1; i >= 0; i--){//inversão, -1 pois começa no 0
        inverso[contador]=word[i];
        contador++;
    }
    
    printf("inverso: %s",inverso);
    
    return 0;
}
    
    /*for(int i=0; i<strlen(word); i++){
        for(int j=0; j<strlen(word); j++){
            if(word[j]=='\0'){
                last=word[j-contador];
                spot=j-contador;
                contador++;
            }
        }
        word[spot]=word[i];
        word[i]=last;
    }*/

    
