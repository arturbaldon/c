/*
    PROBLEMA "MEDIA_PARES"
    VER ARQUIVO "06-VETORES-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n, divisor = 0;
    double media = 0;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    int vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 == 0) {
            media = media + vetor[i];
            divisor++;
        }
    }

    if (media != 0) {
        media = (double) media / divisor;
        printf("MEDIA DOS PARES = %.1lf", media);
    }
    else {
        printf("NENHUM NÚMERO PAR");
    }

    /* FIM */
    return 0;

}
