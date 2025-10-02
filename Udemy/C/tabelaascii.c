#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    int main() {

        setlocale(LC_ALL, "Portuguese");
        printf("\n\tCoração\n\n");
        int i;
        for(i = -128; i <= 127; i++) {
            printf("%c, ", i);
        }
        printf("\n\n");
    }