/*
**Questão 1**

 Diga a ordem de calculo dos operadores em cada uma das instrucoes em C a seguir e mostre o valor
de x depois que cada instrucao for executada.

• `x = 7 + 3 * 6 / 2 - 1`

• `x = 2 % 2 + 2 * 2 - 2 / 2`

• `x = (3 * 9 * (3 + (9 * 3 / (3) ) ) )`
*/


/*
• `x = 7 + 3 * 6 / 2 - 1`
multiplicacao 3 * 6, divisao 18 / 2, soma 7 + 9 e subtracao 16 - 1
x = 15

• `x = 2 % 2 + 2 * 2 - 2 / 2`
resto 2 % 2, multiplicacao 2 * 2, divisao 2 / 2, soma 0 + 4 e subtracao 4 - 1
x = 3

• `x = (3 * 9 * (3 + (9 * 3 / (3) ) ) )`
parenteses (3), parenteses (9 * 3 / 3), multiplicacao 9 * 3, divisao 27 / 3, parenteses (3 + 9), soma 3 + 9, parenteses (3 * 9 * 12), multiplicacao 3 * 9, multiplicacao 27 * 12
x = 324

*/