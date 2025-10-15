#include <stdio.h>
#include <stdlib.h>
    int main() {
        float nota1, nota2, nota3, media;
        
        printf("\n\t*** Seja bem vindo ao programa que calcula a media de tres notas ***\n");
        printf("\n\tDigite a primeira nota: ");
        scanf("%f", &nota1);
        printf("\n\tDigite a segunda nota: ");
        scanf("%f", &nota2);
        printf("\n\tDigite a terceira nota: ");
        scanf("%f", &nota3);
        media = (nota1 + nota2 + nota3) / 3.0;
        printf("\n\tSuas notas foram %.2f, %.2f, %.2f. \n\n", nota1, nota2, nota3);
        printf("\n\tSua média é: %.2f\n\n", media);
        return 0;
                
    
    }