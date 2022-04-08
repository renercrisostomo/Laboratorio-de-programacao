/*
**Questão 9**

 Escreva um programa que leia um valor numerico inteiro e apresente como resultado os seus valores
sucessor e antecessor.
*/
#include <stdio.h>

int main(){
    int valor;
    printf("Digite o valor: ");
    scanf("%d", &valor);
    printf("Sucessor: %d\n", valor + 1);
    printf("Antecessor: %d\n", valor - 1);
    return 0;
}