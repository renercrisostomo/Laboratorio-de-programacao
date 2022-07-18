/*
## QUESTÃO 2

Escreva um programa que receba números positivos do usuário e verifique se o maior valor fornecido é divisível pelo menor valor fornecido. O programa encerra quando o usuário digitar um valor negativo.
*/
#include <stdio.h>

int main() {
    int numero, maior, menor;
    puts("Digite um numero inteiro: ");
    scanf("%d", &numero);
    maior = numero;
    menor = numero;
    while (numero >= 0) {
        puts("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if (numero > maior) maior = numero;
        else if (numero < menor) menor = numero;
        printf("Maior = %d e Menor = %d\n", maior, menor);

        (maior % menor == 0)? puts("Divisivel") : puts("Nao divisivel");
    }
    return 0;
}