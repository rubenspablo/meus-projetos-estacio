#include <stdio.h>

int main(){

 int numero1 = 5, resultado;

printf("Valor inicial de numero1: %d\n", numero1);

 resultado = ++numero1; // operador de pré-incremento

printf("Valor de resultado após pré-incremento: %d\n", resultado);
printf("Valor de numero1 após pré-incremento: %d\n", numero1);

resultado = numero1++; // operador de pós-incremento
printf("Valor de resultado após pós-incremento: %d\n", resultado);
printf("Valor de numero1 após pós-incremento: %d\n", numero1);

resultado = --numero1; // operador de pré-decremento
printf("Valor de resultado após pré-decremento: %d\n", resultado);
printf("Valor de numero1 após pré-decremento: %d\n", numero1);

resultado = numero1--; // operador de pós-decremento
printf("Valor de resultado após pós-decremento: %d\n", resultado);
printf("Valor de numero1 após pós-decremento: %d\n", numero1);
}