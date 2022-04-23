/*
**Questão 16**
Escreva um programa que apresente o somatório de todos os números divisíveis por 3 pertencentes ao
intervalo [0,100] e o somatório de todos os números divisíveis por 5 pertencentes ao intervalo ]100,200].
Obs.: Utilize apenas um laço de repetição.
*/
#include <stdio.h>

int main(){
    int i, soma = 0;
    for(i = 0; i <= 100; i++){
        if(i % 3 == 0){
            soma += i;
        }
    }
    for(i = 100; i <= 200; i++){
        if(i % 5 == 0){
            soma += i;
        }
    }
    printf("Soma dos numeros divisíveis por 3 e 5 entre 0 e 200: %d\n", soma);
    return 0;
}