/*
**Questão 17**
Elaborar um programa que apresente os valores de conversão de graus Celsius em graus Fahrenheit,
de 10 em 10 graus, iniciando a contagem em dez graus Celsius e finalizando em cem graus Celsius. O
programa deve apresentar os valores das duas temperaturas. Obs.: Pesquise a fórmula de conversão.
*/
#include <stdio.h>

int main(){
    int celsius, fahrenheit, i;
    for(i = 10; i <= 100; i += 10){
        celsius = i;
        fahrenheit = (celsius * 9/5) + 32;
        printf("%d graus Celsius = %d graus Fahrenheit\n", celsius, fahrenheit);
    }
    return 0;
}