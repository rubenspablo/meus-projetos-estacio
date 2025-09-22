#include <stdio.h>
   int main(){
         int a = 10;
         int b = 3;
         float quaciente = (float) a / b; // 'a' é implicitamente convertido para float
         printf("Resultado: %.2f\n", quaciente);
         return 0;
   }