/*
**Questão 8**
Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada maior do que
ou igual às duas prestações; estas devem ser iguais, inteiras e as maiores possíveis. Por exemplo, se o
valor da mercadoria for R$ 270,00, a entrada e as duas prestações são iguais a R$ 90,00; se o valor da
mercadoria for R$ 302,75, a entrada é de R$ 102,75 e as duas prestações são iguais a R$ 100,00. Escreva
um programa que receba o valor da mercadoria e forneça o valor da entrada e das duas prestações, de
acordo com as regras acima.
*/
#include <stdio.h>

int main(){
    int valor, entrada, prestacao, diferencaEntradaPrestacao;
    printf("Digite o valor da mercadoria: ");
    scanf("%d", &valor);
    diferencaEntradaPrestacao = valor % 3;
    prestacao = valor / 3;
    entrada = prestacao + diferencaEntradaPrestacao;
    printf("Entrada: %d\n", entrada);
    printf("Prestacoes: %d\n", prestacao);
    return 0;
}