#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = -5;

    if (x > 0) {
        printf("x é positivo\n");

        if (x < 20) {
            printf("x é menor que 20\n");

            if (x % 2 == 0) {
                printf("x é par\n");
            } else {
                printf("x é ímpar\n");
            }
        }
    } else {
        printf("x é negativo\n");
    }

    printf("Fim do programa\n");
    return 0;
}
