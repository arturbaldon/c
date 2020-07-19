/*
    PROBLEMA "DARDO"
    VER ARQUIVO "04-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    double distancia01, distancia02, distancia03, maiorDistancia;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite as três distâncias:\n");
    scanf("%lf %lf %lf", &distancia01, &distancia02, &distancia03);

    if (distancia01 > distancia02 && distancia01 > distancia03) {
        maiorDistancia = distancia01;
    }
    else if (distancia02 > distancia01 && distancia02 > distancia03) {
        maiorDistancia = distancia02;
    }
    else {
        maiorDistancia = distancia03;
    }

    printf("MAIOR DISTANCIA = %.2lf", maiorDistancia);

    /* FIM */
    return 0;
}
