/*10. Escreva um procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. Se a letra for A o
procedimento calcula a média aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2).*/
#include <stdio.h>
#include <stdbool.h>

double media(char letra);//protótipo

int main()
{
    char letra;
    float nota1,nota2,nota3,mediaA,mediaP;
    
     printf("insira as notas e precione (A) para media aritmética ou (P) para media ponderada: ");
     scanf("%f%f%f%c",&nota1,&nota2,&nota3,&letra);
   
   //calculo das medias
  if(letra=='A'|| letra=='a'){
       
       printf("media aritmética: %.2f",media(letra));
       
   }else{
      
        printf("media ponderada: %.2f",mediaP);
   }
   

    return 0;
}

double media(char letra){ //função para identificar o tipo de media
    
    float nota1,nota2,nota3,mediaA=0,mediaP=0;
    
     if(letra=='A'|| letra=='a'){
    mediaA=(nota1+nota2+nota3)/3;
     }
     else{
    mediaP=(nota1*5+nota2*3+nota3*2)/10;
     }
    
    return mediaA;
    
    
}