/*
## QUESTÃO 1

Defina uma Estrutura para armazenar um par (x,y) de coordenadas. Organize um vetor dessas Estruturas alocado ninamicamente. Para cada Estrutura, imprima a **soma(x + y)**. Gere os valores c e y aleatoriamente.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

srand(time(NULL));

struct coordenada {
    int x;
    int y;
};

int main(){
    int i, tam;
    puts("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    struct coordenada *pEstruturas;
    pEstruturas = (struct coordenada *)malloc(sizeof(struct coordenada) * tam);
    for (i = 0; i < MAX; i++) {
        pEstruturas[i].x = rand() % MAX;
        pEstruturas[i].y = rand() % MAX;
        printf("(%d, %d) = %d\n", pEstruturas[i].x, pEstruturas[i].y, pEstruturas[i].x + pEstruturas[i].y);
    }
    free(pEstruturas);
    return 0;
}