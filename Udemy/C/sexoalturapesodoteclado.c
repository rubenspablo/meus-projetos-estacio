#include <stdio.h>
   int main() {
    // declarando variaveis
    char sexo;
    int idade;
    float peso, altura;

    // lendo dados do teclado
    printf("\n\tDigite seu sexo (F ou M), idade, peso e altura: ");
    scanf(" %c%d%f%f", &sexo, &idade, &peso, &altura);

    // exibindo os dados na tela
    printf("\n\tSexo: %c", sexo);
    printf("\n\tIdade: %d anos", idade);
    printf("\n\tPeso: %.2fkg", peso);
    printf("\n\tAltura: %.2fm\n", altura);
   return 0;
   }