#include <stdio.h>
  int main(){
        float nota1, nota2, nota3;
        float media;

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);

        //calculo da media com conversão explícita para float
        media = (nota1 + nota2 + nota3) / 3.0;
        printf("A média é: %.2f\n", media);



  }