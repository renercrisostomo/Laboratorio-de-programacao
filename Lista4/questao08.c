/*
## Questão 8

Escreva um programa que busque um caracter fornecido em uma string utilizando ponteiros.
*/
#include <stdio.h>

int main(){
    char a[100], b[100], *p, *q;
    p = a;
    q = b;
    printf("Digite uma string: ");
    scanf("%s", a);
    printf("Digite um caracter: ");
    scanf("%s", b);
    while(*p != '\0'){
        if(*p == *q){
            printf("O caracter %c esta na string %s\n", *q, a);
        }
        p++;
    }
    return 0;
}