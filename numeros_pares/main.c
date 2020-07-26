/*
    PROBLEMA "NUMEROS PARES"
    VER ARQUIVO "06-VETORES-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n, quantidadePares = 0;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantos números você vai digitar? ");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nNÚMEROS PARES:\n");

    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 == 0) {
            printf("%d  ", vetor[i]);
            quantidadePares++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d", quantidadePares);

    /* FIM */
    return 0;
}
