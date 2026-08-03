
#include <stdio.h>

int main()
{
    int i=1,soma=0,num,maior1=0,maior2=0;
    
    printf("insira os numeros: ");
    
    while(i<=4){
        scanf("%d",&num);
        
        if (num > maior1) {//maior numero
             
             maior2 = maior1; 
              
             maior1 = num;    
          } else if (num > maior2 && num != maior1) {//segundo maior
            
          maior2 = num;
           }
     i++;
    }
printf("\nmaior numero: %d",maior1);
printf("\nsegundo maior numero: %d",maior2);
    return 0;
}
