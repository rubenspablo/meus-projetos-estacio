#include <stdio.h>
#include <stdlib.h>
          int main() {
            int x;
               printf("Digite um valor entre 1 e 99: ");
               scanf("%d", &x);
            while (x<1 || x>99)
            {
                printf("Valor inválido! Digite um valor entre 1 e 99: ");
                scanf("%d", &x);    
                
            }
            printf("Valor válido: %d\n", x);
            


                       
          }