/*
    PROBLEMA "GLICOSE"
    VER ARQUIVO "04-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    double medida;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite a medida da glicose: ");
    scanf("%lf", &medida);

    printf("Classificação: ");

    if (medida <= 100) {
        printf("normal\n");
    }
    else if (medida <= 140) {
        printf("elevado\n");
    }
    else {
        printf("diabetes\n");
    }

    /* FIM */
    return 0;
}
