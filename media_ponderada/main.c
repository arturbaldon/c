/*
    PROBLEMA "MEDIA PONDERADA"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n;
    double x1, x2, x3, mediaPonderada;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantos casos você vai digitar? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite três números:\n");
        scanf("%lf\n%lf\n%lf", &x1, &x2, &x3);
        mediaPonderada = ((x1 * 2) + (x2 * 3) + (x3 * 5)) / 10;
        printf("MEDIA = %.1lf\n", mediaPonderada);
    }

    /* FIM */
    return 0;
}
