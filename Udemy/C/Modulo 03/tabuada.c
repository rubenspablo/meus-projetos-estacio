#include <stdio.h>
#include <stdlib.h>
    int main() {
        int i = 0;
        int tabuada = 0;        
        printf("Digite a tabuada que deseja calcular: ");
        scanf("%d", &tabuada);

        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", tabuada, i, tabuada * i);
        }

    }