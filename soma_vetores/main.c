/*
    PROBLEMA "SOMA VETORES"
    VER ARQUIVO "06-VETORES-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantos velores vai ter cada vetor? ");
    scanf("%d", &n);

    int vetorA[n], vetorB[n], vetorC[n];

    printf("Digite os valores do vetor A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os valores do vetor B:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetorB[i]);
    }

    printf("VALOR RESULTANTE:\n");
    for (int i = 0; i < n; i++) {
        vetorC[i] = vetorA[i] + vetorB[i];
        printf("%d\n", vetorC[i]);
    }

    /* FIM */
    return 0;
}
