/*
**Questão 4**

 Sabendo que os argumentos da funcao "printf" podem ser expressoes (a+b, a/b, a*b...), e nao somente
argumentos, faca um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e
seu meio.
*/
#include <stdio.h>

int main(void) {
  int valor;
  printf("digite um valor inteiro: ");
  scanf("%d", &valor);
  printf("Triplo: %d\n", valor * 3);
  printf("Quadrado: %d\n", valor * valor);
  printf("Meio: %d\n", ((float)valor) / 2);
  return 0;
}