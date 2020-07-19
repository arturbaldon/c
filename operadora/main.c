/*
    PROBLEMA "OPERADORA"
    VER ARQUIVO "04-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int minutos;
    double valorPagar = 50;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    if (minutos > 100) {
        valorPagar = valorPagar + ((minutos - 100) * 2.0);
    }

    printf("Valor a pagar: R$ %.2lf", valorPagar);

    /* FIM */
    return 0;
}
