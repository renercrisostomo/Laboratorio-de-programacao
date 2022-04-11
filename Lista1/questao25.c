/*
**Questão 25**

 Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos ha neste tempo.
*/
#include <stdio.h>

int main(){
    int segundos, horas, minutos;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundos = (segundos % 3600) % 60;
    printf("%d horas, %d minutos e %d segundos", horas, minutos, segundos);
}