#include <stdio.h>
int main(){
    // jogo do Super Trunfo
    // as variaveis foram declaradas juntas das duas cartas
    char estado1[40], estado2[40];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    char letra1, letra2;
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Apresentação do jogo
    printf("Olá jogador, seja bem vindo ao Super Trunfo! Um Mundo de disputas e guerras.\n");
    printf("Onde cada jogador enfrenta desafios jamais vistos, e batalhas épicas são vistas a todo o momento.\n");
    printf("Para esse desafio teremos que montar suas cartas desafiadoras.\n");
    printf("Você terá direito a duas cartas inicialmente.\n");
    printf("Então seja inteligente nas suas escolhas e boa sorte.\n\n");


    //carta 01
    //escolha do Estado
    printf("Vamos começar com a primeira carta.\n\n");
    printf("Escolha seu estado.\n");
    scanf(" %[^\n]", estado1);

    //escolha da letra
    printf("Escolha uma letra indicando o inicio do codigo da sua carta entre A - H\n");
    scanf(" %c", &letra1);
    printf("A Letra escolhida por você foi %c \n", letra1);

    //escolha do código numerico
    printf("Agora vamos digitar um codigo para juntar com a letra que você ja escolheu\n");
    printf("Então vamos lá digite o codigo, os números seram de 01 à 04\n");
    scanf("%s", codigo1);

    // resultado do código
    printf("Sua carta tem o codigo = %c%s\n", letra1, codigo1);

    //escolha da cidade
    printf("Agora vamos preencher os dados da sua carta\n");
    printf("Qual o nome da sua cidade?\n");
    scanf(" %[^\n]", cidade1);

    //população da cidade
    printf("Qual a sua população?\n");
    scanf("%d", &populacao1);

    //área demográfica da cidade
    printf("Qual a sua área em Km²?\n");
    scanf("%f", &area1);

    //O PIB da cidade
    printf("Qual o seu PIB em Bilhões de Reais (so precisa escrever os numeros)?\n");
    scanf("%f", &pib1);

    //pontos turísticos da cidade
    printf("Quantos pontos turísticos tem sua cidade?\n");
    scanf("%d", &pontos1);

    // Carta 02
    printf("Vamos começar com a segunda carta.\n");
    printf("Lembre-se seja inteligente nas escolhas\n");

    // escolha do estado 2
    printf("Escolha seu estado.\n");
    scanf(" %[^\n]", estado2);

    //escolha da letra
    printf("Escolha uma letra indicando o inicio do codigo da sua carta entre A - H\n");
    scanf(" %c", &letra2);
    printf("A Letra escolhida por você foi %c\n", letra2);

    //escolha do código numerico 2
    printf("Agora vamos digitar um codigo para juntar com a letra que você ja escolheu\n");
    printf("Então vamos lá digite o codigo, os números seram de 01 à 04\n");
    scanf("%s", codigo2);

    // resultado do código 2
    printf("Sua carta tem o codigo = %c%s\n", letra2, codigo2);

    //preenchimento cidade 2
    printf("Agora vamos preencher os dados da sua carta\n");
    printf("Qual o nome da sua cidade?\n");
    scanf(" %[^\n]", cidade2);

    //população da cidade 2
    printf("Qual a sua população?\n");
    scanf("%d", &populacao2);

    //área demográfica da cidade 2
    printf("Qual a sua área em Km²?\n");
    scanf("%f", &area2);

    //O PIB da cidade 2
    printf("Qual o seu PIB em Bilhões de Reais (so precisa escrever os numeros)?\n");
    scanf("%f", &pib2);

    //pontos turísticos da cidade 2
    printf("Quantos pontos turísticos tem sua cidade?\n");
    scanf("%d", &pontos2);

    printf("Agora vamos ver suas cartas\n\n");

    // resultado final

    printf("Carta 01\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %c%s\n", letra1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d de habitantes.\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de Reais\n", pib1);
    printf("Pontos turísticos: %d\n\n", pontos1);

    printf("Carta 02\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %c%s\n", letra2, codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d de habitantes.\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de Reais\n", pib2);
    printf("Pontos turísticos: %d\n\n", pontos2);

    printf("Agora você conhece suas cartas e está preparado para o novo mundo\n");

    return 0;
}

