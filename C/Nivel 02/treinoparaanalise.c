#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // jogo de adivinho o numero ou ganha quem chegar mais perto
    // joga o jogador homano contra o computador
    int jogador, computador, numero, diferenca_jogador, diferenca_computador;
    printf("Bem vindo ao jogo de adivinhação!\n");
    printf("Escolha um número entre 1 e 100: ");
    scanf("%d", &jogador);
    computador = rand() % 100 + 1;
    numero = rand() % 100 + 1;
    printf("O computador escolheu: %d\n", computador);
    printf("O número sorteado foi: %d\n", numero);
    diferenca_jogador = (jogador - numero);
    diferenca_computador = (computador - numero);
    if (diferenca_jogador < 0) diferenca_jogador = -diferenca_jogador;
    if (diferenca_computador < 0) diferenca_computador = -diferenca_computador;
    if (diferenca_jogador < diferenca_computador) {
        printf("Parabéns! Você ganhou!\n");
    } else if (diferenca_jogador > diferenca_computador) {
        printf("O computador ganhou!\n");
    } else {
        printf("Empate!\n");
    }
}