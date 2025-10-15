#include <stdio.h>
#include <stdlib.h>
    int main() {
        float nota1, nota2, nota3;
        float media;
        printf("\n\t*** Seja bem vindo ao programa que calcula a media de tres notas e verifica se passou ou não ***\n");
        printf("\n\tDigite a primeira nota: ");
        scanf("%f", &nota1);
        printf("\n\tDigite a segunda nota: ");
        scanf("%f", &nota2);
        printf("\n\tDigite a terceira nota: ");
        scanf("%f", &nota3);
        media = (nota1 + nota2 + nota3) / 3.0;
        printf("\n\tSua média é: %.2f\n\n", media);
        if (media >= 7.0) {
            printf("\n\tParabéns! Você passou de ano.\n\n");
        } else if (media >= 5.0) {
            printf("\n\tVocê está de recuperação.\n\n");
        } else {
            printf("\n\tInfelizmente, você foi reprovado.\n\n");
        }
        return 0;
    }