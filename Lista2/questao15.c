/*
**Questão 15**
Elaborar um programa que apresente os resultados das potências do valor de base 3, elevado a um
expoente que varie do valor 0 a 7.
*/
#include <stdio.h>

int main(){
    int base, expoente, i;
    for(i = 0; i <= 7; i++){
        base = 3;
        expoente = i;
        printf("%d elevado a %d = %d\n", base, expoente, base * expoente);
    }
    return 0;
}