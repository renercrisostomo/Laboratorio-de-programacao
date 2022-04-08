/*
**Questão 2**

 Faca um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
hexadecimal e octal.
Ex.: Entre com o valor: 10
Hexadecimal: A
Octal: 12
*/

#include <stdio.h>

int main()
{
    int valor;
    printf("Entre com o valor: ");
    scanf("%d", &valor);
    printf("Hexadecimal: %x\n", valor);
    printf("Octal: %o\n", valor);
    return 0;
}