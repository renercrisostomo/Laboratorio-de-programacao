/*
**Questão 8**

 Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao
quadrado.
*/
#include <stdio.h>

int main(){
    int valor;
    printf("Digite o valor: ");
    scanf("%d", &valor);
    printf("Quadrado: %d", valor * valor);
    return 0;
}