//exemplo função 4
#include <stdio.h>

//prototipo das funções
double calcularAreaRetangulo(double base,double altura);
double calcularPerimetroRetangulo(double base,double altura);
double calcularAreaCirculo(double raio);
double calcularPerimetroCirculo(double raio);

int main()
{
    double base,altura,raio;
    
    //retangulo
    printf("Digite a base do retangulo: ");
    scanf("%lf",&base);
    printf("Digite a altura do retangulo: ");
    scanf("%lf",&altura);
    
    printf("Area do retangulo: %.2f\n",calcularAreaRetangulo(base,altura));
     printf("Perimetro do retangulo: %.2f\n",calcularPerimetroRetangulo(base,altura));
     
     //circulo
     printf("Digite o raio do circulo: ");
     scanf("%lf",&raio);
     
       printf("Area do circulo: %.2f\n",calcularAreaCirculo(raio));
     printf("Perimetro do circulo: %.2f\n",calcularPerimetroCirculo(raio));

    return 0;
}
//função do retangulo
double calcularAreaRetangulo(double base,double altura){
return base*altura;
}
double calcularPerimetroRetangulo(double base,double altura){
return 2*(base+altura);
}
//função do circulo 
double calcularAreaCirculo(double raio){
const double PI=3.14;
return PI*(raio*raio);
}
double calcularPerimetroCirculo(double raio){
const double PI=3.14;
return 2*PI*raio;
}