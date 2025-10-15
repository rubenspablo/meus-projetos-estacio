#include <stdio.h>
#include <stdlib.h>
    int main() {
        int num1, num2;

        printf("\n\t*** Seja bem vindo ao programa que calcula a soma de dois numeros inteiros ***\n");
        printf("\n\tDigite o primeiro número: ");
        scanf("%d", &num1);
        printf("\n\tDigite o segundo número: ");
        scanf("%d", &num2);
        int soma = num1 + num2;
        printf("\n\tA soma entre %d e %d é %d\n\n", num1, num2, soma);
                
    
    }