#include <stdio.h>
   int main() {
    char letra = 'a';
    //usando a função scanf
    printf("\n\tDigite uma letra qualquer: ");
    scanf(" %c", &letra);
    printf("\n\tLetra: %c\n", letra);

    // usando a função getchar
    printf("\n\tDigite mais uma letra qualquer: ");
    while ((letra = getchar()) != '\n');
    letra = getchar();
    printf("\n\tLetra: %c\n", letra);

    // usando a função getc()
    printf("\n\tDigite uma letra para teste: ");
    letra = getc(stdin);
    printf("\n\tLetra: %c\n", letra);

    // usando a função fgetc()
    printf("\n\tDigite outra letra: ");
    letra = fgetc(stdin);
    printf("\n\tLetra: %c\n", letra);
    return 0;

   }