/*
**Questão 24**

 Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n.
Obs.: Utilize operadores binários.
*/
#include <stdio.h>

int main(){
    int x, n, i;
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    printf("o produto entre x por 2 elevado a n e: ", x * 2 ^ n);
    return 0;
    
}