/*
**Questão 4**
Implementar um programa para resolver o seguinte problema: José tem 150 centímetros e cresce 2
centímetros por ano. O Pedro tem 110 centímetros e cresce 3 centímetros por ano. Em quantos anos
Pedro será maior que José?
*/
#include <stdio.h>

int main(){
    int jose = 150, pedro = 110, anos = 0;

    while (pedro < jose){
        pedro += 3;
        jose += 2;
        anos++;
    }

    printf("%d anos\n", anos);
    return 0;
}