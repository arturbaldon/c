/*
    PROBLEMA "TEMPO DE JOGO"
    VER ARQUIVO "04-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int horaInicial, horaFinal, duracao;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Hora inicial: ");
    scanf("%d", &horaInicial);
    printf("Hora final: ");
    scanf("%d", &horaFinal);

    if (horaFinal > horaInicial) {
        duracao = horaFinal - horaInicial;
    }
    else {
        duracao = (24 - horaInicial) + horaFinal;
    }

    printf("O JOGO DUROU %d HORA(S)", duracao);

    /* FIM */
    return 0;
}
