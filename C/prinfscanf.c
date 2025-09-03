#include <stdio.h>

int main(){
    int idade;
    float altura;
    char nome[30];
    char sexo;
   


    printf("Qual o seu nome? \n");
    scanf("%[^\n]", nome);
    printf("Qual a sua idade? \n");
    scanf("%d", &idade);
    printf("Qual a sua altura? \n");
    scanf("%f", &altura);
    printf("Qual o seu sexo? \n");
    scanf(" %c", &sexo);    
    printf("Seu nome e %s, sua idade e %d, sua altura e %.2f e seu sexo é %c. \n", nome, idade, altura, sexo);
    return 0;
}