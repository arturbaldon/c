/*
    PROBLEMA "MAIOR POSIÇÃO"
    VER ARQUIVO "06-VETORES-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n, maiorPosicao = 0;
    double maiorValor;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantos números você vai digitar? ");
    scanf("%d", &n);

    double vetor[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%lf", &vetor[i]);
    }

    maiorValor = vetor[0];
    for (int i = 0; i < n; i++) {
        if (vetor[i] > maiorValor) {
            maiorValor = vetor[i];
            maiorPosicao = i;
        }
    }

    printf("\nMAIOR VALOR = %.1lf\n", maiorValor);
    printf("POSIÇÃO DO MAIOR VALOR = %d", maiorPosicao);

    /* FIM */
    return 0;
}
