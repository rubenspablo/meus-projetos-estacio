#include <stdio.h>  

int main() {

    int idade = 20;
    float altura = 1.65; 

    if (idade > 18 && idade < 30 && altura > 1.70 && altura > 1.70) {
        printf("Você está apto ao cargo.\n");
    } else {
        printf("Seus critérios não atendem aos requisitos.\n");
    }
}