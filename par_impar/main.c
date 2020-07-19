/*
    PROBLEMA "PAR IMPAR"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n, x;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantos números você vai digitar? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite um número: ");
        scanf("%d", &x);
        if (x == 0) {
            printf("NULO\n");
        }
        else {
            if (x % 2 == 0) {
                printf("PAR ");
            }
            else {
                printf("IMPAR ");
            }
            if (x > 0) {
                printf("POSITIVO\n");
            }
            else {
                printf("NEGATIVO\n");
            }
        }
    }

    /* FIM */
    return 0;
}
