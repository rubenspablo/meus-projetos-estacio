#include <stdio.h>
#include <stdlib.h>
    int main() {
        int num1, num2;
        printf("\n\t*** Seja bem vindo ao programa que verifica qual o maior entre dois numeros ***\n");
        printf("\n\tDigite o primeiro numero: ");
        scanf("%d", &num1);
        printf("\n\tDigite o segundo numero: ");
        scanf("%d", &num2);
        if (num1 > num2) {
            printf("\n\tO maior numero é %d\n\n", num1);

        } else if (num2 > num1){
            printf("\n\tO maior numero é %d\n\n", num2);
        } else {
            printf("\n\tOs numeros são iguais: %d e %d\n\n", num1, num2);
        }

        int diferenca = abs(num1 - num2);
        printf("\n\tA diferença entre os dois numeros é: %d\n\n", diferenca);
        return 0;
                
    
    }