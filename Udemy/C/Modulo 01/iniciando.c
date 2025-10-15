#include <stdio.h>
#include <stdlib.h>

    int main() {

/*
   Este é um comentario 
   de varias 
   inhas
*/
    printf("\n\n\t\"Iniciando em C!\"\n\n");
    printf("\t\t%d + %d = %d\n\n", 5, 10, 5 + 10);
    system("pause");

    int numero1, numero2;
    float resultado;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    //Soma
    resultado = numero1 + numero2;
    printf("\n\n\tA soma de %d + %d = %.2f\n\n", numero1, numero2, resultado);

    //Subtracao
    resultado = numero1 - numero2;
    printf("\tA subtracao de %d - %d = %.2f\n\n", numero1, numero2, resultado);

    //Multiplicacao
    resultado = numero1 * numero2;
    printf("\tA multiplicacao de %d * %d = %.2f\n\n", numero1, numero2, resultado);

    //Divisao
    resultado = (float)numero1 / numero2; //casting
    printf("\tA divisao de %d / %d = %.2f\n\n", numero1, numero2, resultado);   

    // testando numero flutuante
    double num1 = 75.384579;
      printf("\tNumero flutuante: %f\n\n", num1);
    return 0;
    }