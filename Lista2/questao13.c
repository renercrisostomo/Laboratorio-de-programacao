/*
**Questão 13**
Elabore um programa que calcule o somatório de todos os números pares pertencentes a faixa A,B
especificada pelo usuário. O programa deve funcionar tanto para A > B quanto para B > A.
*/
#include <stdio.h>

int main(){
    int a, b, i, soma = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    if(a > b){
        for(i = b; i <= a; i++){
            if(i % 2 == 0){
                soma += i;
            }
        }
    }
    else{
        for(i = a; i <= b; i++){
            if(i % 2 == 0){
                soma += i;
            }
        }
    }
    printf("Soma dos numeros pares entre %d e %d: %d\n", a, b, soma);
    return 0;
}
