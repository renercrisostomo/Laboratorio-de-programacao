/*
**Questão 5**
Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido.
A condição de termino do programa é quando o usuário digitar zero.
*/
#include <stdio.h>

int main (){
    int n, maior, menor, i;
    printf("Digite um numero: ");
    scanf("%d", &n);
    maior = menor = n;
    i = 1;
    while (n != 0){
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n > maior) maior = n;
        if (n < menor) menor = n;
        i++;
    }
    printf("O maior numero digitado foi %d\n", maior);
    printf("O menor numero digitado foi %d\n", menor);
    printf("Voce digitou %d numeros\n", i);
    return 0;
}