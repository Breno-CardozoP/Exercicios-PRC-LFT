
#include <stdio.h>

int main()
{
    int a,b,c,total=0;
    
    for(a=1;a<500;a++){//verificando valores do cateto a
        for(b=a+1;b<500;b++){//verificando valores do cateto a
            for(c=b+1;c<500;c++){//verificando valores do cateto a
                if(c*c==a*a+b*b){//testendo se os valores cabem na formula
                    total++;//contador
                }
            }
        }
    }
    
    
    printf("total de triplices: %d",total);

    return 0;
}
