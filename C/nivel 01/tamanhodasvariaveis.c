#include <stdio.h>

int main() {
    printf("Tamanho de int: %u byte(s)\n", sizeof(int));
    printf("Tamanho de long int: %u byte(s)\n", sizeof(long int));
    printf("Tamanho de long long int: %u byte(s)\n", sizeof(long long int));
    printf("Tamanho de double: %u byte(s)\n", sizeof(double));
    printf("Tamanho de long double: %u byte(s)\n", sizeof(long double));
   
    int numeroNormal = 2147483647; // Valor máximo de int
    long int numeroGrande = 2147483647;

    printf("Número regular (int): %d\n", numeroNormal);
    printf("Número grande (long int): %ld\n", numeroGrande);

    numeroGrande = 2147483648; // valor maior que o máximo de int
    printf("Número grande atualizado (long long int): %lld\n", numeroGrande);
    double numeroPreciso = 3.141592653589793;
    long double numeroMuitoPreciso = 3.141592653589793238463;

    printf("Número preciso (double): %.15f\n", numeroPreciso);
    printf("Número muito preciso (long double): %.21Lf\n", numeroMuitoPreciso);


    return 0;



}