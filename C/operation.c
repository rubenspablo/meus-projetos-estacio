#include <stdio.h>

int main() {
/*
 soma (+)
 subtração (-)
 multiplicação (*)
 divisão (/)
*/
int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

soma = numero1 + numero2;
subtracao = numero1 - numero2;
multiplicacao = numero1 * numero2;
divisao = numero1 / numero2;

printf("Digite o primeiro número: ");
scanf("%d", &numero1);
printf("Digite o numero 2: ");
scanf("%d", &numero2);

printf("Soma: %d\n", soma);
printf("Subtração: %d\n", subtracao);
printf("Multiplicação: %d\n", multiplicacao);
printf("Divisão: %d\n", divisao);

return 0;
}