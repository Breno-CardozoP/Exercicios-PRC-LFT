/*10. Faça um programa para entrar com um valor e dizer a qual mês do ano o mesmo corresponde. 
Se o valor for maior que  doze e menor que 1, avise que o valor não corresponde a nenhum mês. Exemplo: 3 = março
*/
#include <stdio.h>

int main()
{
    int mes;
    printf("Digito o valor: ");
    scanf("%d",&mes);
    
    if(mes==1){
        printf("\nJaneiro");
    }
    else if(mes==2){
        printf("\nFevereiro");
    }
    else if(mes==3){
        printf("\nMarço");
    }
    else if(mes==4){
        printf("\nAbril");
    }
    else if(mes==5){
        printf("\nMaio");
    }
    else if(mes==6){
        printf("\nJunho");
    }
    else if(mes==7){
        printf("\nJulho");
    }
    else if(mes==8){
        printf("\nAgosto");
    }
    else if(mes==9){
        printf("\nSetembro");
    }
     else if(mes==10){
        printf("\nOutubro");
    }
     else if(mes==11){
        printf("\nNovembro");
    }
     else if(mes==12){
        printf("\nDesembro");
    }
    else{
        printf("O valor não corresponde a nenhum mês");
    }

    return 0;
}
