/*
**Questão 10**

 Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
formula `VOLUME = COMPRIMENTO * LARGURA * ALTURA`.
*/
#include <stdio.h>

int main(){
    float comprimento, largura, altura, volume;
    printf("Digite o Comprimento: ");
    scanf("%f", &comprimento);
    printf("Digite a Largura: ");
    scanf("%f", &largura);
    printf("Digite a Altura: ");
    scanf("%f", &altura);
    volume = comprimento * largura * altura;
    printf("Volume = %f", volume);
    return 0;
}