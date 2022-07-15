/*
Questão 1

Escreva um programa em C que utilize uma Estrutura aluno para conter duas notas, lidas do usuário,
e sua média.
*/

#include <stdio.h>
#include <stdlib.h>

struct aluno{
    float nota1;
    float nota2;
    float media;
} aluno;

int main(){
    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);
    aluno.media = (aluno.nota1 + aluno.nota2) / 2;
    printf("A média é: %.2f\n", aluno.media);
    return 0;
}