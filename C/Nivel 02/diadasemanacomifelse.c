#include <stdio.h>
  int main () {

      int valor;


      printf("Aqui nos falaremos qual dia da semana é comforme o valor que você indidar de 1 à 7\n ");
      printf("Vamos lá meu querido digite um numero de 1 À 7: ");
        scanf("%d", &valor);
            if (valor == 1) {
                printf("O dia da semana é Domingo\n");
            } else if (valor == 2) {
                printf("O dia da semana é Segunda-feira\n");
            } else if (valor == 3) {
                printf("O dia da semana é Terça-feira\n");
            } else if (valor == 4) {
                printf("O dia da semana é Quarta-feira\n");
            } else if (valor == 5) {
                printf("O dia da semana é Quinta-feira\n");
            } else if (valor == 6) {
                printf("O dia da semana é Sexta-feira\n");
            } else if (valor == 7) {
                printf("O dia da semana é Sábado\n");
            } else {
                printf("Valor inválido! Por favor, digite um número entre 1 e 7.\n");
            }
        }