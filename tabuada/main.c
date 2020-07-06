/*
    PROBLEMA "TABUADA"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n, i, produto;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Deseja a tabuada pra qual valor? ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        produto = n * i;
        printf("%d x %d = %d\n", n , i, produto);
    }

    /* FIM */
    return 0;
}
