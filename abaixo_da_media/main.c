/*
    PROBLEMA "ABAIXO DA MEDIA"
    VER ARQUIVO "06-VETORES-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n;
    double media = 0;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    double vetor[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um elemento: ");
        scanf("%lf", &vetor[i]);
        media = media + vetor[i];
    }

    media = media / n;
    printf("\nMEDIA DO VETOR = %.3lf\n", media);

    printf("ELEMENTOS ABAIXO DA MEDIA:\n");
    for (int i = 0; i < n; i++) {
        if (vetor[i] < media) {
            printf("%.1lf\n", vetor[i]);
        }
    }

    /* FIM */
    return 0;
}
