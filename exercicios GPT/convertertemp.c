#include <stdio.h>
#include <stdlib.h>
    int main() {
    float tempc, tempf;
    printf("\n\t*** Seja bem vindo ao programa que converte temperatura de Celsius para Fahrenheit ***\n");        
    printf("\n\tDigite a temperatura em Celsius: ");
    scanf("%f", &tempc);
    tempf = (tempc * 9/5) + 32;
    printf("\n\tA temperatura de %.2f Celsius corresponde a %.2f Fahrenheit\n\n", tempc, tempf);
    return 0;
    }
