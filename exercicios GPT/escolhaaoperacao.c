#include <stdio.h>
#include <stdlib.h>
    int main() {
        // variaveis
        int num1, num2;
        char operacao;
        // inicio do programa
        printf("\n\t*** Seja bem vindo ao programa que realiza operações matemáticas básicas ***\n");

        // entrada de dados
        printf("\n\tDigite o primeiro numero: ");
        scanf("%d", &num1);
        printf("\n\tDigite o segundo numero: ");
        scanf("%d", &num2);

        // escolha da operação
        printf("\n\tDigite a operação desejada (+, -, *, /): ");
        scanf(" %c", &operacao);

        // processamento e saída de dados
        switch (operacao)
        {
            case '+':
                // Adição
                printf("\n\tVoce escolheu adição.");
                printf("\n\tResultado: %d + %d = %d\n", num1, num2, num1 + num2);
                break;
            case '-':
                // Subtração
                printf("\n\tVocê escolheu Subtração.");
                printf("\n\t Resultado: %d - %d = %d\n", num1, num2, num1 - num2);
                break;
            case '*':
                // Multiplicação
                printf("\n\tVocê escolheu Multiplicação.");
                printf("\n\t Resultado: %d * %d = %d\n", num1, num2, num1 * num2);
                break;
            case '/':
                // Divisão
                if (num2 != 0) {
                    printf("\n\tVocê escolheu Divisão.");
                    printf("\n\tResultado: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
                } else {
                    printf("\n\tErro: Divisão por zero não é permitida.\n");
                }
                 break;

                // caso padrão
            default:
                printf("\n\tOperação inválida. Por favor, escolha entre +, -, *, /.\n");
                break;

        }
        return 0;

    }