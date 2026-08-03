/*8. Faça um programa que efetue a leitura de 3 valores (A, B e C) para os coeficientes de uma equação de segundo grau. A  seguir, 
o programa deve calcular e apresentar as raízes desta equação, se para os valores informados for possível efetuar o  referido cálculo. 
Informar também a classificação das raízes (“raízes não-reais” quando delta < 0; “raiz única” quando delta =  0 e “raízes distintas” quando delta > 0).*/
#include <stdio.h>
#include <math.h>

int main()
{
   
    double delta,A,B,C,x1,x2;
    printf("Insira 3 valores: ");
    scanf("%lf%lf%lf",&A,&B,&C);
    
    delta=(B*B)-(4*A*C);
    
    if(delta<0){
        printf("\nraiz não real");
    }
    else if(delta==0){
        x1=-B/(2*A);
        printf("\nraiz unica: x=%.2lf",x1);
    }
    else if(delta>0){
        x1=(-B+sqrt(delta))/(2*A);
        x2=(-B-sqrt(delta))/(2*A);
        printf("\nraiz distinta: x1=%.2lf",x1);
        printf("\nraiz distinta: x2= %.2lf",x2);
    }
    

    return 0;
}
