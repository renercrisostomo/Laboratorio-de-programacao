/*
QUESTÃO 4

Dado um vetor de inteiros V e um valor `t` também inteiro, escreva uma função em C que grave em um
vetor K valores 0 e 1 conforme a regra a seguir:

Ki = ( 1, se Vi > t | 0, caso contrário )
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define MIN 1

void vetork(int *, int *, int, int);
void imprimirVetor(int *, int);

int main(){
  int tam, t;
  int *pvetor;
  int *pvetork;

  puts("Escreva o valor da variavel t: ");
  scanf("%d", &t);

  puts("Escreva o tamanho do vetor: ");
  scanf("%d", &tam);
  pvetor = malloc (tam * sizeof(int));
  pvetork = malloc (tam * sizeof(int));
  printf("\n");
  
  // preenchendo os vetores
  srand(time(NULL));
  for (int k=0; k<tam; k++){
    *(pvetor + k) = MIN + rand() % MAX;
  }
  vetork(pvetor, pvetork, tam, t);
  
  // imprimindo os vetores
  puts("Vetor: ");
  imprimirVetor(pvetor, tam);

  puts("Vetor K: ");
  imprimirVetor(pvetork,tam);
  
  free(pvetor);
  free(pvetork);
  return 0;
}

void vetork(int *p, int *pvetork, int tam, int t){
  for (int k=0; k<tam; k++){
    *(pvetork + k) = (*(p + k) > t)? 1 : 0;
  }
}

void imprimirVetor(int *p, int tam){
  for (int k=0; k<tam; k++){
    printf("[%p] : %d\n",p+k,*(p + k));
  }
  puts("");
}