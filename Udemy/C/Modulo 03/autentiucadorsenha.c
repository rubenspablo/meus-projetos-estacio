#include <stdio.h>
#include <stdlib.h>
    int main() {
          int senha = 123456;
          int senhadigitada = 0;
          printf("\tFavor digite a senha para acessar o sistema.");
          scanf("%d", &senhadigitada);
          while (senhadigitada != senha) {
            printf("\tSenha incorreta. Tente novamente: ");
            scanf("%d", &senhadigitada);
          }
            printf("\tSenha correta! Acesso liberado.\n");

    }