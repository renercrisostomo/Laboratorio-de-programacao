/*
**Questão 1**
Implemente um programa que tenha como entrada um número (1-7) que corresponde a um dos dias
da semana e imprima na tela o nome do dia correspondente (domingo, segunda, terça, quarta, quinta,
sexta, sábado). Se o número lido não estiver no intervalo 1-7, imprima: "Número de dia não válido". O
programa deve permanecer executando até que o usuário tecle o numero 0. (Utilize obrigatoriamente
teste no início).
*/
#include <stdio.h>

int main(){
    int dia = 1;
    while(dia != 0){
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
    }
    return 0;
}