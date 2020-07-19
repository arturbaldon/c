/*
    PROBLEMA "FATORIAL"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n, fatorial = 1;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite o valor de N: ");
    scanf("%d", &n);

    if (n >= 0 && n <= 15) {
        for (int i = 1; i <= n; i++) {
            fatorial = fatorial * i;
        }
        printf("FATORIAL = %d", fatorial);
    }

    /* FIM */
    return 0;
}
