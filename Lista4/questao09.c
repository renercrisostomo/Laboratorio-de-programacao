/*
## Questão 9

Implemente o método de ordenação bolha utilizando ponteiros.
*/
#include <stdio.h>

int main(){
    int a[100], i, j, *p, aux;
    p = a;
    printf("Digite os valores: ");
    for(i = 0; i < 100; i++){
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 99; i++){
        for(j = 0; j < 99; j++){
            if(a[j] > a[j+1]){
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }
        }
    }
    printf("Os valores ordenados sao: ");
    for(i = 0; i < 100; i++){
        printf("%d ", a[i]);
    }
    return 0;
}