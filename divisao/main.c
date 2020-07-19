/*
    PROBLEMA "DIVISÃO"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n, numerador, denominador;
    double resultado;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantos casos você vai digitar? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Entre com o numerador: ");
        scanf("%d", &numerador);
        printf("Entre com o denominador: ");
        scanf("%d", &denominador);
        if (denominador == 0) {
            printf("DIVISÃO IMPOSSÍVEL\n");
        }
        else {
            resultado = (double) numerador / denominador;
            printf("DIVISÃO = %.2lf\n", resultado);
        }
    }

    /* FIM */
    return 0;
}
