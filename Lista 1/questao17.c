/*
**Questão 17**

 Escrever um programa que receba um valor inteiro do usuario e apresente o seu valor absoluto (modulo).
Nao utilize estrutura de decisao `if`.
*/
#include <stdio.h>
#include <math.h>

int main(){
    int valor;
    printf("Digite o valor: ");
    scanf("%d", &valor);
    valor = scr(valor * valor);
    printf("Valor absoluto: %d", valor);
}