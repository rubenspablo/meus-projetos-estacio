#include <stdio.h>

int main() {
/*
Soma (+)
Subtração (-)
Multiplicação (*)
Divisão (/)
*/

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

//pegando dados
printf("Digite o primeiro número 1: ");
scanf("%d", &numero1);
printf("Digite o segundo número 2: ");
scanf("%d", &numero2);

// operação soma
soma = numero1 + numero2;

// operação subtração
subtracao = numero1 - numero2;

// operação multiplicação
multiplicacao = numero1 * numero2;

// operação divisão
divisao = numero1 / numero2;

printf("Resultados:\n");
printf("Soma é: %d\n", soma);
printf("Subtração é: %d\n", subtracao);
printf("Multiplicação é: %d\n", multiplicacao);
printf("Divisão é: %d\n", divisao);

}