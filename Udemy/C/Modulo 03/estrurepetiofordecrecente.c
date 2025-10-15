#include <stdio.h>
#include <stdlib.h>
    int main() { // estrutura de repetição for (para)
        printf("\t*** Estrutura de repetição for decrescente ***\n\n");
        printf("\tExemplo 1 - Contador de 10 a 1\n\n");
       int i;
        for (i = 10; i >= 1; i--) {
            printf("\t%d\n", i);
        }
         printf("\n\n");
        for (i = 10; i >= 1; i-=2) {
            printf("\t%d\n", i);
        }

        printf("\n\n");

        for (i = 1; i <= 10; i++) {
            printf("\t%d\n", i);
        }
            printf("\n\n");
            for (i = 0; i <= 10; i+=2) {
            printf("\t%d\n", i);
        }
        return 0;
    }