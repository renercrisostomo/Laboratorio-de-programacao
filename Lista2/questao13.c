/*
**Questão 13**
Elabore um programa que calcule o somatório de todos os números pares pertencentes a faixa A,B
especificada pelo usuário. O programa deve funcionar tanto para A > B quanto para B > A.
*/
#include <stdio.h>

int somatorio(int inicio, int fim){
    int soma = 0, i;
    for(i = inicio; i <= fim; i++){
        if(i % 2 == 0){
            soma += i;
        }
    }
    return soma;
}

int main(){
    int a, b, i, soma = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    if(a > b){
        soma = somatorio(b, a);
    }
    else{
        soma = somatorio(a, b);
    }
    printf("Soma dos numeros pares entre %d e %d: %d\n", a, b, soma);
    return 0;
}
