/*
    PROBLEMA "SOMA IMPARES"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int x, y, i, ordena, soma = 0;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite dois números:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y) {
        ordena = x;
        x = y;
        y = ordena;
    }

    for (i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            soma = soma + i;
        }
    }

    printf("SOMA DOS IMPARES = %d", soma);

    /* FIM */
    return 0;
}
