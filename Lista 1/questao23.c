/*
**Questão 23**

 Escreva um programa que receba a entrada de um numero de tres digitos, separe o numero em seus digitos componentes e reconstrua um numero com os componentes na ordem inversa. Exemplo: para entrada de 123, a resposta do programa seria 321.
*/
#include <stdio.h>

int main(){
    int num, num1, num2, num3;
    printf("Digite um numero de tres digitos: ");
    scanf("%d", &num);
    num1 = num / 100;
    num2 = (num % 100) / 10;
    num3 = num % 10;
    num = num3 * 100 + num2 * 10 + num1;
    printf("%d", num);
    return 0;
}