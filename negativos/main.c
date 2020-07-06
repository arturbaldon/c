/*
    PROBLEMA "NEGATIVOS"
    VER ARQUIVO "06-VETORES-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n;


    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantos números você vai digitar? ");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    printf("NÚMEROS NEGATIVOS:\n");

    for (int i = 0; i < n; i++) {
        if (vetor[i] < 0) {
            printf("%d\n", vetor[i]);
        }
    }


    /* FIM */
    return 0;
}
