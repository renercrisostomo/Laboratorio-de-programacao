/*
**Questão 11**

 Elabore um programa que apresente o valor da conversao em dolar de um valor lido em real. O
programa deve solicitar o valor da cotacao do dolar e tambem a quantidade de reais que o usuario
deseja converter.
*/
#include <stdio.h>

int main(){
    float cotacao, real, dolar;
    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);
    printf("Digite a quantidade de reais: ");
    scanf("%f", &real);
    dolar = real / cotacao;
    printf("%f dolar(es)", dolar);
    return 0;
}