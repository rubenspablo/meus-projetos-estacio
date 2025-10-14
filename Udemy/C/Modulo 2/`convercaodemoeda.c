#include <stdio.h>
#include <stdlib.h>
    int main() {

           float valorReal, cotacaoDolar, valorConvertido;
           cotacaoDolar = 5.46; // valor fixo do dolar
           printf("\t*** Seja bem vindo aso programa de coversão de moeda ***\n");
           printf("\n\tEscolha uma das converções abaixo: \n");
           printf("\t1 - Real para Dolar\n");
           printf("\t2 - Dolar para Real\n");
           int opcao;
           printf("\tDigite a opção desejada: ");
           scanf("%d", &opcao);
           switch (opcao)
           {
           case 1:
            printf("\tDigite o valor em real: ");
            scanf("%f", &valorReal);
            valorConvertido = valorReal / cotacaoDolar;
            printf("\tO valor de R$ %.2f convertido para dolar é: $ %.2f\n", valorReal, valorConvertido);
            break;

           case 2:
            printf("\tDigite o valor em dolar: ");
            scanf("%f", &valorConvertido);
            valorReal = valorConvertido * cotacaoDolar;
            printf("\tO valor de $ %.2f convertido para real é: R$ %.2f\n", valorConvertido, valorReal);
            break;

           default:{
               printf("\tOpção inválida!\n");
           }
            break;
           }     
    
    }