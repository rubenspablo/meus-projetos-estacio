#include <stdio.h>

int main(){

    int idade;
    int quantidade = 5;
    float altura = 1.75;
    double peso = 102.50;
    char letra = 'P';
    char nome[10] = "Pablo";
    char sobrenome[20] = "Suassuna";

    idade = 20;
    quantidade = 10;


    printf("Meu nome é %s %s, tenho %d e a letra do meu segundo nome é %c, peso %.2f e tenho %.2f", nome, sobrenome, idade, letra, altura, peso);
    }