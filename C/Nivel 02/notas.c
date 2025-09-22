#include <stdio.h>

  int main() {

    int nota;
    printf("Digite sua nota: ");
    scanf("%d", &nota);
    /*
    A >= 90
    B >= 80
    C >= 70
    D >= 60
    E >= 50
    F < 60
    */

    if (nota >= 90) {
        printf("Você tirou A!\n");
    } else if (nota >= 80) {
        printf("Você tirou B!\n");
    } else if (nota >= 70) {
        printf("Você tirou C!\n");
    } else if (nota >= 60) {
        printf("Você tirou D!\n");
    } else if (nota >= 50) {
        printf("Você tirou E!\n");
    } else {
        printf("Você tirou F!\n");
    }

  }