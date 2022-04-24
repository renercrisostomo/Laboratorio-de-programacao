/*
**Questão 11**
Refaça a questão 11, considerando que os limites da faixa (A e B) sejam fornecidos pelo usuário. O
programa deve funcionar tanto para A > B quanto para B > A.
*/
#include <stdio.h>

int main(){
    int i, quadrado;
    for (i = 15; i <= 90; i++){
        if (i % 4 == 0){
            quadrado = i * i;
            printf("%d\n", quadrado);
        }
    }
    return 0;
}