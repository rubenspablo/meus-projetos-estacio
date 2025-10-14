#include <stdio.h>
    int main() {
        int segundos, horas, minutos, segrestantes;
        printf("\n\tDigite o valor em segundos que você deseja converter: ");
        scanf("%d", &segundos);
        horas = segundos / 3600;
        minutos = (segundos % 3600) / 60;
        segrestantes = segundos % 60;
        printf("\n\tO valor de %d segundos equivale a %d horas, %d minutos e %d segundos\n\n", segundos, horas, minutos, segrestantes);
        return 0;


    }