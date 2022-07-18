/*
## QUESTÃO 1

Escreva um programa que leia iterativamente 1 mil valores inteiros da entrada padrão e mostre a sua média.
*/
#include <stdio.h>

int main() {
    int i, valor, soma = 0;
    float media;
    for (i = 0; i < 1000; i++) {
        puts("Digite o valor: ");
        scanf("%d", &valor);
        soma += valor;
    }
    media = (float)soma / 1000;
    printf("Media = %.2f\n", media);
    return 0;
}