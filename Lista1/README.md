# Lista 1

## Questão 1

 Diga a ordem de calculo dos operadores em cada uma das instrucoes em C a seguir e mostre o valor
de x depois que cada instrucao for executada.

• `x = 7 + 3 * 6 / 2 - l`

• `x = 2 % 2 + 2 * 2 - 2 / 2`

• `x = (3 * 9 * (3 + (9 * 3 / (3) ) ) )`

## Questão 2

 Faca um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
hexadecimal e octal.

Ex.:

```c
Entre com o valor: 10
Hexadecimal: A
Octal: 12
```

## Questão 3

 Faca um programa capaz de ler um valor real e escreve-lo com apenas uma casa decimal.

## Questão 4

 Sabendo que os argumentos da funcao `printf` podem ser expressoes (`a+b`, `a/b`, `a*b`...), e nao somente
argumentos, faca um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e
seu meio.

## Questão 5

 Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
pago, considerando que o restaurante cobra 10% de taxa para o garcom.

## Questão 6

 Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal
atraves da seguinte formula:

- para homens: `72.7 * altura - 58`
- para mulheres: `62.1 * altura - 44.7`

## Questão 7

 Faca um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.

## Questão 8

 Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao
quadrado.

## Questão 9

 Escreva um programa que leia um valor numerico inteiro e apresente como resultado os seus valores
sucessor e antecessor.

## Questão 10

 Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
formula `VOLUME = COMPRIMENTO * LARGURA * ALTURA`.

## Questão 11

 Elabore um programa que apresente o valor da conversao em dolar de um valor lido em real. O
programa deve solicitar o valor da cotacao do dolar e tambem a quantidade de reais que o usuario
deseja converter.

## Questão 12

 Escreva um programa que peca ao usuario para digitar dois numeros, obtenha-os do usuario e imprima
a soma, o produto, a diferenca, o quociente e o resto da divisao dos dois numeros.

## Questão 13

 Escreva um programa que leia duas variaveis A e B e efetue a troca dos valores. O objetivo  ́e que a
variavel A passe a conter o valor de B e a variavel B passe a possuir o valor de A. Apresente os valores
apos a efetivacao do processamento da troca.

## Questão 14

 Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
Fahrenheit. A formula de versao ́e `F = (9 * C + 160) / 5`, sendo F a temperatura Fahrenheit e C a
temperatura em Celsius.

## Questão 15

 Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o numero de
dias trabalhados pelo vendedor e imprima o valor lıquido a ser pago ao mesmo, sabendo que se ele
trabalhou ate 10 dias nao tem direito a gratificacao, se ele trabalhou acima de 10 dias e ate 20 dias
tem direito a gratificacao de 20%, se ele trabalhou acima de 20 dias tem direito a gratificacao de 30%.
Sempre sao descontados 10% de imposto de renda em cima do valor bruto.

## Questão 16

 Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa, ́e
necessario possuir alguns dados, tais como o valor da hora aula, numero de horas trabalhadas no mes e
percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu salario bruto para fazer
o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
liquido do professor.

## Questão 17

 Escrever um programa que receba um valor inteiro do usuario e apresente o seu valor absoluto (modulo).
Nao utilize estrutura de decisao `if`.

## Questão 18

 Escreva um programa que leia o raio de um circulo e imprima seu diametro, o valor de sua circunferencia
e sua ́area. Use o valor de 3,14159 para "pi". Faca cada um destes calculos dentro da instrucoes (ou
instrucoes) `printf` e use o especificador de conversao `%f`.

## Questão 19

 Escreva um programa que imprima um retangulo, uma elipse, uma seta e um losango como se segue:

 ```c
 ********     ***       *         *
 *      *    *   *     ***       * *
 *      *   *     *   *****     *   *
 *      *   *     *     *      *     *
 *      *   *     *     *     *       *
 *      *   *     *     *      *     *
 *      *   *     *     *       *   *
 *      *    *   *      *        * *
 ********     ***       *         *
 ```

## Questão 20

 Escreva um programa que receba um numero inteiro e entao determine e imprima se ele ́e par ou ́ımpar.
Obs.: Nao utilizar estrutura de decisao `if`.

## Questão 21

 Escreva um programa que leia dois inteiros e entao determine e imprima se o primeiro ́e multiplo do
segundo. Obs.: Nao utilizar estrutura de decisao `if`.

## Questão 22

 A linguagem C pode representar letras maiusculas, letras minusculas e uma grande variedade de
sımbolos especiais. O C usa internamente pequenos inteiros para representar cada caractere diferente.

O conjunto de caracteres que um computador utiliza e as representacoes dos numeros inteiros correspondentes aqueles caracteres ́e chamado conjunto de caracteres do computador. Voce pode imprimir o numero inteiro equivalente a letra maiuscula A, por exemplo, executando a instrucao

`printf("%d", 'A');`

Escreva um programa em C que imprima os inteiros equivalentes a algumas letras maiusculas, letras
minusculas e sımbolos especiais. No minimo, determine os numeros inteiros equivalentes ao conjunto
seguinte: A BCabc 0 12 $ * + / e o caractere espaco em branco.

## Questão 23

 Escreva um programa que receba a entrada de um numero de tres digitos, separe o numero em seus digitos componentes e reconstrua um numero com os componentes na ordem inversa. Exemplo: para entrada de 123, a resposta do programa seria 321.

## Questão 24

 Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n.
Obs.: Utilize operadores binarios.

## Questão 25

 Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos ha neste tempo.

## Questão 26

 Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distancia entre os dois pontos no plano. (Utilize a funcao `sqrt (numero)`, biblioteca math.h).

## Questão 27

 Escreva um programa que solicite 3 numeros em ponto flutuante e imprima a media aritmetica e geometrica. (Utilize a funcao `pow(base, expoente)` da biblioteca math.h).
