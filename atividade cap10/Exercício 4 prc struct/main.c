/*Faça um programa em C para controlar o estoque de uma empresa. Para cada peça, devem ser 
armazenados os seguintes dados: código, nome e quantidade. As informações serão mantidas em um  vetor de 70 posições. 
O programa deve apresentar o seguinte menu: 
(1) Entrada de peças 
(2) Saída de peças 
(3) Relatório das peças 
(4) Fim 
Regras importantes: 
- Ao escolher Entrada de peças, o programa deve verificar se a peça já existe no vetor: - Se existir, aumenta a quantidade armazenada. 
- Caso contrário, adiciona uma nova peça no vetor. 
- Ao escolher Saída de peças, o programa deve verificar se a quantidade disponível é suficiente antes  
de reduzir o estoque. Não é permitido quantidade negativa. 
- Utilize o conceito de modularidade e implemente as funções independentes de variáveis globais
*/
#include <stdio.h>
#include "estoque.h"
int main()
{
    estoqueEmpresa p[70];
    int total=0,entrada;
    //imprimir Menu
    do{
    printf("-----Estoque-----");
    printf("\n(1) Entrada de peças\n(2) Saída de peças\n(3) Relatório das peças\n(4) Fim\n");
    scanf("%d",&entrada);
    
    //possibilidades
    if(entrada==1){
        entradaDePeças(p,&total);
    }
    else if(entrada==2){
        saidaDePeças(p, &total);
    }
    else if(entrada==3){
        relatorioDePeças(p, &total);
    }else{
        printf("opção invalida");
    }
    }while(entrada!=4);

    return 0;
}