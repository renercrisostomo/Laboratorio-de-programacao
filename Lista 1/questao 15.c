/*
**Questão 15**

 Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o numero de
dias trabalhados pelo vendedor e imprima o valor lıquido a ser pago ao mesmo, sabendo que se ele
trabalhou ate 10 dias nao tem direito a gratificacao, se ele trabalhou acima de 10 dias e ate 20 dias
tem direito a gratificacao de 20%, se ele trabalhou acima de 20 dias tem direito a gratificacao de 30%.
Sempre sao descontados 10% de imposto de renda em cima do valor bruto.
*/
#include <stdio.h>

int main(){
    int dias;
    float salario, gratificacao, imposto, total;
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);
    salario = 50.25 * dias;
    imposto = 0.1;
    if(dias <= 10){
        gratificacao = 0;
    }
    else if(dias <= 20){
        gratificacao = 0.2;
    }
    else{
        gratificacao = 0.3;
    }
    total = salario + (salario * gratificacao) - (salario * imposto);
    printf("Total: %f", total);
    return 0;
}