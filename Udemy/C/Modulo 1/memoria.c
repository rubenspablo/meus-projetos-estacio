#include <stdio.h>
int main() {
    // Overflow de variaveis
    int a, b, c;
    a = 2147483647;
    b = 1;
    c = a + b;
    printf("\n\tValor de a: %d\n\tValor de b: %d\n\tValor de c: %d\n", a, b, c);
    return 0;
}