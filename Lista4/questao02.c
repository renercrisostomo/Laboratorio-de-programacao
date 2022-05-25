/*
## Questão 2

Escreva um programa que troque o valor de dois números utilizando ponteiros.
*/
#include <stdio.h>

int main(){
    int a, b, *p, *q;
    p = &a;
    q = &b;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    *p = a;
    *q = b;
    printf("O valor do primeiro numero e: %d\n", *q);
    printf("O valor do segundo numero e: %d\n", *p);
    return 0;
}