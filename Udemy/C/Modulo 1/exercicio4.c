#include <stdio.h>

     int main() {
        //canculando a gorjeta e dividindo a conta do restaurante
        float conta, total, gorjeta, valorPorPessoa;
        int pessoas;
        printf("\n\tDigite o valor total de pessoas: ");
        scanf("%d", &pessoas);
        printf("\n\tDigite o valor total da conta: R$ ");
        scanf("%f", &conta);
        gorjeta = conta * 0.10; //calculando a gorjeta de 10%
        total = conta + gorjeta;
        valorPorPessoa = total / pessoas; //dividindo o valor total pela quantidade de pessoas
        printf("\n\tValor da conta: R$ %.2f\n\tValor da gorjeta (10%%): R$ %.2f\n\tValor total: R$ %.2f\n\tValor por pessoa (dividido por %d pessoas): R$ %.2f\n\n", conta, gorjeta, total, pessoas, valorPorPessoa);
        


     }