#include <stdio.h>
#include <stdlib.h>
    int main() { // estrutura do while (faca enquanto)
        int x = 0;
           
        do
        {
         printf("Digite um valor entre 1 e 99: ");
         scanf("%d", &x);
            if (x<1 || x>99) {
                printf("Valor inválido! Digite um valor entre 1 e 99: ");
                scanf("%d", &x);    
            }
                
        } while (x<1 || x>99);
        printf("Valor válido: %d\n", x);

                
    
    }