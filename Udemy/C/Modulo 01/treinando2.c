#include <stdio.h>
    int main() {
        int idade;
        float altura, peso;

        printf("\n\t Qual sua idade, altura e peso:\n");
        scanf("%d%f%f", &idade, &altura, &peso);

        printf("\n\t Idade: %d", idade);
        printf("\n\t Altura: %.2f", altura);
        printf("\n\t Peso: %.2f\n", peso);

    }