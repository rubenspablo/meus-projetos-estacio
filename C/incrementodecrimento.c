#include <stdio.h>

int main() {

  /*
  Incremento (++)
  Pré-Incremento (++variavel)
  Pós-Incremento (variavel++)
  Decremento (--)
  Pré-Decremento (--variavel)
  Pós-Decremento (variavel--)
  */
    int numero = 1;
    int resultado;
    resultado = numero++;
    printf("Antes do incremento: %d\n", numero);
    numero++; // numero = numero + 1
    printf("Após incremento: %d\n", numero);
    numero--;
    printf("Após decremento: %d\n\n", numero);
    resultado = ++numero; // Pré-incremento
    printf("Resultado do pré-incremento: %d\n", resultado);
    resultado = numero++; // Pós-incremento
    printf("Resultado do pós-incremento: %d\n", resultado);

  return 0;
}