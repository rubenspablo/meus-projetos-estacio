#include <stdio.h>
#include <stdlib.h>
    int main() {
        int num;
        printf("\n\tDigite um numero: ");
        scanf("%d", &num);
        if (num % 2 == 0 && num % 3 == 0 && num % 6 == 0) {
            printf("\n\tO numero %d é divisivel por 2, 3 e 6\n\n", num);
        } else {
            printf("\n\tO numero %d nao é divisivel por 2, 3 e 6\n\n", num);
        }
                
    
    }