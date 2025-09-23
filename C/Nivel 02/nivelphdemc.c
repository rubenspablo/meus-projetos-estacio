// Jokenpo.c — versão "PhD em C" (C99)
// Autor: você ;)  |  Compilar: gcc -std=c99 -Wall -Wextra -O2 jokenpo.c -o jokenpo

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>

/* ------------------------- Tipos e Constantes ------------------------- */

typedef enum {
    ESC_INVALIDA = 0,
    PEDRA  = 1,
    PAPEL  = 2,
    TESOURA= 3
} Escolha;

typedef enum {
    RES_EMPATE = 0,
    RES_JOGADOR = 1,
    RES_COMPUTADOR = -1
} Resultado;

static const char *NOME_ESCOLHA[] = {
    "Inválida", "Pedra", "Papel", "Tesoura"
};

enum { BUF_TAM = 128 };

/* ------------------------- Utilitários de Entrada ------------------------- */

static int ler_linha(char *buf, size_t tam) {
    if (!fgets(buf, (int)tam, stdin)) return 0;             // EOF/erro
    size_t n = strlen(buf);
    if (n && buf[n-1] == '\n') buf[n-1] = '\0';             // remove '\n'
    return 1;
}

static int ler_int_intervalo(const char *prompt, int min, int max, int *out) {
    char buf[BUF_TAM];
    for (;;) {
        if (prompt && *prompt) printf("%s", prompt);
        if (!ler_linha(buf, sizeof(buf))) return 0;          // EOF: cancela
        char *end = NULL;
        errno = 0;
        long v = strtol(buf, &end, 10);
        if (errno == 0 && end != buf) {
            while (*end == ' ') ++end;                       // ignora espaços
            if (*end == '\0' && v >= min && v <= max) {
                *out = (int)v;
                return 1;
            }
        }
        printf("Entrada invalida. Digite um numero entre %d e %d.\n\n", min, max);
    }
}

/* ------------------------- Núcleo do Jogo ------------------------- */

static const char* nome_escolha(Escolha e) {
    if (e < PEDRA || e > TESOURA) return NOME_ESCOLHA[0];
    return NOME_ESCOLHA[e];
}

static Resultado decidir(Escolha jogador, Escolha computador) {
    if (jogador == computador) return RES_EMPATE;
    /* Regras:
       Pedra(1) vence Tesoura(3)
       Tesoura(3) vence Papel(2)
       Papel(2) vence Pedra(1)
    */
    if ((jogador == PEDRA   && computador == TESOURA) ||
        (jogador == TESOURA && computador == PAPEL)   ||
        (jogador == PAPEL   && computador == PEDRA)) {
        return RES_JOGADOR;
    }
    return RES_COMPUTADOR;
}

static void mostrar_regras(void) {
    puts("\n=== Regras do Jogo ===");
    puts("1) Pedra vence Tesoura");
    puts("2) Tesoura vence Papel");
    puts("3) Papel vence Pedra\n");
}

static Escolha escolha_computador(void) {
    /* rand() % 3 gera 0..2; somamos 1 para mapear 1..3 (PEDRA..TESOURA) */
    return (Escolha)(rand() % 3 + 1);
}

static void imprimir_confronto(Escolha j, Escolha c) {
    /* Formato desejado: Escolha do Jogador "Pedra" x "Papel" Escolha do Computador. */
    printf("Escolha do Jogador \"%s\"  x  \"%s\" Escolha do Computador.\n",
           nome_escolha(j), nome_escolha(c));
}

static void jogar_uma_partida(void) {
    int v = 0;
    if (!ler_int_intervalo(
            "\nEscolha uma opcao:\n"
            "1 - Pedra\n"
            "2 - Papel\n"
            "3 - Tesoura\n"
            "> ",
            1, 3, &v)) {
        puts("\nEntrada encerrada (EOF).");
        return;
    }

    Escolha jog = (Escolha)v;
    Escolha cpu = escolha_computador();

    puts("");
    imprimir_confronto(jog, cpu);

    Resultado r = decidir(jog, cpu);
    if (r == RES_EMPATE) {
        puts("Resultado: Empate!\n");
    } else if (r == RES_JOGADOR) {
        puts("Resultado: Vencedor Jogador!\n");
    } else {
        puts("Resultado: Vencedor Computador!\n");
    }
}

/* ------------------------- Função Principal ------------------------- */

int main(void) {
    /* Semente única para toda a execução */
    srand((unsigned)time(NULL));

    for (;;) {
        int opcao = 0;
        puts("\n*** Jogo do Jokenpô ***");
        puts("Escolha uma opcao do menu:");
        puts("1 - Jogar");
        puts("2 - Ver Regras");
        puts("3 - Sair");

        if (!ler_int_intervalo("> ", 1, 3, &opcao)) {
            puts("\nEntrada encerrada (EOF). Saindo...");
            break;
        }

        switch (opcao) {
            case 1:
                puts("\nVamos comecar o nosso jogo de Jokenpô!");
                jogar_uma_partida();
                break;
            case 2:
                mostrar_regras();
                break;
            case 3:
                puts("\nSaindo do jogo... Ate mais!");
                return 0;
            default:
                /* Nunca deve chegar aqui por causa da validacao. */
                puts("Opcao invalida!");
                break;
        }
    }
    return 0;
}
