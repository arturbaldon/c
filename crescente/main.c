/*
    PROBLEMA "CRESCENTE"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int x, y;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite dois números:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != y) {
        if (x < y) {
            printf("CRESCENTE!\n");
        }
        else {
            printf("DECRESCENTE!\n");
        }
        printf("Digite outos dois números:\n");
        scanf("%d", &x);
        scanf("%d", &y);
    }

    /* FIM */
    return 0;
}
