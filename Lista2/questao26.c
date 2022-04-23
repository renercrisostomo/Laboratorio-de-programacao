/*
**Questão 26**
Escreva um programa que imprima uma tabela dos equivalentes binário, octal e hexadecimal dos
números decimais no intervalo de 1 a 256.
*/
#include <stdio.h>

int main(){
    int i;
    for(i = 1; i <= 256; i++){
        printf("%d\t%d\t%d\t%d\n", i, i, i, i);
    }
    return 0;
}