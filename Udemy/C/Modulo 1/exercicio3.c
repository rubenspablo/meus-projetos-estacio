#include <stdio.h>
#include <stdlib.h>
        int main() {
            //triocando os valores das variaveris sem usar uma terceira variavel
            int x, y;
            printf("\n\tDigite o valor de x: ");
            scanf("%d", &x);
            printf("\n\tDigite o valor de y: ");
            scanf("%d", &y);
            printf("\n\tValores antes do swap: \n\tValor de x: %d\n\tValor de y: %d\n", x, y);
            x = x + y; //soma os dois valores e armazena em x
            y = x - y; //subtrai o novo valor de y da soma e armazena em y
            x = x - y; //subtrai o novo valor de y da soma e armazena em x
            printf("\n\tValores depois do swap: \n\tValor de x: %d\n\tValor de y: %d\n\n", x, y);




        }