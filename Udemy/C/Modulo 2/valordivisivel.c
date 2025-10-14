#include <stdio.h>
#include <stdlib.h>
    int main() {
        int num;

        printf("\tDigite um numero inteiro: ");
        scanf("%d", &num);

        if (num % 2 == 0 && num % 3 == 0 && num % 5 == 0) {
            printf("\n\tO numero %d e divisivel por 2, 3 e 5\n\n\n", num);
        } else if (num % 2 == 0 && num % 3 == 0) {
            printf("\n\tO numero %d e divisivel por 2 e 3\n\n\n", num);
        } else if (num % 2 == 0 && num % 5 == 0) {
            printf("\n\tO numero %d e divisivel por 2 e 5\n\n\n", num);
        } else if (num % 3 == 0 && num % 5 == 0) {
            printf("\n\tO numero %d e divisivel por 3 e 5\n\n\n", num);
        } else {
             if (num % 2 == 0) {
                printf("\n\tO numero %d e divisivel por 2\n\n\n", num);
             } else if (num % 3 == 0) {
                printf("\n\tO numero %d e divisivel por 3\n\n\n", num);
             } else if (num % 5 == 0) {
                printf("\n\tO numero %d e divisivel por 5\n\n\n", num);
             } else {
                printf("\n\tO numero %d nao e divisivel por 2, 3 e 5\n\n\n", num);
             }
        }

    }