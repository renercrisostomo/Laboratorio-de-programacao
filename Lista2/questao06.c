/*
**Questão 6**
Escreva um programa que transforme o computador numa urna eletrônica para eleição para presidente
de um certo país, às quais concorrem os candidatos 5-Paulo e 7-Renata. Cada voto deve ser dado pelo
número do candidato, permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos
já citados é considerado nulo; em qualquer situação, o eleitor deve ser consultado quanto à confirmação
do seu voto. No final da eleição o programa deve emitir um relatório contendo as porcentagens de
votação de cada candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O código para
finalizar a urna (votação) é o usuário digitar algum número negativo.
*/
/* Código desenvolvido em sala de aula. Em caso de bugs, favor comentar na devida atividade no classroom */

// Adicionei o código que mostra o candidato eleito. Removi o clear pq causou incompatibilidade -- Rener

#include <stdio.h>
#include <stdlib.h>

void imprimirRelatorio(int, int, int, int);

int main(){
    int voto;
    int paulo=0, renata=0, branco=0, nulo=0;
    char c;

    do{
        puts("Ola eleitor, seja bem-vindo. Digite seu voto ou se preferir, um numero negativo para sair: ");
        puts("5. Paulo");
        puts("7. Renata");
        puts("0. Branco");

        scanf("%d", &voto);
        getchar(); 

        puts("Confirmar? s: sim | outra tecla: nao");
        c = getchar();  

        if (c != 's') continue; // Você poderia usar if (c != 's') e envolver todo o switch

        switch (voto){

            case 0: // Para votos "branco"
                branco++; //branco += 1; branco=branco+1;
                break;
            case 5: // Para votos "Paulo"
                paulo++;
                break;
            case 7: // Para votos "Renata"
                renata++;
                break;
            default: // Valores diferentes 
                // if (voto>0) nulo++;
                nulo += (voto>0)?1:0;
        }
       
    } while (voto >= 0);

    // Imprimir a quantidade de votos
    printf("Resultado da eleicao\n");
    printf("Quantidade de votos\n");
    printf("\t 5. Paulo: %d\n",paulo);
    printf("\t 7. Renata: %d\n",renata);
    printf("\t 0. Brancos: %d\n",branco);
    printf("\t Nulos: %d\n",nulo);

    // Relatorio
    imprimirRelatorio(paulo, renata, branco, nulo);

    return 0;
}


void imprimirRelatorio(int p, int r, int b, int n){
    int totalVotos = p + r + b + n;
    float pp, pr, pb, pn;

    pp = ( ( (float) p )/totalVotos) * 100;
    pr = ( ( (float) r )/totalVotos) * 100;
    pb = ( ( (float) b )/totalVotos) * 100;
    pn = ( ( (float) n )/totalVotos) * 100;

    puts("-------------");
    printf("Porcentagem de votos\n");
    printf("Quantidade de votos\n");
    printf("\t 5. Paulo: %.2f%%\n",pp);
    printf("\t 7. Renata: %.2f%%\n",pr);
    printf("\t 0. Brancos: %.2f%%\n",pb);
    printf("\t Nulos: %.2f%%\n",pn);
    puts("-------------");
    printf("Candidato eleito: %s\n", (p > r) ? "Paulo(5)" : "Renata(7)");
}