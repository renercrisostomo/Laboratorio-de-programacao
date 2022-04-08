/*
**Questão 7**

 Faca um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.

*/
#include <stdio.h>

int main(){
    int horas, minutos, segundos, total;
    printf("Digite as horas: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    printf("Digite os segundos: ");
    scanf("%d", &segundos);
    total = (horas * 3600) + (minutos * 60) + segundos;
    printf("Total de segundos: %d", total);
    return 0;
}