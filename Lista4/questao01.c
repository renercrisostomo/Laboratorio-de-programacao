/*
## Questão 1

Escreva um programa que adicione dois números usando ponteiros. Além do valor da soma, imprima
também o endereço de memória onde o valor resultante dessa soma está armazenado.
*/

#include <stdio.h>

int main () {
    int a, b, *p;
    p = &a;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    *p = a + b;
    printf("O valor da soma e: %d\n", *p);
    printf("O endereco de memoria do valor da soma e: %p\n", p);
    return 0;
}