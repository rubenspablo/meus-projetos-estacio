#include <stdio.h>
#include <stdlib.h>
#include <time.h>

   int main(){
       int opcao;
       int numeroSecreto, palpite;

       printf("Menu Principal\n");
       printf("1 - Jogar\n");
       printf("2 - Ver Regras\n"); 
       printf("3 - Sair\n");
       printf("Escolha uma opcao: ");
       scanf("%d", &opcao);
       
       switch (opcao)
       {
       case 1:
          
        srand(time(0));
        numeroSecreto = rand() % 10;
        printf("Digite um numero de 0 à 9: ");
        scanf("%d", &palpite);
        if (numeroSecreto == palpite) {
            printf("Parabens voce acertou o numero secreto!\n");
            printf("Numero secreto %d\n", numeroSecreto);
        } else {
            printf("Que pena voce errou o numero secreto que era %d\n", numeroSecreto);
            printf("Numero secreto %d\n", numeroSecreto);
        }
        
        
         break;
       case 2:
            printf("Regras do Jogo:\n");
         break;
       case 3:
            printf("Saindo do jogo...\n");
         break;      
       default:
       printf("Opcao invalida!\n");
        break;
       }





   }