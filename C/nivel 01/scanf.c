#include <stdio.h>

int main(){

    int idade;
    int quantidade;
    float altura;
    double peso;
    char letra;
    char nome[10];
    char sobrenome[30];

    printf("Digite seu nome:");
    scanf(" %[^\n]",nome);
    printf("Seu nome é %s\n", nome);
    printf("quantos bois você tem na fazenda?\n");
    scanf("%d", &quantidade);
    printf("Você tem %d bois na fazenda\n", quantidade);
    printf("qual a sua altura?\n");
    scanf("%f", &altura);
    printf("Sua altura é %.2f\n", altura);
    printf("Qual o seu peso?\n");
    scanf("%lf", &peso);
    printf("Seu peso é %.2f\n", peso);
    printf("Qual a primeira letra do seu primeiro nome?\n");
    scanf(" %c", &letra);
    printf("A primeira letra do seu primeiro nome é %c\n", letra);
    printf("Qual o seu sobrenome?\n");
    scanf(" %[^\n]", sobrenome);
    printf("Seu sobrenome é %s\n", sobrenome);
}