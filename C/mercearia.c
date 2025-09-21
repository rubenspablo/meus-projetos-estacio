#include <stdio.h>
int main(){

    // Definindo produtos e seus estoques
    char produtoA[20] = "Produto A";
    char produtoB[20] = "Produto B";

    // Usando unsigned int para representar estoques, já que não podem ser negativos
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2500;

    // valor dos produtos
    float precoA = 19.99;
    float precoB = 29.99;

    // Estoque Minimo
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    // Valor toal
    double ValortotalA;
    double ValortotalB;

    int resultadoA, resultadoB;


    // Informações do produto
    printf("Produto %s tem estoque %u de unidades e preço R$ %.2f\n", produtoA, estoqueA, precoA);
    printf("Produto %s tem estoque %u de unidades e preço R$ %.2f\n", produtoB, estoqueB, precoB);

    // Comparação com o valor minimo do estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;


    printf("Estoque do %s é maior que o estoque minimo? %d\n", produtoA, resultadoA);
    printf("Estoque do %s é maior que o estoque minimo? %d\n", produtoB, resultadoB);
    
    
    // Comparações entre os valores totais dos produtos
    printf("O Valor Total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d\n", (estoqueA * precoA), (estoqueB * precoB), (estoqueA * precoA) > (estoqueB * precoB));
}