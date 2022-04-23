/*
**Questão 25**
Calcule o valor de π a partir da série infinita

Imprima uma tabela que mostre o valor de π aproximado por um termo dessa série, e depois por dois
termos, três termos, e assim por diante.
*/
#include <stdio.h>

int main(){
    int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, cont = 0;
    for(i = 0; i <= 100; i++){
        for(j = 0; j <= 100; j++){
            for(k = 0; k <= 100; k++){
                for(l = 0; l <= 100; l++){
                    for(m = 0; m <= 100; m++){
                        for(n = 0; n <= 100; n++){
                            for(o = 0; o <= 100; o++){
                                for(p = 0; p <= 100; p++){
                                    for(q = 0; q <= 100; q++){
                                        for(r = 0; r <= 100; r++){
                                            for(s = 0; s <= 100; s++){
                                                for(t = 0; t <= 100; t++){
                                                    for(u = 0; u <= 100; u++){
                                                        for(v = 0; v <= 100; v++){
                                                            for(w = 0; w <= 100; w++){
                                                                for(x = 0; x <= 100; x++){
                                                                    for(y = 0; y <= 100; y++){
                                                                        for(z = 0; z <= 100; z++){
                                                                            cont++;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    printf("%d\n", cont);
    return 0;
}