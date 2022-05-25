/*
## Questão 4

Escreva um programa que leia um vetor do usuário e imprima seus valores e seus endereços. Teste
o vetor com tipos de dados diferentes, analise os endereços. O que você observou?
*/
#include <stdio.h>

int main(){
    int a[5], *p;
    p = a;
    for(int i = 0; i < 5; i++){
        printf("Digite um valor: ");
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("O valor e: %d\n", a[i]);
        printf("O endereco de memoria do valor e: %p\n", p);
        p++;
    }
    return 0;
}