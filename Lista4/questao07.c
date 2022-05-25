/*
## Questão 7

Escreva um programa que concatene duas strings utilizando ponteiros.
*/
#include <stdio.h>

int main(){
    char a[100], b[100], *p, *q;
    p = a;
    q = b;
    printf("Digite uma string: ");
    scanf("%s", a);
    printf("Digite outra string: ");
    scanf("%s", b);
    while(*p != '\0'){
        *q = *p;
        p++;
        q++;
    }
    while(*b != '\0'){
        *q = *b;
        b++;
        q++;
    }
    printf("A string concatenada e: %s\n", a);
    return 0;
}