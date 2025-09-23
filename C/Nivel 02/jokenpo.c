#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int opcao, escolhajogador, escolhacomputador;

    printf("*** Jogo do Jokenpô ***\n");
    printf("Escolha uma opcao do menu:\n");
    printf("1 - Jogar\n");
    printf("2 - Ver Regras\n"); 
    printf("3 - Sair\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        srand(time(0));
        printf("Vamos começar o nosso jogo de Jokenpô!\n");
        printf("Escolha uma opcao:\n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        scanf("%d", &escolhajogador);

        // escolha aleatória do computador
        escolhacomputador = rand() % 3 + 1;

        // converte número em palavra (Pedra/Papel/Tesoura)
        char *Jogadadojogador, *jogadaComputador;
        if (escolhajogador == 1) Jogadadojogador = "Pedra";
        else if (escolhajogador == 2) Jogadadojogador = "Papel";
        else Jogadadojogador = "Tesoura";

        if (escolhacomputador == 1) jogadaComputador = "Pedra";
        else if (escolhacomputador == 2) jogadaComputador = "Papel";
        else jogadaComputador = "Tesoura";

        // Exibe Informações do Confronto
        printf("\nEscolha do Jogador \\\\ %s  x  %s // Escolha do Computador\n",
               Jogadadojogador, jogadaComputador);
        printf("                    ---------------------\n\n");

        // Calculo do Vencedor
        if (escolhajogador == escolhacomputador) {
            printf("Resultado: Empate!\n");
        } else if ((escolhajogador == 1 && escolhacomputador == 3) ||
                   (escolhajogador == 2 && escolhacomputador == 1) ||
                   (escolhajogador == 3 && escolhacomputador == 2)) {
            printf("Resultado: Vencedor Jogador!\n");
        } else {
            printf("Resultado: Vencedor Computador!\n");
        }
        break;

    case 2:
        printf("Regras do Jogo:\n");
        printf("Pedra vence Tesoura\n");
        printf("Tesoura vence Papel\n");
        printf("Papel vence Pedra\n");
        break;

    case 3:
        printf("Saindo do jogo...\n");
        break;

    default:
        printf("Opcao invalida!\n");
        break;
    }

    return 0;
}
