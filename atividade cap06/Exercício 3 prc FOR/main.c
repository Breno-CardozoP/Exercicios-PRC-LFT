
#include <stdio.h>

int main()
{
    int num,decimal=1,valor,binario,total=0;
    
    do{
    
    printf("Insira o numero binario: ");
    scanf("%d",&num);
    
    if(num<=1){//precisa ser binario
         
         for(;num>0;num/=10){//calculo
         
         binario=num%10;
         
         total+=decimal*binario;
         decimal*=2;
         
         
       }
     
    }
    else{
        printf("\nnão é binario");//caso não seja binario
        printf("\n\n");
    }
    }while(num>1);//inserir novamente
   printf("\nvalor decimal: %d",total);
   
    return 0;
}
