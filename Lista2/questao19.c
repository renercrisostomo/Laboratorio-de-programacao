/*
**Questão 19**
Elaborar um programa que apresente a média aritmética dos números inteiros existentes entre uma
faixa especificada pelo usuário.
*/
#include <stdio.h>

int main(){
    int a, b, i, soma = 0, cont = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    if(a > b){
        for(i = b; i <= a; i++){
            soma += i;
            cont++;
        }
    }
    else{
        for(i = a; i <= b; i++){
            soma += i;
            cont++;
        }
    }
    printf("Media aritmetica entre %d e %d: %.2f\n", a, b, (float)soma / cont);
    return 0;
}