#include <stdio.h>
#include <stdlib.h>
    int main() {
        float peso, altura, imc;
        printf("\t*** Seja bem vindo ao programa de calculo de IMC ***\n");
        printf("\n\tDigite seu peso (kg): ");
        scanf("%f", &peso);
        printf("\n\tDigite sua altura (m): ");
        scanf("%f", &altura);
        imc = peso / (altura * altura);
        printf("\n\tSeu IMC é: %.2f\n", imc);
        if (imc < 18.5) {
            printf("\tVoce esta abaixo do peso ideal!\n\n");
        } else if (imc >= 18.5 && imc < 25) {
            printf("\tVoce esta no peso ideal!\n\n");
        } else if (imc >= 25 && imc < 30) {
            printf("\tVoce esta com sobrepeso!\n\n");
        } else if (imc >= 30 && imc < 40) {
            printf("\tVoce esta com obesidade!\n\n");
        } else {
            printf("\tVoce esta com obesidade morbida!\n\n");
    }
}