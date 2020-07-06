/*
    PROBLEMA "SOMA"
    VER ARQUIVO "03-ESTRUTURA-SEQUENCIAL-EXERCICIOS.PDF").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int x, y, soma;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    soma = x + y;
    printf("SOMA = %d", soma);

    /* FIM */
    return 0;
}
