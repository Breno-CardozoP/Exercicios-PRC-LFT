#include <stdio.h>

int main()
{
    int negativo=0,soma=0,num,max=20;
    
   printf("insira os numeros(max=20): ");
   
   do{
       scanf("%d",&num);
       
       soma++;//maximo de caracteres
       
       if(num<<0){
           negativo++;//contabilizar os negativos
       }
       if(num==-99){//não contar o -99
           negativo--;
       }
        if(negativo==-1){//caso não tenha negativos e finalize com -99
           negativo=0;
       }
       
   }while(num!=-99 && soma<max);//finalizar com -99 e com o maximo de caracteres
   
   printf("total de numeros negativos: %d",negativo);
   
    return 0;
}
