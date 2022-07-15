/*
Questão 2

Escreva um programa em C que utilize uma Estrutura estoque que contém uma string com o
`nomePeca`, um número inteiro para identificar o número da peça, o preço em ponto flutuante e um
elemento inteiro para identificar o número do pedido.
*/
#include <stdio.h>
#include <stdlib.h>

struct estoque{
    char nomePeca[50];
    int numeroPeca;
    float preco;
    int numeroPedido;
} estoque;

int main(){
    printf("Digite o nome da peça: ");
    scanf("%s", estoque.nomePeca);

    printf("Digite o número da peça: ");
    scanf("%d", &estoque.numeroPeca);

    printf("Digite o preço da peça: ");
    scanf("%f", &estoque.preco);

    printf("Digite o número do pedido: ");
    scanf("%d", &estoque.numeroPedido);
    
    printf("Nome da peça: %s\n", estoque.nomePeca);
    printf("Número da peça: %d\n", estoque.numeroPeca);
    printf("Preço da peça: %.2f\n", estoque.preco);
    printf("Número do pedido: %d\n", estoque.numeroPedido);
    return 0;
}