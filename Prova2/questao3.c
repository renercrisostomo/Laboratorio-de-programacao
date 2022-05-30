/*
QUESTÃO 3

Escreva uma função em C que receba uma string, um caracter c e o ponteiro para um buffer. O buffer
deve conter a string recebida até a primeira ocorrência de c. A função também deve retornar a quantidade
de caracteres válidos escritos no buffer.
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
