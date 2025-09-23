// jokenpo_futurista.c
// gcc -std=c99 -Wall -Wextra -O2 jokenpo_futurista.c -o jokenpo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <errno.h>

/* ===================== Cores ANSI ===================== */
#define CLR_RESET   "\x1b[0m"
#define CLR_DIM     "\x1b[2m"
#define CLR_BOLD    "\x1b[1m"
#define FG_CYAN     "\x1b[36m"
#define FG_MAGENTA  "\x1b[35m"
#define FG_BLUE     "\x1b[34m"
#define FG_YELLOW   "\x1b[33m"
#define FG_GREEN    "\x1b[32m"
#define FG_RED      "\x1b[31m"
#define FG_WHITE    "\x1b[37m"

/* ===================== Box-drawing ===================== */
#define TL "╔"  // top-left
#define TR "╗"  // top-right
#define BL "╚"  // bottom-left
#define BR "╝"  // bottom-right
#define H  "═"  // horizontal
#define V  "║"  // vertical
#define T  "╟"  // tee left
#define TT "╠"  // tee top
#define TJ "╣"  // tee end
#define X  "╬"  // cross
#define M  "╢"  // tee right
#define S  "─"  // thin horizontal
#define I  "│"  // thin vertical

/* ===================== Tipos ===================== */
typedef enum { ESC_INVALIDA=0, PEDRA=1, PAPEL=2, TESOURA=3 } Escolha;
typedef enum { RES_EMPATE=0, RES_JOGADOR=1, RES_COMPUTADOR=-1 } Resultado;
static const char *NOME_ESC[] = {"Inválida","PEDRA","PAPEL","TESOURA"};

enum { BUF_TAM = 128 };

/* ===================== Utils de entrada ===================== */
static int ler_linha(char *buf, size_t tam) {
    if (!fgets(buf, (int)tam, stdin)) return 0;
    size_t n = strlen(buf);
    if (n && buf[n-1]=='\n') buf[n-1]='\0';
    return 1;
}
static int ler_int_intervalo(const char *prompt, int min, int max, int *out) {
    char b[BUF_TAM];
    for (;;) {
        if (prompt && *prompt) printf("%s", prompt);
        if (!ler_linha(b, sizeof b)) return 0;
        char *e = NULL; errno=0;
        long v = strtol(b, &e, 10);
        if (!errno && e!=b) {
            while (*e==' ') ++e;
            if (*e=='\0' && v>=min && v<=max) { *out=(int)v; return 1; }
        }
        printf(FG_YELLOW "Entrada inválida." CLR_RESET " Digite um número entre %d e %d.\n", min, max);
    }
}

/* ===================== Núcleo do jogo ===================== */
static const char* nome(Escolha e){ return (e>=PEDRA && e<=TESOURA)? NOME_ESC[e] : NOME_ESC[0]; }
static Escolha cpu_escolha(void){ return (Escolha)(rand()%3+1); }
static Resultado decidir(Escolha j, Escolha c){
    if (j==c) return RES_EMPATE;
    if ((j==PEDRA && c==TESOURA) || (j==TESOURA && c==PAPEL) || (j==PAPEL && c==PEDRA)) return RES_JOGADOR;
    return RES_COMPUTADOR;
}

/* ===================== UI Futurista ===================== */
static void linha_h(int w, const char *h){ for(int i=0;i<w;i++) printf("%s", h); }
static void box_top(int w){
    printf(FG_CYAN TL); linha_h(w, H); printf(TR CLR_RESET "\n");
}
static void box_mid_title(const char *title, int w){
    int len = (int)strlen(title);
    int pad = (w - len); if (pad<0) pad=0;
    int l = pad/2, r = pad - l;
    printf(FG_CYAN V CLR_RESET " "); 
    printf(CLR_BOLD FG_MAGENTA "%.*s" CLR_RESET, len, title);
    for(int i=0;i<r+ l - (pad/2?0:0); ++i) putchar(' '); // leve ajuste
    printf(FG_CYAN " " V CLR_RESET "\n");
}
static void box_line(const char *s, int w){
    // imprime uma linha centralizada com espaços nas laterais
    int len = (int)strlen(s);
    if (len > w-2) len = w-2;
    int pad = (w-2 - len);
    int l = pad/2, r = pad - l;
    printf(FG_CYAN V CLR_RESET " ");
    for(int i=0;i<l;i++) putchar(' ');
    printf("%.*s", len, s);
    for(int i=0;i<r;i++) putchar(' ');
    printf(" " FG_CYAN V CLR_RESET "\n");
}
static void box_sep(int w){
    printf(FG_CYAN TT); linha_h(w, H); printf(TJ CLR_RESET "\n");
}
static void box_bottom(int w){
    printf(FG_CYAN BL); linha_h(w, H); printf(BR CLR_RESET "\n");
}
static void clear_screen(void){ printf("\x1b[2J\x1b[H"); }

static void banner(void){
    const int W = 56;
    box_top(W);
    box_mid_title("J O K E N P O  //  M O D E  N E O N", W);
    box_sep(W);
    box_line("Pedra • Papel • Tesoura", W);
    box_line("Console Edition — Futuristic UI", W);
    box_bottom(W);
}

static void painel_menu(void){
    const int W = 56;
    box_top(W);
    box_mid_title("M E N U", W);
    box_sep(W);
    box_line("1 - Jogar", W);
    box_line("2 - Ver Regras", W);
    box_line("3 - Sair", W);
    box_bottom(W);
}

static void regras_panel(void){
    const int W = 56;
    box_top(W);
    box_mid_title("R E G R A S", W);
    box_sep(W);
    box_line("1) Pedra vence Tesoura", W);
    box_line("2) Tesoura vence Papel", W);
    box_line("3) Papel vence Pedra", W);
    box_bottom(W);
}

static void confronto_panel(Escolha j, Escolha c, Resultado r){
    const int W = 56;
    char buf1[128], buf2[128];

    snprintf(buf1, sizeof buf1, "JOGADOR  »  [%s]", nome(j));
    snprintf(buf2, sizeof buf2, "COMPUTADOR  »  [%s]", nome(c));

    box_top(W);
    box_mid_title("C O N F R O N T O", W);
    box_sep(W);
    box_line(buf1, W);
    box_line("───×───", W);
    box_line(buf2, W);
    box_sep(W);

    const char *res;
    const char *color = FG_WHITE;
    if (r==RES_EMPATE){ res = "EMPATE"; color = FG_YELLOW; }
    else if (r==RES_JOGADOR){ res = "VENCEDOR: JOGADOR"; color = FG_GREEN; }
    else { res = "VENCEDOR: COMPUTADOR"; color = FG_RED; }

    char buf3[128];
    snprintf(buf3, sizeof buf3, "%s%s%s", color, res, CLR_RESET);
    box_line(buf3, W);
    box_bottom(W);
}

/* ===================== Fluxo ===================== */
static void jogar_uma_partida(void){
    int v=0;
    const int W = 56;
    // painel de escolha
    box_top(W);
    box_mid_title("F A Z  S U A  E S C O L H A", W);
    box_sep(W);
    box_line("1 - PEDRA", W);
    box_line("2 - PAPEL", W);
    box_line("3 - TESOURA", W);
    box_bottom(W);

    if (!ler_int_intervalo(FG_CYAN ">> " CLR_RESET, 1, 3, &v)) {
        puts(FG_YELLOW "Entrada encerrada." CLR_RESET);
        return;
    }
    Escolha jog = (Escolha)v;
    Escolha cpu = cpu_escolha();
    Resultado r = decidir(jog, cpu);

    puts("");
    confronto_panel(jog, cpu, r);
}

int main(void){
    srand((unsigned)time(NULL));
    for(;;){
        clear_screen();
        banner();
        puts("");
        painel_menu();
        int op=0;
        if (!ler_int_intervalo(FG_CYAN ">> " CLR_RESET, 1, 3, &op)) {
            puts(FG_YELLOW "Entrada encerrada (EOF). Saindo..." CLR_RESET);
            break;
        }
        clear_screen();
        switch(op){
            case 1:
                banner();
                puts("");
                jogar_uma_partida();
                puts(CLR_DIM "\nPressione ENTER para voltar ao menu..." CLR_RESET);
                getchar();
                break;
            case 2:
                banner();
                puts("");
                regras_panel();
                puts(CLR_DIM "\nPressione ENTER para voltar ao menu..." CLR_RESET);
                getchar();
                break;
            case 3:
                puts(FG_MAGENTA "\nEncerrando... Obrigado por jogar!" CLR_RESET);
                return 0;
        }
    }
    return 0;
}
