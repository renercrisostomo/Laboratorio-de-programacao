/*
**Questão 7**
Faça um programa em C que gere um vetor com 3 números inteiros pseudoaleatórios no intervalo [0, 19] e apresente a sua média aritmética e geométrica.
*/
#include <stdio.h>
#include <math.h>
#define TAM 3

int main (){
    int vetor[TAM], i;
    float media = 0, geom = 1;
    for (i = 0; i < TAM; i++){
        vetor[i] = rand() % 20;
        media += vetor[i];
        geom *= vetor[i];
    }
    media /= TAM;
    geom = pow(geom, 1/TAM);

    printf("Media Aritmetica =  %f\n", media);
    printf("Media Geometrica = %f\n", geom);
    return 0;
}