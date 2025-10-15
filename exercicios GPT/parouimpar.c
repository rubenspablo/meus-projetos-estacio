#include <stdio.h>
#include <stdlib.h>
    int main() {
        int num;
        printf("\n\t*** Seja bem vindo ao programa que verifica se um numero é par ou impar ***\n");
        printf("\n\tDigite um numero inteiro: ");
        scanf("%d", &num);
        if (num % 2 == 0) {
            printf("\n\tO número %d é par.\n\n", num);

        } else {
            printf("\n\tO número %d é impar.\n\n", num);
        }
        return 0;
                
    
    }