#include <stdio.h>
int main(){
    // as variaveis foram declaradas juntas das duas cartas
    char estado1[40], estado2[40];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    char letra1, letra2;
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Carta 01
    printf("Olá jogador, seja bem vindo ao Super Trunfo! Um Mundo de disputas e guerras.\n");
    printf("Onde cada jogador enfrenta desafios jamais vistos, e batalhas épicas são vistas a todo o momento.\n");
    printf("Para esse desafio teremos que montar suas cartas desafiadoras.\n");
    printf("Você terá direito a duas cartas inicialmente.\n");
    printf("Então seja inteligente nas suas escolhas e boa sorte.\n\n");

    printf("Vamos começar com a primeira carta.\n\n");
    printf("Escolha seu estado.\n");
    scanf(" %[^\n]", estado1);

    printf("Escolha uma letra indicando o inicio do codigo da sua carta entre A - H\n");
    scanf(" %c", &letra1);
    printf("A Letra escolhida por você foi %c \n", letra1);

    printf("Agora vamos digitar um codigo para juntar com a letra que você ja escolheu\n");
    printf("Então vamos lá digite o codigo, os números seram de 01 à 04\n");
    scanf("%s", codigo1);

    printf("Sua carta tem o codigo = %c%s\n", letra1, codigo1);

    printf("Agora vamos preencher os dados da sua carta\n");
    printf("Qual o nome da sua cidade?\n");
    scanf(" %[^\n]", cidade1);
    printf("Qual a sua população?\n");
    scanf("%d", &populacao1);

    printf("Qual a sua área em Km²?\n");
    scanf("%f", &area1);

    printf("Qual o seu PIB em Bilhões de Reais (so precisa escrever os numeros)?\n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos tem sua cidade?\n");
    scanf("%d", &pontos1);

    // Carta 02
    printf("Vamos começar com a segunda carta.\n");
    printf("Lembre-se seja inteligente nas escolhas\n");

    printf("Vamos para a segunda carta.\n");
    printf("Escolha seu estado.\n");
    scanf(" %[^\n]", estado2);

    printf("Escolha uma letra indicando o inicio do codigo da sua carta entre A - H\n");
    scanf(" %c", &letra2);
    printf("A Letra escolhida por você foi %c\n", letra2);

    printf("Agora vamos digitar um codigo para juntar com a letra que você ja escolheu\n");
    printf("Então vamos lá digite o codigo, os números seram de 01 à 04\n");
    scanf("%s", codigo2);

    printf("Sua carta tem o codigo = %c%s\n", letra2, codigo2);

    printf("Agora vamos preencher os dados da sua carta\n");
    printf("Qual o nome da sua cidade?\n");
    scanf(" %[^\n]", cidade2);

    printf("Qual a sua população?\n");
    scanf("%d", &populacao2);

    printf("Qual a sua área em Km²?\n");
    scanf("%f", &area2);

    printf("Qual o seu PIB em Bilhões de Reais (so precisa escrever os numeros)?\n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem sua cidade?\n");
    scanf("%d", &pontos2);

    printf("Agora vamos ver suas cartas\n\n");

    printf("Carta 01");
    printf("Estado: %s\n", estado1);
    printf("Código: %c%s\n", letra1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n\n", pontos1);

    printf("Carta 02");
    printf("Estado: %s\n", estado2);
    printf("Código: %c%s\n", letra2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n\n", pontos2);

    printf("Agora você conhece suas cartas e está preparado para o novo mundo\n");

    return 0;
}

