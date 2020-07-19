/*
    PROBLEMA "LANCHONETE"
    VER ARQUIVO "04-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int codigo, quantidade;
    double valorPagar;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Código do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    switch (codigo)
    {
    case 1:
        valorPagar = quantidade * 5.00;
        break;
    case 2:
        valorPagar = quantidade * 3.50;
        break;
    case 3:
        valorPagar = quantidade * 4.80;
        break;
    case 4:
        valorPagar = quantidade * 8.90;
        break;
    case 5:
        valorPagar = quantidade * 7.32;
        break;
    default:
        printf("Código inválido!\n");
        break;
    }

    printf("Valor a pagar: R$ %.2lf\n", valorPagar);

    /* FIM */
    return 0;
}
