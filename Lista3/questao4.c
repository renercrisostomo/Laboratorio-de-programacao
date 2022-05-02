/*
**Questão 4**
Faça um programa em C que leia duas strings do usuário e informe se elas são iguais. Faça uma versão com o uso da função `strcmp()` e outra sem.
*/
#include <stdio.h>

int main(){
    char string1[100], string2[100];
    int i, iguais = 1;
    printf("Digite a string1: ");
    scanf("%s", string1);
    printf("Digite a string2: ");
    scanf("%s", string2);
    for (i = 0; i < 100; i++){
        if (string1[i] != string2[i]){
            iguais = 1;
            break;
        }
    }
    if (iguais){
        printf("As strings sao iguais\n");
    } else {
        printf("As strings sao diferentes\n");
    }
    return 0;
}