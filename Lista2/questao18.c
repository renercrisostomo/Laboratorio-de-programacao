/*
**Questão 18**
Escrever um programa que calcule e apresente o somatório do número de grãos de trigo que se pode
obter num tabuleiro de xadrez, obedecendo à seguinte regra: colocar um grão de trigo no primeiro
quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se um
grão, no segundo quadro colocam-se dois grãos (tendo neste momento três grãos), no terceiro quadro
colocam-se quatro grãos (tendo neste momento sete grãos), no quarto quadro colocam-se oito grãos
(tendo-se então quinze grãos) até atingir o sexagésimo quarto quadro.
*/
#include <stdio.h>

int main(){
    int i, soma = 0;
    for(i = 1; i <= 64; i++){
        soma += i;
    }
    printf("Soma dos numeros de grãos de trigo: %d\n", soma);
    return 0;
}