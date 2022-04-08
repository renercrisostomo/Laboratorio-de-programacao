/*
**Questão 13**

 Escreva um programa que leia duas variaveis A e B e efetue a troca dos valores. O objetivo  ́e que a
variavel A passe a conter o valor de B e a variavel B passe a possuir o valor de A. Apresente os valores
apos a efetivacao do processamento da troca.
*/
#include <stdio.h>

int main(){
    int a, b, c;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    return 0;
}