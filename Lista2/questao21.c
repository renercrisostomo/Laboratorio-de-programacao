/*
**Questão 21**
Um palíndromo é um número, ou frase textual, que pode ser lido da mesma forma da esquerda para
a direita e vice-versa. Por exemplo, cada um dos seguintes inteiros de cinco dígitos é um palíndromo:
12321, 55555, 45554 e 11611. Escreva um programa que leia um inteiro de cinco dígitos e determine se
ele é ou não um palíndromo. [Dica: use os operadores de divisão e módulo para separar o número em
seus dígitos individuais.]
*/
#include <stdio.h>

int main(){
    int numero, i, j, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for(i = 0; i <= 4; i++){
        j = numero % 10;
        numero /= 10;
        soma += j;
    }
    if(soma == numero){
        printf("O numero %d e um palindromo\n", numero);
    }
    else{
        printf("O numero %d nao e um palindromo\n", numero);
    }
    return 0;
}