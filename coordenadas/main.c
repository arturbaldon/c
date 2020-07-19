/*
    PROBLEMA "COORDENADAS"
    VER ARQUIVO "04-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    double x, y;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Valor de X: ");
    scanf("%lf", &x);
    printf("Valor de Y: ");
    scanf("%lf", &y);

    if (x == 0 && y == 0) {
        printf("Origem");
    }
    else if (x == 0) {
        printf("Eixo Y");
    }
    else if (y == 0) {
        printf("Eixo X");
    }
    else if (x > 0 && y > 0) {
        printf("Q1");
    }
    else if (x < 0 && y > 0) {
        printf("Q2");
    }
    else if (x < 0 && y < 0) {
        printf("Q3");
    }
    else {
        printf("Q4");
    }

    /* FIM */
    return 0;
}
