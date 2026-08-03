#include <stdio.h>
int main()
{
    int lado,i=0,j=0,k=0;
    
    printf("insira o numero entre 1 e 20: ");
    scanf("%d",&lado);
    
for (int i = 0; i < lado; i++) {
    for (int j = 0; j < lado; j++) {
        // Se for a primeira ou última linha OU primeira ou última coluna
        if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1) {
            printf("*");
        } else {
            printf(" "); // Espaço no meio
        }
    }
    printf("\n");
}
return 0;
}