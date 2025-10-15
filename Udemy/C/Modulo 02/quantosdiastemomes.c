#include <stdio.h>
#include <stdlib.h>

int main() {
    int mes, ano;

    printf("\n\t*** Programa que informa quantos dias tem um mês ***\n");
    printf("\n\tDigite o número do mês (1 a 12): ");
    scanf("%d", &mes);
    printf("\n\tDigite o ano: ");
    scanf("%d", &ano);

    switch (mes) {
        case 2:
            if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
                printf("\n\tFevereiro de %d tem 29 dias (ano bissexto).\n", ano);
            } else {
                printf("\n\tFevereiro de %d tem 28 dias.\n", ano);
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("\n\tEsse mês tem 30 dias.\n");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("\n\tEsse mês tem 31 dias.\n");
            break;
        default:
            printf("\n\tNúmero inválido de mês.\n");
            break;
    }

    return 0;
}
