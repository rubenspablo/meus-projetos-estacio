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
    printf("Antes do incremento: %d\n", numero);
    numero++; // numero = numero + 1
    printf("Após incremento: %d\n", numero);
    numero--;
    printf("Após decremento: %d\n", numero);
  return 0;
}