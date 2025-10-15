#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    int main() {
        int valor1, valor2;

        printf("\n\tDigite o primeiro valor inteiro: ");
        scanf("%d", &valor1);
        printf("\n\tDigite o segundo valor inteiro: ");
        scanf("%d", &valor2);
        printf("\n\tValores antes do swap: \n\tValor 1: %d\n\tValor 2: %d\n", valor1, valor2);
        int copia = valor1;
        valor1 = valor2;
        valor2 = copia;
        printf("\n\tValores depois do swap: \n\tValor 1: %d\n\tValor 2: %d\n", valor1, valor2);
    }