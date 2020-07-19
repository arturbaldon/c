/*
    PROBLEMA "DURACAO"
    VER ARQUIVO "03-ESTRUTURA-SEQUENCIAL-EXERCICIOS.PDF").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int duracao, hora, minuto, segundo, resto;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite a duração em segundos: ");
    scanf("%d", &duracao);

    hora = duracao / 3600;
    resto = duracao % 3600;
    minuto = resto / 60;
    segundo = resto % 60;

    printf("%d:%d:%d", hora, minuto, segundo);

    /* FIM */
    return 0;
}
