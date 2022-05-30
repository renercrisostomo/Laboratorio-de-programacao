/*
## Questão 3

Escreva um programa que solicite iterativamente um número do usuário e imprima sempre o menor
valor fornecido. Crie um critério para finalização do programa. Utilize ponteiros.
*/
#include <stdio.h>

int main(){
    int a, *p;
    p = &a;
    printf("Digite um valor: ");
    scanf("%d", &a);
    while(a != 0){
        if(a < *p){
            *p = a;
        }
        printf("Digite um valor: ");
        scanf("%d", &a);
        printf("O menor valor e: %d\n", *p);
    }
    printf("Fim do programa\n");
    return 0;
}