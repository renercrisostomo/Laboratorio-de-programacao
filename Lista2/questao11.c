/*
**Questão 11**
Refaça a questão 11, considerando que os limites da faixa (A e B) sejam fornecidos pelo usuário. O
programa deve funcionar tanto para A > B quanto para B > A.
*/
//Refiz a questão 10, mas com as instruções acima.
#include <stdio.h>

int main(){
    int a, b, i, quadrado;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    if(a > b){
        for(i = b; i <= a; i++){
            if(i % 4 == 0){
                quadrado = i * i;
                printf("%d\n", quadrado);
            }
        }
    }
    else{
        for(i = a; i <= b; i++){
            if(i % 4 == 0){
                quadrado = i * i;
                printf("%d\n", quadrado);
            }
        }
    }
    return 0;
}