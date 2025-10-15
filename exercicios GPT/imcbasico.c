#include <stdio.h>
#include <stdlib.h>
    int main() {
        float altura, peso, imc;
        printf("\n\t*** Seja bem vindo ao programa que calcula o IMC (Indice de Massa Corporal) ***\n");
        printf("\n\tDigite sua altura em metros (Exemplo: 1.75): ");
        scanf("%f", &altura);
        printf("\n\tDigite seu peso em quilos (Exemplo: 70.5): ");
        scanf("%f", &peso);
        imc = peso / (altura * altura);
        printf("\n\tSeu IMC é: %.2f\n\n", imc);
        if (imc < 18.5) {
            printf("\n\tVocê está abaixo do peso.\n\n");
        } else if (imc >= 18.5 && imc < 24.9) {
            printf("\n\tVocê está com o peso normal.\n\n");
        } else if (imc >= 25 && imc < 29.9) {
            printf("\n\tVocê está com sobrepeso.\n\n");
        } else if (imc >= 30 && imc < 34.9) {
            printf("\n\tVocê está com obesidade grau I.\n\n");
        } else if (imc >= 35 && imc < 39.9) {
            printf("\n\tVocê está com obesidade grau II.\n\n");
        } else {
            printf("\n\tVocê está com obesidade grau III.\n\n");
        }
        return 0;
                
    
    }