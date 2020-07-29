/*
    PROBLEMA "MATRIZ GERAL"
    VER ARQUIVO "07-MATRIZES-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n, i, j;
    double soma = 0;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    double matriz[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matriz[i][j] > 0) {
                soma = soma + matriz[i][j];
            }
        }
    }
    printf("\nSOMA DOS POSITIVOS: %.1lf\n", soma);

    printf("\n\nEscolha uma linha: ");
    scanf("%d", &i);
    printf("LINHA ESCOLHIDA: ");
    for (j = 0; j < n; j++) {
        printf("%.1lf ", matriz[i][j]);
    }

    printf("\n\nEscolha uma coluna: ");
    scanf("%d", &j);
    printf("COLUNA ESCOLHIDA: ");
    for (i = 0; i < n; i++) {
        printf("%.1lf ", matriz[i][j]);
    }

    printf("\n\nDIAGONAL PRINCIPAL: ");
    for (i = 0; i < n; i++) {
        printf("%.1lf ", matriz[i][i]);
    }

    printf("\n\nMATRIZ ALTERADA:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matriz[i][j] < 0) {
                matriz[i][j] = pow(matriz[i][j], 2);
            }
            printf("%.1lf ", matriz[i][j]);
        }
        printf("\n");
    }

    /* FIM */
    return 0;
}
