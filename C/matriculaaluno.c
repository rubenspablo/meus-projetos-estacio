#include <stdio.h>

int main(){
   int idade, matricula;
   float altura;
   char nome[50];

   printf("Digite seu nome: ");
   scanf(" %[^\n]", nome);
   printf("Seu nome é %s\n", nome);
   
   printf("Digite sua idade: ");
   scanf("%d", &idade);
   printf("Sua idade é %d\n", idade);

   printf("Digite sua altura: ");
   scanf("%f", &altura);
   printf("Sua altura é %.2f\n", altura);

   printf("Digite sua matrícula: ");
   scanf("%d", &matricula);
   printf("Sua matrícula é %d\n", matricula);

   return 0;
}