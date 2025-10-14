#include <stdio.h>
#include <stdlib.h>
    int main() {
        int mes;

        printf("\t*** Seja bem vindo ao programa que diz quantos dias tem cada mes ***\n");
        printf("\n\tDigite um numero de 1 a 12: ");
        scanf("%d", &mes);
        switch (mes)
        {
        case 2:
            printf("\n\tFevereiro tem 28 ou 29 dias.\n");
            break;
        case 3:
        case 6:
        case 9:
        case 11:
            printf("\n\tEsse mes tem 30 dias.\n");
            break;
        case 1:
        case 4:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("\n\tEsse mes tem 31 dias.\n");
            break;
        default:
        printf("\n\tNúmero inválido\n\n");
            break;
        }
                
    
    }