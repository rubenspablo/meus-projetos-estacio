#include <stdio.h>
   int idade;
   float renda;
    int main () {
        printf("Digite sua idade: \n");
        scanf("%d", &idade);
        printf("Digite sua renda: \n");
        scanf("%f", &renda);

        if (idade <= 18 || renda <= 1000.00) {
              if (renda <= 1000.00) {
                printf("Você está apto ao benefício.\n");
            } else {
                printf("Sua renda ultrapassa o limite.\n");
            }
        } else {
            printf("Você não tem idade suficiente.\n");
        }
    }