/*
**Questão 3**

 Faca um programa capaz de ler um valor real e escreve-lo com apenas uma casa decimal.
*/
#include <stdio.h>

int main(void) {
  float valor;
  printf("Digite um valor real: ");
  scanf("%f", &valor);
  printf("Valor: %0.1f", valor);
  return 0;
}



