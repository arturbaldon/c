/*
    PROBLEMA "QUADRANTE"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int x, y;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite os valores das coordenadas X e Y:\n");
    scanf("%d\n%d", &x, &y);

    while (x != 0 && y != 0) {
        if (x > 0 && y > 0) {
            printf("QUADRANTE Q1\n");
        }
        else if (x < 0 && y > 0) {
            printf("QUADRANTE Q2\n");
        }
        else if (x < 0 && y < 0) {
            printf("QUADRANTE Q3\n");
        }
        else {
            printf("QUADRANTE Q4\n");
        }
        printf("Digite os valores das coordenadas X e Y:\n");
        scanf("%d\n%d", &x, &y);
    }

    /* FIM */
    return 0;
}
