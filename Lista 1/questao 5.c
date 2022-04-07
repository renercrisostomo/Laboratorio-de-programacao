/*
Questão 5

 Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
pago, considerando que o restaurante cobra 10% de taxa para o garcom.
*/
#include <stdio.h>

int main(void) {
  float valor;
  float taxa = 0.1;
  printf("Digite o valor da compra: ");
  scanf("%f", &valor);
  float total = valor + valor * taxa;
  printf("Total da compra: %f\n", total);
  return 0;
}