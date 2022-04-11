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
#include <stdio.h>

int main(){
    int candidato, votos[5], votos_brancos, votos_nulos, votos_totais, i;
    float porcentagem_votos[5];
    
    for(i=0; i<5; i++){
        votos[i] = 0;
    }
    
    votos_brancos = 0;
    votos_nulos = 0;
    votos_totais = 0;
    
    do{
        printf("Digite o numero do candidato: ");
        scanf("%d", &candidato);
        
        if(candidato == 0){
            votos_brancos++;
        }
        else if(candidato < 0){
            break;
        }
        else if(candidato > 0 && candidato < 8){
            votos[candidato-1]++;
        }
        else{
            votos_nulos++;
        }
        
        votos_totais++;
    }while(candidato != 0);
    
    for(i=0; i<5; i++){
        porcentagem_votos[i] = (votos[i]*100)/votos_totais;
    }
    
    printf("\n\nRelatorio da eleicao\n");
    printf("\nCandidato\tVotos\tPorcentagem\n");
    printf("\n1\t\t%d\t%.2f%%\n", votos[0], porcentagem_votos[0]);
    printf("\n2\t\t%d\t%.2f%%\n", votos[1], porcentagem_votos[1]);
    printf("\n3\t\t%d\t%.2f%%\n", votos[2], porcentagem_votos[2]);
    printf("\n4\t\t%d\t%.2f%%\n", votos[3], porcentagem_votos[3]);

}
