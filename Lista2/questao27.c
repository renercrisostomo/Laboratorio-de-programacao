/*
**Questão 27**
Escreva um programa que receba vários números inteiros (em uma estrutura de laço) e apresente o
produto do maior pelo menor número apresentado. (Obs.: Não utilize vetores.) A condição de saída
do laço é o usuário digitar um número negativo e par.
*/
#include <stdio.h>

int main(){
    int num, maior, menor, produto = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while(num >= 0){
        if(num > maior){
            maior = num;
        }
        if(num < menor){
            menor = num;
        }
        printf("Digite um numero: ");
        scanf("%d", &num);
    }
    for(num = maior; num >= menor; num--){
        produto *= num;
    }
    printf("Produto do maior pelo menor: %d\n", produto);
    return 0;
}