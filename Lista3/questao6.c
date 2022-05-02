/*
**Questão 6**
Faça um programa em C que leia uma string do usuário e a apresente na forma inversa.
*/


#include <stdio.h>

int main(){
    char string[100], string2[100];
    int i, j;
    printf("Digite uma string: ");
    scanf("%s", string);
    for (i = 0, j = 99; i < 100; i++, j--){
        string2[j] = string[i];
    }
    printf("%s\n", string2);
    return 0;
}