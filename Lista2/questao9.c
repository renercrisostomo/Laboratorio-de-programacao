/*
**Questão 9**
A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc. Escreva
um algoritmo que gere a série de Fibonacci até o vigésimo termo.
*/
#include <stdio.h>

int main(){
    int anterior = 1, ultimo = 1, proximo, i;
    printf("1, 1, ");
    for(i = 1; i <= 20; i++){
        proximo = anterior + ultimo;
        anterior = ultimo;
        ultimo = proximo;
        printf("%d,", ultimo);
    }

    printf("O 20o termo da serie de Fibonacci: %d\n", ultimo);
    return 0;
}