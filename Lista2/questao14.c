/*
**Questão 14**
Elabore um programa que apresente a quantidade de números divisíveis por 3 pertencentes a faixa
A,B especificada pelo usuário. O programa deve funcionar tanto para A > B quanto para B > A.
*/
#include <stdio.h>

int somatorio(int inicio, int fim){
    int cont = 0, i;
    for(i = inicio; i <= fim; i++){
        if(i % 3 == 0){
            cont++;
        }
    }
    return cont;
}

int main(){
    int a, b, i, cont = 0;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    if(a > b){
        cont = somatorio(b, a);
    }
    else{
        cont = somatorio(a, b);
    }
    printf("Quantidade de números divisíveis por 3 entre %d e %d: %d\n", a, b, cont);
    return 0;
}
