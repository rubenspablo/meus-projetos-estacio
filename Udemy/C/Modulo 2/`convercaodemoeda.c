#include <stdio.h>
#include <stdlib.h>
    int main() {

           float valorReal, cotacaoDolar, valorConvertido;
           cotacaoDolar = 5.46; // valor fixo do dolar
           printf("*** Seja bem vindo aso programa de coversão de moeda ***\n");
           printf("\nEscolha uma das converções abaixo: \n");
           printf("1 - Real para Dolar\n");
           printf("2 - Dolar para Real\n");
           int opcao;
           printf("Digite a opção desejada: ");
           scanf("%d", &opcao);
           switch (opcao)
           {
           case 1:
            printf("Digite o valor em real: ");
            scanf("%f", &valorReal);
            valorConvertido = valorReal / cotacaoDolar;
            printf("O valor de R$ %.2f convertido para dolar é: $ %.2f\n", valorReal, valorConvertido);
            break;

           case 2:
            printf("Digite o valor em dolar: ");
            scanf("%f", &valorConvertido);
            valorReal = valorConvertido * cotacaoDolar;
            printf("O valor de $ %.2f convertido para real é: R$ %.2f\n", valorConvertido, valorReal);
            break;

           default:{
               printf("Opção inválida!\n");
           }
            break;
           }     
    
    }