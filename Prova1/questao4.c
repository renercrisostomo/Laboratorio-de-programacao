/*
## QUESTÃO 4

Quando lemos um byte da porta paralela, não temos acesso aos três primeiros bits do byte e além disso, o bit mais significativo vem invertido, Faça um programa que leia um byte do teclado e a seguir inverta o bit mais significativo e zere os três bits menos significativos, Apresente o valor resultante em hexadecimal.
*/
#include <stdio.h>

int main() {
    unsigned char byte;
    puts("Digite um byte: ");
    scanf("%hhx", &byte);
    byte = (byte & 0x0F) | ((byte & 0xF0) >> 4);
    printf("%hhx\n", byte);
    return 0;
}