/*
    PROBLEMA "CONSUMO"
    VER ARQUIVO "03-ESTRUTURA-SEQUENCIAL-EXERCICIOS.PDF").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    double distancia, combustivelGasto, consumo;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Distancia percorrida: ");
    scanf("%lf", &distancia);
    printf("Combustível gasto: ");
    scanf("%lf", &combustivelGasto);

    consumo = distancia / combustivelGasto;
    printf("Consumo médio = %.3lf", consumo);


    /* FIM */
    return 0;
}
