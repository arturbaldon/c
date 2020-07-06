/*
    PROBLEMA "CIRCULO"
    VER ARQUIVO "03-ESTRUTURA-SEQUENCIAL-EXERCICIOS.PDF").
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    double raio, area;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite o valor do raio do círculo: ");
    scanf("%lf", &raio);

    area = PI * pow(raio, 2.0);
    printf("AREA = %.3lf", area);

    /* FIM */
    return 0;
}
