/*
**Questão 12**
Elaborar um programa que mostre os resultados da tabuada de um número inteiro qualquer, a qual
deve ser apresentada de acordo com sua forma tradicional.
*/
#include <stdio.h>

int main(){
    int numero, i;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for(i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}