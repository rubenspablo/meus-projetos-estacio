#include <stdio.h>
#include <stdlib.h>
   int main() {
        float conta, valorporpessoa;
        int totaldepessoas, gorjeta;
        printf("\n\t Boa noite! Digite por favor o valor total da conta da mesa: ");
        scanf("%f", &conta);
        printf("\n\t Agora senhor quando o senhor quando por cento o senhor pretende dar ao seu garçom?");
        scanf("%d", &gorjeta);
        printf("\n\t E por fim, quantas pessoas estão na mesa?");
        scanf("%d", &totaldepessoas);
        valorporpessoa = (conta + (conta * gorjeta / 100)) / totaldepessoas;
        printf("\n\tEntão ficamos a ssim :\n");
        printf("\n\tValor da conta: r$ %.2f\n", conta);
        printf("\n\tValor da gorjeta (%d%%): r$ %.2f\n", gorjeta, (conta * gorjeta / 100));
        printf("\n\tValor total: r$ %.2f\n", (conta + (conta * gorjeta / 100)));
        printf("\n\tValor por pessoa (dividido por %d pessoas): r$ %.2f\n\n", totaldepessoas, valorporpessoa);
        printf("\n\t Volte sempre! Tenha uma boa noite!\n\n");
        return 0;



   }