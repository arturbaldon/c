/*
    PROBLEMA "SEQUENCIA IMPARES"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int x;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite o valor de X: ");
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    /* FIM */
    return 0;
}
