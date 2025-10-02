#include <stdio.h>
int main() {
    char a, b;
    printf("digite dois caracteres: ");
    scanf("%c", &a); // note o espaço antes do %c
    getchar(); // limpando o buffer de memoria
    scanf("%c", &b);
    printf("\n\tVocê digitou: a = %c e b = %c\n", a, b);
    printf("\n\t a = %d b = %d\n", a, b); // exibindo os valores inteiros (ASCII)
    return 0;
   }