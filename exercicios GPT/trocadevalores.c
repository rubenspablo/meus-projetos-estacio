#include <stdio.h>
#include <stdlib.h>
    int main() {
        int a, b, tem;
        printf("\n\t*** Seja bem vindo ao programa que troca os valores de duas variaveis ***\n");
        printf("\n\tDigite o valor de A: ");
        scanf("%d", &a);
        printf("\n\tDigite o valor de B: ");
        scanf("%d", &b);
        printf("\n\tOs valores iniciais são A = %d e B = %d\n", a, b);
        tem = a;
        a = b;
        b = tem;
        printf("\n\tOs valores trocados são A = %d e B = %d\n\n", a, b);
        return 0;

                
    
    }