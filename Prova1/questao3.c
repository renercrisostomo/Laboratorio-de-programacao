/*
## QUESTÃO 3

Em sistemas operacionais, diz-se que um sistema de tempo real é escalonável se atende ao seguinte critério:

somatório de Ci/Pi <= 1; i de 1 à m.

onde _m_ é a quantidade de eventos periódicos, o evento _i_ ocorre com o peíodo Pi e exige Ci segundos de tempo de CPU.
Escreva um programa em C que permita ao usuário fornecer o período (P) e o tempo de CPU (C) para três eventos (m = 3) e informe se o sistema é esccalonável ou não. Não use vetores. Leia os dados para cada evento utilizando a função scanf().
*/
#include <stdio.h>
#define M 3

int main() {
    int i, P, C;
    float soma = 0;
    for (i = 0; i < M; i++) {
        puts("Digite o período: ");
        scanf("%d", &P);
        puts("Digite o tempo de CPU: ");
        scanf("%d", &C);
        soma += (float)C / P;
    }
    (soma <= 1)? puts("Escalonável") : puts("Não escalonável");
    return 0;
}