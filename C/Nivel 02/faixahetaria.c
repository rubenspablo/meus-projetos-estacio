#include <stdio.h>

    int main () {
         int idade;
         printf("Digite sua idade: ");
         scanf("%d", &idade);
            if (idade >= 60) {
                printf("Você é idoso!\n");
            } else if (idade < 60 && idade >= 18) {
                printf("Você é adulto!\n");
            } else if (idade < 18 && idade >= 12) {
                printf("Você é adolescente!\n");
            } else {
                printf("Você é criança!\n");    
            }
    return 0;
    
    }