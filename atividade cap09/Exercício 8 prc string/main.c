/*8. Peça uma frase e substitua a primeira ocorrência da letra “C” por “C++”. Mostre a frase modificada.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char frase[100],parte1[50],parte2[50];
    int i=0,indice=0,j=0,k=0;
    
    printf("insira a frase: ");
    fgets(frase,sizeof(frase),stdin);
    frase[strcspn(frase, "\n")] = '\0';//tirar \n
    
    for(i=0;i<strlen(frase);i++){
        frase[i]=toupper(frase[i]);//deixar a frase igual, não variar entre c ou C
    }
    
    for(i=0;i<strlen(frase);i++){//identificar a posição do primeiro C e quardar a parte da frase até ele
        parte1[i] = frase[i];
        if(frase[i]=='C'){
            indice=i;
           break;
        }
    }

    strcat(parte1,"++");//transformar o C em C++
    
    for(j = indice+1; j < strlen(frase); j++){//quardar a segunda parte da frase após o C
            parte2[k] = frase[j];
            k++;
    }
  
   strcat(parte1,parte2);//juntar as duas partes
 
    printf("\nfrase modificada: %s",parte1);//imprimir

    return 0;
}
