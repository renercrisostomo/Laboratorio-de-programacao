/*
**Questão 2**
Refaça o programa da Questão 1, utilizando a estrutura de repetição com teste no final.
*/
#include <stdio.h>

int main (){
    int dia;
    do{
        printf("Digite um numero de 1 a 7: ");
        scanf("%d", &dia);
        switch(dia){
            case 1:
                printf("Domingo\n");
                break;
            case 2:
                printf("Segunda\n");
                break;
            case 3:
                printf("Terca\n");
                break;
            case 4:
                printf("Quarta\n");
                break;
            case 5:
                printf("Quinta\n");
                break;
            case 6:
                printf("Sexta\n");
                break;
            case 7:
                printf("Sabado\n");
                break;
            default:
                printf("Numero de dia nao valido\n");
                break;
        }
    }while(dia != 0);
    return 0;
}