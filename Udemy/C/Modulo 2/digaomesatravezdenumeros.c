#include <stdio.h>
#include <stdlib.h>
    int main() {
        int mes;
        printf("\t*** Seja bem vindo ao programa que diz o mes atraves de numeros ***\n");
        printf("\n\tDigite um numero de 1 a 12: ");
        scanf("%d", &mes);
        switch (mes) {
            case 1:
                printf("\n\tJaneiro\n\n");
                break;
            case 2:
                printf("\n\tFevereiro\n\n");
                break;
            case 3:
                printf("\n\tMarco\n\n");
                break;
            case 4:
                printf("\n\tAbril\n\n");
                break;
            case 5:
                printf("\n\tMaio\n\n");
                break;
            case 6:
                printf("\n\tJunho\n\n");
                break;
            case 7:
                printf("\n\tJulho\n\n");
                break;
            case 8:
                printf("\n\tAgosto\n\n");
                break;
            case 9:
                printf("\n\tSetembro\n\n");
                break;
            case 10:
                printf("\n\tOutubro\n\n");
                break;
            case 11:
                printf("\n\tNovembro\n\n");
                break;
            case 12:
                printf("\n\tDezembro\n\n");
                break;
            default:
                printf("\n\tNumero invalido!\n\n");
        }
                
    
    }