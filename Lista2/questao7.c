/*
**Questão 7**
Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo (zero). Escreva
um programa para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo. OBS: O
programa deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for fornecido um
valor nulo a leitura deve ser repetida.
*/
#include <stdio.h>

int main (){
    int n1, n2, divisao;
    printf("Digite o numerador: ");
    scanf("%d", &n1);
    do{
        printf("Digite um denominador nao nulo: ");
        scanf("%d", &n2);
    }while (n2 == 0);
    divisao = (float)n1 / n2;
    printf("%d / %d = %d\n", n1, n2, divisao);
    return 0;
}