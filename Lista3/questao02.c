/*
**Questão 2**
Faça um programa em C que leia uma string e um caractere do usuário e informe se a string de entrada contém o caracter fornecido.
*/
#include <stdio.h>

int main (){
    char string[100];
    char caractere;
    int i, contem = 0;
    printf("Digite uma string: ");
    scanf("%s", string);
    printf("Digite um caractere: ");
    scanf("%c", &caractere);
    for (i = 0; i < 100; i++){
        if (string[i] == caractere){
            contem = 1;
            break;
        }
    }
    if (contem){
        printf("O caractere %c aparece na string\n", caractere);
    } else {
        printf("O caractere %c nao aparece na string\n", caractere);
    }
    return 0;
}