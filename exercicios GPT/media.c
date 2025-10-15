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
        
        switch ((int)media)
        {
        case 1:
        case 2:
        case 3: 
        case 4:
        case 5:
            printf("\n\tSua média é E. Você está reprovado.\n");
            /* code */
            break;
            case 6:
            printf("\n\tSua média é D. Você está de recuperação.\n");
            break;
            case 7:
            printf("\n\tSua média é C. Você está de recuperação.\n");
            break;
            case 8:
            printf("\n\tSua média é B. Você está aprovado.\n");
            break;
            case 9:
            case 10:
            printf("\n\tSua média é A. Você está aprovado com louvor.\n");
            break;
                    
        default:
            break;
        }
        return 0;
                
    
    }