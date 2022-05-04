/*
**Questão 9**
Faça um programa que leia uma matriz bidimensional do usuário, de dimensão 3x3, e apresente os elementos da diagonal principal.
*/
#include <stdio.h>
#define TAM 3

int main(){
    int matriz[TAM][TAM], i, j;
    for (i = 0; i < TAM; i++){
        for (j = 0; j < TAM; j++){
            printf("Digite um valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < TAM; i++){
        printf("%d\n", matriz[i][i]);
    }
    return 0;
}