/*
**Questão 24**
Um triângulo retângulo pode ter lados que são valores inteiros. O conjunto de três valores inteiros para
os lados de um triângulo retângulo é chamado de tripla de Pitágoras. Esses três lados precisam satisfazer
o relacionamento de que a soma do quadrado de dois catetos é igual ao quadrado da hipotenusa. Ache
todas as triplas de Pitágoras não superiores a 500 para cateto1, cateto2 e hipotenusa. Este é um exemplo
de computação por força bruta. Isso não é esteticamente atraente para muitas pessoas. Mas existem
muitos motivos para essas técnicas serem importantes. Em primeiro lugar, com o poder da computação
aumentando em um ritmo tão fenomenal, soluções que levariam anos, ou mesmo séculos, para serem
produzidas com a tecnologia de alguns anos atrás, agora podem ser produzidas em horas, minutos ou
mesmo segundos. Os chips microprocessadores recentes podem processar um bilhão de instruções por
segundo! Em segundo lugar, como você descobrirá mais adiante no Curso de Ciência da Computação,
existem inúmeros problemas interessantes para os quais não existe uma técnica algorítmica conhecida
além da simples força bruta.
*/
#include <stdio.h>

int main(){
    int cateto1, cateto2, hipotenusa, i, j, k;
    for(i = 1; i <= 500; i++){
        for(j = 1; j <= 500; j++){
            for(k = 1; k <= 500; k++){
                if(i * i + j * j == k * k){
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}