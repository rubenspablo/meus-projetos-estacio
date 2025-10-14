#include <stdio.h>
#include <stdlib.h>
    int main() {
      // declarando variaveis
        int n1, n2, n3, maior, menor;
      // lendo tres numeros
         printf("Digite tres numeros: \n");
         scanf("%d%d%d", &n1, &n2, &n3);

            if (n1 > n2) {
               if (n1 > n3) 
                maior = n1;
               else 
                maior = n3;

            } else {
                if (n2 > n3) 
                    maior = n2;
                else 
                    maior = n3; 
            }
            if (n1 < n2) {
               if (n1 < n3) 
                menor = n1;
               else 
                menor = n3;

            } else {
                if (n2 < n3) 
                    menor = n2;
                else 
                    menor = n3; 
            }
            printf("Maior: %d\n", maior);
            printf("Menor: %d\n", menor);   
        }