/*
**Questão 23**
Escreva um programa que mostre a diferença entre pré-incrementar e pós-incrementar usando o ope-
rador `–`.
*/
#include <stdio.h>

int main(){
    int i, j;
    i = j = 0;
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("i++ = %d\n", ++i);
    printf("j++ = %d\n", ++j);
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("++i = %d\n", i++);
    printf("++j = %d\n", j++);
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    return 0;
}