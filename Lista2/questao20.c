/*
**Questão 20**
Construir um programa que apresente como resultado o fatorial dos valores ímpares situados na faixa
número de 1 a 10.
*/
#include <stdio.h>

int main(){
    int i, fatorial = 1;
    for(i = 1; i <= 10; i++){
        if(i % 2 != 0){
            fatorial *= i;
            printf("%d! = %d\n", i, fatorial);
        }
    }
    return 0;
}