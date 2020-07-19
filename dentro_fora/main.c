/*
    PROBLEMA "DENTRO FORA"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n, x, dentro = 0, fora = 0;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantos números você vai digitar? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Digite um número: ");
        scanf("%d", &x);
        if (x >= 10 && x <= 20) {
            dentro++;
        }
        else {
            fora++;
        }
    }

    printf("%d DENTRO\n%d FORA", dentro, fora);

    /* FIM */
    return 0;
}
