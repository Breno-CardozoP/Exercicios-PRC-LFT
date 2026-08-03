/*5) Faça um programa C que crie dois vetores com 20 valores cada, 
leia valores para estes conjuntos e imprima quantas vezes os valores pertencentes ao primeiro vetor
foram encontrados no segundo.
Elemento 1 aparece 3 vezes
Elemento 2 aparece 2 vezes*/
#include <stdio.h>
#define tamanho 20

int main()
{
    int num1,num2,vetor1[tamanho],vetor2[tamanho],igual[tamanho],contador;
    int i=0,j=0;
    
    for(;i<tamanho;i++){
        printf("insira o %d* valor do primeiro vetor 1: ",i+1);//preenchendo o primeiro vetor
        scanf("%d",&num1);
        vetor1[i]=num1;
        contador=0;
    }
    
    for(;j<tamanho;j++){
         printf("\n\ninsira o %d* valor do primeiro vetor 2: ",j+1);//preenchendo o segundo vetor
         scanf("%d",&num2);
         vetor2[j]=num2;
    }
    
    for(i=0;i<tamanho;i++){//comparando os dois vetores
        contador=0;
        
        for(j=0;j<tamanho;j++){
            
          if(vetor2[j]==vetor1[i]){
             contador++;
         }
     }
    printf("O numero %d aparece %d vezes no segundo vetor.\n", vetor1[i],contador);
}

    return 0;
}
