#include <stdio.h>

int main() {
/*
 soma (+)
 subtração (-)
 multiplicação (*)
 divisão (/)
*/
int numero1, numero2;
int soma, subtracao, multiplicacao;
float divisao;

printf("Digite o primeiro número: ");
scanf("%d", &numero1);

printf("Digite o segundo número: ");
scanf("%d", &numero2);


// operação soma
soma = numero1 + numero2;

// operação subtração
subtracao = numero1 - numero2;

// operação multiplicação
multiplicacao = numero1 * numero2;

// operação divisão
divisao = (float)numero1 / numero2;

printf("A soma é: %d\n", soma);
printf("A subtração é: %d\n", subtracao);
printf("A multiplicação é: %d\n", multiplicacao);
printf("A divisão é: %.2f\n", divisao);

return 0;
}