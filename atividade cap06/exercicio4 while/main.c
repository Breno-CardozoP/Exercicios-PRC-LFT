/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int soma=0,i=1,num;
    
    while(i<=30){
         printf("insira os numeros:");
            scanf("%d",&num);
        if(i%2!=0){
            soma=soma+num;
            
           
        }
        
        i++;
        
        
        
    }
    printf("resultado: %d",soma);

    return 0;
}
