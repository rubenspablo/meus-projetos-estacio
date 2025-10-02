#include <stdio.h>
int main() {
    char a, b;
    printf("digite dois caracteres: ");
    scanf("%c %c", &a, &b); // note o espaço antes do %c
    printf("\n\tvoce digitou: a = %c e b = %c\n", a, b);
    printf("\n\t a = %d b = %d\n", a, b); // exibindo os valores inteiros (ASCII)
    return 0;
   }
