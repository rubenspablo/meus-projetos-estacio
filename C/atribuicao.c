#include <stdio.h>

int main() {

  /*
       Atribuição Simples(=)
       Atribuição de Soma (+=)
       Atribuição de Subtração (-=)
       Atribuição de Multiplicação (*=)
       Atribuição de Divisão (/=)
  */
 int numero1, numero2, resultado;

 resultado = 10;
 printf("Resultado é: %d\n", resultado);

 resultado += 5; // resultado = resultado + 5
 printf("Resultado é: %d\n", resultado);

 resultado -= 8; // resultado = resultado - 8
 printf("Resultado é: %d\n", resultado);

 resultado *= 2; // resultado = resultado * 2
 printf("Resultado é: %d\n", resultado);

 resultado /= 2; // resultado = resultado / 2
 printf("Resultado é: %d\n", resultado);

  return 0;   
    
}