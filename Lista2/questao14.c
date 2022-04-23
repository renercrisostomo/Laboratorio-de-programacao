/*
**Questão 14**
Elabore um programa que apresente a quantidade de números divisíveis por 3 pertencentes a faixa
A,B especificada pelo usuário. O programa deve funcionar tanto para A > B quanto para B > A.
*/
#include <stdio.h>

int main(){
    int a, b, i, cont = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    if(a > b){
        for(i = b; i <= a; i++){
            if(i % 3 == 0){
                cont++;
            }
        }
    }
    else{
        for(i = a; i <= b; i++){
            if(i % 3 == 0){
                cont++;
            }
        }
    }
    printf("Quantidade de numeros divisíveis por 3 entre %d e %d: %d\n", a, b, cont);
    return 0;
}