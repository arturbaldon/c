/*
    PROBLEMA "DIAGONAL NEGATIVOS"
    VER ARQUIVO "07-MATRIZES-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n, qtdNegativos = 0;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int matriz[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", matriz[i][i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] < 0) {
                qtdNegativos++;
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d", qtdNegativos);

    /* FIM */
    return 0;
}
