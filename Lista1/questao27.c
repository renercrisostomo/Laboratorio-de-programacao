/*
**Questão 27**

 Escreva um programa que solicite 3 numeros em ponto flutuante e imprima a media aritmetica e geometrica. (Utilize a funcao `pow(base, expoente)` da biblioteca math.h).
*/
#include <stdio.h>
#include <math.h>

int main(){
    float num1, num2, num3, mediaAritmetica, mediaGeometrica;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);
    mediaAritmetica = (num1 + num2 + num3) / 3;
    mediaGeometrica = pow((num1 * num2 * num3), 1/3);
    printf("Media Aritmetica: %f\nMedia Geometrica: %f\n", mediaAritmetica, mediaGeometrica);
}