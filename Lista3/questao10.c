/*
**Questão 10**
Faça um programa que gere uma matriz bidimensional com elementos aleatórios e receba do usuário um valor inteiro x. O programa deve informar quantas vezes x aparece na matriz gerada.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3

int main(){
    int matriz[TAM][TAM], i, j, x, cont = 0;
    srand(time(NULL));
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            matriz[i][j] = rand() % 10;
        }
    }
    printf("Matriz gerada:\n");
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Digite um valor: ");
    scanf("%d", &x);
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            if (matriz[i][j] == x){
                cont++;
            }
        }
    }
    printf("O valor x = %d aparece %d vezes na matriz\n", x, cont);
    return 0;
}