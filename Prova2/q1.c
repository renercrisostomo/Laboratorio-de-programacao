/*
QUESTÃO 1

Escreva um programa em C que dado um vetor de inteiros A com dimensão k, armazene em B os
elementos pares de A. Os valor de k deve ser fornecido por linha de comando (argc e argv). Se A não
tiver valor par, uma mensagem deve ser exibida.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define MIN 1

int vetorb(int *, int *, int);
void imprimirVetor(int *, int);

int main(int argc, char *argv[]){
  int tam;
  int *pvetor;
  int *pvetorb;
  int todosimpares;

  tam = atoi(argv[1]);
  
  pvetor = malloc (tam * sizeof(int));
  pvetorb = malloc (tam * sizeof(int));
  printf("\n");
  
  // preenchendo os vetores
  srand(time(NULL));
  for (int k=0; k<tam; k++){
    *(pvetor + k) = MIN + rand() % MAX;
  }
  todosimpares = vetorb(pvetor, pvetorb, tam);

  if (!todosimpares){
    printf("Erro - todos impares");
    exit(1);
  }
  
  // imprimindo os vetores
  puts("Vetor A: ");
  imprimirVetor(pvetor, tam);

  puts("Vetor B: ");
  imprimirVetor(pvetorb,tam);
  
  free(pvetor);
  free(pvetorb);
  return 0;
}

int vetorb(int *p, int *pvetorb, int tam){
  int todosimpares = 0;
  for (int k=0; k<tam; k++){
    if (*(p + k)%2){
      *(pvetorb + k) = 0;
    }
    else{
      *(pvetorb + k) = *(p + k);
      todosimpares = 1;
    }
  }
  return todosimpares;
}

void imprimirVetor(int *p, int tam){
  for (int k=0; k<tam; k++){
    printf("[%p] : %d\n",p+k,*(p + k));
  }
  puts("");
}