/*
QUESTÃO 2

Escreva um programa em C que retorne o endereço do maior elemento de um vetor X com dimensões
alocadas dinamicamente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define MIN 1

void maior(int *, int, int *);

int main(){
  int tam;
  int *pvetor;
  int *pmaior;

  puts("Escreva o tamanho do vetor: ");
  scanf("%d", &tam);
  pvetor = malloc (tam * sizeof(int));
  
  // preenchendo o vetor
  srand(time(NULL));
  for (int k=0; k<tam; k++){
    *(pvetor + k) = MIN + rand() % MAX;
  }
  maior(pvetor, tam, pmaior);
  
  // imprimindo o vetor
  puts("Vetor: ");
  for (int k=0; k<tam; k++){
    printf("[%p] : %d\n",pvetor+k,*(pvetor + k));
  }
  puts("");
  
  puts("Maior: ");
  printf("[%p] : %d\n", pmaior, *pmaior);
  
  free(pvetor);
  return 0;
}

void maior(int *p, int tam, int *pmaior){
  *pmaior = 0;
  for (int k=0; k<tam; k++){
    if(*(p + k) > *pmaior){
      *pmaior = *(p + k);
    }
  }
}