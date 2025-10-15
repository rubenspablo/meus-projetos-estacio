#include <stdio.h>
#include <stdlib.h>
    int main() {
        // variaceis
        float nota1, nota2, nota3;
        float mediaAritimetica, mediaPonderada;
        // inicio do programa e apresentação
        printf("\t*** Seja bem vindo ao programa que calcula a media aritimetica e ponderada ***\n");
        printf("\n\t Neste programa você ira digita 3 notas e o programa ira calcular a media.\n");
        printf("\n\tMas antes você ira escolher o tipo de media que deseja calcular.\n");
        // lendo as notas
        printf("\n\tDigite a primeira nota: ");
        scanf("%f", &nota1);
        printf("\n\tDigite a segunda nota: ");
        scanf("%f", &nota2);
        printf("\n\tDigite a terceira nota: ");
        scanf("%f", &nota3);
        // calculo das medias areitimeticas e ponderadas
        mediaAritimetica = (nota1 + nota2 + nota3) / 3;
        mediaPonderada = (nota1 * 0.30f) + (nota2 * 0.30f) + (nota3 * 0.40f);
        // escolha do tipo de media
        printf("\n\tQual o tipo de media que deseja calcular?\n");
        printf("\n\t 1 - Media Aritimetica\n");
        printf("\n\t 2 - Media Ponderada\n");
        int escolha;
        printf("\n\tDigite sua escolha: ");
        scanf("%d", &escolha);
        // exibindo o resultado
        switch (escolha)
        {
        case 1:
            printf("\n\tA media aritimetica das notas %.2f, %.2f e %.2f é: %.2f\n\n", nota1, nota2, nota3, mediaAritimetica);
            break;
        case 2:
            printf("\n\tA media ponderada das notas %.2f, %.2f e %.2f é: %.2f\n\n", nota1, nota2, nota3, mediaPonderada);
            break;
        default:
            printf("\n\tNotas invalidas\n\n");
            break;
        }
        return 0;

    }