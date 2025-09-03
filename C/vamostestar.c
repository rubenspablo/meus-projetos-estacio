#include <stdio.h>
int main(){
    int idade;
    float altura;
    char letra;
    char nome[20];


printf("Qual é a sua idade?\n");
scanf("%d", &idade);
printf("Qual é a sua altura?\n");
scanf("%f", &altura);
printf("Qual é a sua letra favorita?\n");
scanf(" %c", &letra);
printf("Qual é o seu nome?\n");
scanf("%s", nome);

printf("Seu nome é %s, sua idade é %d, sua altura é %.2f e sua letra favorita é %c.\n", nome, idade, altura, letra);   

}