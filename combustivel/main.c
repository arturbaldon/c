/*
    PROBLEMA "COMBUSTIVEL"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int alcool = 0, gasolina = 0, diesel = 0, codigo;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    while (codigo != 4) {
        printf("Informe um código (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &codigo);
        if (codigo == 1) {
            alcool++;
        }
        else if (codigo == 2) {
            gasolina++;
        }
        else if (codigo == 3) {
            diesel++;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    /* FIM */
    return 0;
}
