#include <stdio.h>
#include <stdlib.h>
    int main() {
        int n1, n2, n3, n4, n5;
        printf("Dgite um numero: \n");
        scanf("%d", &n1);
        printf("Digite um numero: \n");
        scanf("%d", &n2);
        printf("Digite um numero: \n");
        scanf("%d", &n3);
        printf("Digite um numero: \n");
        scanf("%d", &n4);
        printf("Digite um numero: \n");
        scanf("%d", &n5);
        // vamos contar quantosd numeros negativos e positivos e zaros
        int positivos = 0, negativos = 0, zeros = 0;
        if (n1 > 0) {
            positivos++;
        } else if (n1 < 0) {
            negativos++;
        } else {
            zeros++;    
        }
        if (n2 > 0) {
            positivos++;
        } else if (n2 < 0) {
            negativos++;
        } else {
            zeros++;
        }
        if (n3 > 0) {
            positivos++;
        } else if (n3 < 0) {
            negativos++;
        } else {
            zeros++;
        }
        if (n4 > 0) {
            positivos++;
        } else if (n4 < 0) {
            negativos++;
        } else {
            zeros++;
        }
        if (n5 > 0) {
            positivos++;
        } else if (n5 < 0) {
            negativos++;
        } else {
            zeros++;
        }
        printf("Quantidade de numeros positivos: %d\n", positivos);
        printf("Quantidade de numeros negativos: %d\n", negativos);
        printf("Quantidade de zeros: %d\n", zeros);
        return 0;
    }