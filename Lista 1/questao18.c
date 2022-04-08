/*
**Questão 18**

 Escreva um programa que leia o raio de um circulo e imprima seu diametro, o valor de sua circunferencia
e sua ́area. Use o valor de 3,14159 para "pi". Faca cada um destes calculos dentro da instrucoes (ou
instrucoes) `printf` e use o especificador de conversao `%f`.
*/
#include <stdio.h>
#define PI 3.14159

int main() {
  float raio;
  printf("Digite o raio: ");
  scanf("%f", &raio);
  printf("Diametro: %f\n", raio * 2);
  printf("Circunferencia: %f\n", PI * raio * 2);
  printf("Area: %f\n", PI * (raio * raio));
  return 0;
}