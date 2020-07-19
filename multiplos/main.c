/*
    PROBLEMA "MULTIPLOS"
    VER ARQUIVO "04-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int x, y;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite dois números inteiros:\n");
    scanf("%d%d", &x, &y);

    if (x % y == 0 || y % x == 0) {
        printf("São multiplos\n");
    }
    else {
        printf("Não são multiplos\n");
    }

    /* FIM */
    return 0;
}
