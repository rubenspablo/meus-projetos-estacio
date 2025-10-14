#include <stdio.h>
#include <stdlib.h>
    int main() {
        float valordolar, valorreal, cotacaodoloar;
        cotacaodoloar = 5.30;
        printf("\n\tDigite o valor em reais que você deseja converter: R$ ");
        scanf("%f", &valorreal);
        valordolar = valorreal / cotacaodoloar;
        printf("\n\tO valor de R$ %.2f em dolar é $ %.2f\n\n", valorreal, valordolar);
        return 0;





    }