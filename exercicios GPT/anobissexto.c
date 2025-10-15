#include <stdio.h>
#include <stdlib.h>
    int main() {
        int ano;
        printf("\n\t*** Seja bem vindo ao programa que verifica se um ano é bissexto ***\n");
        printf("\n\tDigite um ano: ");
        scanf("%d", &ano);
        if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
            printf("\n\tO ano %d é bissexto.\n\n", ano);
        } else {
            printf("\n\tO ano %d não é bissexto.\n\n", ano);
        }
        return 0;
                
    }