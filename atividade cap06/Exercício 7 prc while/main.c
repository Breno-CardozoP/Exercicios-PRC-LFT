
#include <stdio.h>

int main()
{
    int num,i=1,soma=0;
    
    while(i<=25){
        printf("insira os valores: ");
        scanf("%d",&num);
        if(num<0){
            num=1;
            soma=soma+num;
        }
        i++;
    }
    printf("quantidade de valores: %d",soma);

    return 0;
}
