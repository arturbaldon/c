/*
    PROBLEMA "PARES CONSECUTIVOS"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int x, soma;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    while (x != 0) {
        if (x % 2 != 0) {
            x++;
        }
        soma = (5 * x) + 20;
        printf("SOMA = %d\n", soma);
        printf("Digite um número inteiro: ");
        scanf("%d", &x);
    }

    /* FIM */
    return 0;
}
