/*
    PROBLEMA "SOMA VETOR"
    VER ARQUIVO "06-VETORES-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n;
    double soma = 0;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantos números você vai digitar? ");
    scanf("%d", &n);

    double vetor[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%lf", &vetor[i]);
    }

    printf("\nVALORES = ");

    for (int i = 0; i < n; i++) {
        printf("%.1lf  ", vetor[i]);
    }

    for (int i = 0; i < n; i++) {
        soma = soma + vetor[i];
    }

    printf("\nSOMA = %.2lf\n", soma);
    printf("MEDIA = %.2lf\n", (soma / n));

    /* FIM */
    return 0;
}
