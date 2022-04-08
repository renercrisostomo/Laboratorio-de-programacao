/*
**Questão 22**

 A linguagem C pode representar letras maiusculas, letras minusculas e uma grande variedade de
sımbolos especiais. O C usa internamente pequenos inteiros para representar cada caractere diferente.

O conjunto de caracteres que um computador utiliza e as representacoes dos numeros inteiros correspondentes aqueles caracteres ́e chamado conjunto de caracteres do computador. Voce pode imprimir o numero inteiro equivalente a letra maiuscula A, por exemplo, executando a instrucao

`printf("%d", 'A');`

Escreva um programa em C que imprima os inteiros equivalentes a algumas letras maiusculas, letras
minusculas e sımbolos especiais. No minimo, determine os numeros inteiros equivalentes ao conjunto
seguinte: A BCabc 0 12 $ * + / e o caractere espaco em branco.
*/
#include <stdio.h>

int main(){
    int i;
    char str[] = "ABCabc0123$*+/ ";
    for(i = 0; i < strlen(str); i++){
        printf("%d\n", str[i]);
    }
    return 0;
}