/*
**Questão 16**

 Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa, ́e
necessario possuir alguns dados, tais como o valor da hora aula, numero de horas trabalhadas no mes e
percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu salario bruto para fazer
o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
liquido do professor.
*/
#include <stdio.h>

int main(){
    float salario_bruto, valor_hora, salario_liquido, horas_trabalhadas, desconto;
    printf("Digite o valor da hora aula: ");
    scanf("%f", &valor_hora);
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Digite desconto do INSS(%%): ");
    scanf("%f", &desconto);
    salario_bruto = valor_hora * horas_trabalhadas;
    salario_liquido = salario_bruto - salario_bruto * (desconto / 100);
    printf("Salario bruto: %f\n", salario_bruto);
    printf("Salario liquido: %f\n", salario_liquido);
    return 0;
}