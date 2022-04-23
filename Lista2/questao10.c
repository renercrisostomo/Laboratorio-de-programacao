/*
**Questão 10**
Elabore um programa que apresente os quadrados dos números inteiros múltiplos de 4 existentes na
faixa de valores de 15 a 90.
*/
#include <stdio.h>

int main(){
    int i, j;
    for (i = 15; i <= 90; i++){
        if (i % 4 == 0){
            j = i * i;
            printf("%d\n", j);
        }
    }
    return 0;
}