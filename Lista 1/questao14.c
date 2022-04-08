/*
**Questão 14**

 Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
Fahrenheit. A formula de versao ́e `F = (9 * C + 160) / 5`, sendo F a temperatura Fahrenheit e C a
temperatura em Celsius.
*/
#include <stdio.h>

int main(){
    float c, f;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    f = (9 * c + 160) / 5;
    printf("Temperatura em Fahrenheit: %f", f);
    return 0;
}