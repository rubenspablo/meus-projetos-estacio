#include <stdio.h>
#include <stdlib.h>
    int main() {
        int dia;
        printf("\n\t*** Seja bem vindo ao programa que informa o dia da semana correspondente ao numero digitado ***\n");
        printf("\n\tDigite um numero de 1 a 7: ");
        scanf("%d", &dia);
        switch (dia)
        {
        case 1:
            printf("\n\tDomingo\n");
            break;
        case 2:
            printf("\n\tSegunda-feira\n");
            break;
        case 3:
            printf("\n\tTerça-feira\n");
            break;
        case 4:
            printf("\n\tQuarta-feira\n");
            break;
        case 5:
            printf("\n\tQuinta-feira\n");
            break;
        case 6:
            printf("\n\tSexta-feira\n");
            break;
        case 7:
            printf("\n\tSábado\n");
            break;
        
        default:
            printf("\n\tDia inválido\n");
            break;
        }
        return 0;           
                
    

    }