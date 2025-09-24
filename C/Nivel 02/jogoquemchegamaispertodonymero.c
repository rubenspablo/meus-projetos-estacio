#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main() {
        int numeroSecreto, numeroJodor, numeroComputador, diferencaJodor, diferencaComputador;
        srand(time(0));
        numeroSecreto = rand() % 100 + 1; // Número aleatório entre 1 e 100 
        printf("Bem-vindo ao jogo! Tente adivinhar o número secreto entre 1 e 100.\n"); 
        printf("Digite o seu palpite: ");
        scanf("%d", &numeroJodor);
        numeroComputador = rand() % 100 + 1; // Número aleatório entre 1 e 100 para o computador
        printf("O computador escolheu o número: %d\n", numeroComputador);
        diferencaJodor = (numeroSecreto - numeroJodor);
        diferencaComputador = (numeroSecreto - numeroComputador);
        if (diferencaJodor < 0) diferencaJodor = -diferencaJodor; // Valor absoluto
        if (diferencaComputador < 0) diferencaComputador = -diferencaComputador; // Valor absoluto
        if (diferencaJodor < diferencaComputador) {
            printf("Parabéns! Você chegou mais perto do número secreto %d.\n", numeroSecreto);
        } else if (diferencaComputador < diferencaJodor) {
            printf("O computador chegou mais perto do número secreto %d. Tente novamente!\n", numeroSecreto);
        } else {
            printf("Empate! Ambos chegaram igualmente perto do número secreto %d.\n", numeroSecreto);
        }
        return 0;
    }      