/*
**Questão 7**
Para que a divisão entre 2 números possa ser realizada, o divisor não pode ser nulo (zero). Escreva
um programa para ler 2 valores e imprimir o resultado da divisão do primeiro pelo segundo. OBS: O
programa deve validar a leitura do segundo valor (que não deve ser nulo). Enquanto for fornecido um
valor nulo a leitura deve ser repetida.
*/
#include <stdio.h>

int main (){
    int n1, n2, resultado;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite um numero: ");
    scanf("%d", &n2);
    while (n2 == 0){
        printf("O numero nao pode ser nulo, digite um numero: ");
        scanf("%d", &n2);
    }
    resultado = n1 / n2;
    printf("O resultado da divisao e: %d\n", resultado);
    return 0;
}