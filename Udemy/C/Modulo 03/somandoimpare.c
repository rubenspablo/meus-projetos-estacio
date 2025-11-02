#include <stdio.h>
#include <stdlib.h>
    int main() {
        int x = 0;
        // somar numaros impares de 1 ate 1000
        for (int i = 1; i <= 1000; i++) {
            if (i % 2 != 0) {
                x += i;
            }
        }
        printf("A soma dos numeros impares de 1 a 1000 e: %d\n", x);
        return 0;
    }