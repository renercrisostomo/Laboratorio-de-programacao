/*
**Questão 22**
Escreva um programa que leia um número inteiro e determine e imprima quantos dígitos no inteiro são
algarismos 7.
*/
#include <stdio.h>

int main(){
    int numero, i, contador = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    while(numero != 0){
        if(numero % 10 == 7){
            contador++;
        }
        numero /= 10;
    }
    printf("O numero digitado possui %d algarismos 7\n", contador);
    return 0;
}