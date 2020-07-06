/*
    PROBLEMA "TROCO"
    VER ARQUIVO "03-ESTRUTURA-SEQUENCIAL-EXERCICIOS.PDF").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    double precoUnitario, dinheiroRecebido, troco;
    int quantidade;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Preço unitário do produto: ");
    scanf("%lf", &precoUnitario);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    troco = dinheiroRecebido - (quantidade * precoUnitario);
    printf("TROCO = %.2lf", troco);

    /* FIM */
    return 0;
}
