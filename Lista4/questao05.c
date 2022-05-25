/*
## Questão 5

Escreva um programa que encontre o tamanho de uma string fornecida. Utilize ponteiros.
*/
#include <stdio.h>

int main(){
    char a[100], *p;
    p = a;
    printf("Digite uma string: ");
    scanf("%s", a);
    while(*p != '\0'){
        p++;
    }
    printf("O tamanho da string e: %d\n", p - a);
    return 0;
}