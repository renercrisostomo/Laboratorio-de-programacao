/*
**Questão 9**
A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc. Escreva
um algoritmo que gere a série de Fibonacci até o vigésimo termo.
*/
#include <stdio.h>

int main(){
    int n, i, a, b, c;
    printf("Digite um numero: ");
    scanf("%d", &n);
    a = 1;
    b = 1;
    c = 0;
    i = 3;
    while (i <= n){
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    printf("O %d termo da série de Fibonacci e: %d\n", n, c);
    return 0;
}