/*
    PROBLEMA "MENOR DE TRES"
    VER ARQUIVO "04-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n1, n2, n3, menor;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Primeiro valor: ");
    scanf("%d", &n1);
    printf("Segundo valor: ");
    scanf("%d", &n2);
    printf("Terceiro valor: ");
    scanf("%d", &n3);

    if (n1 < n2 && n1 < n3) {
        menor = n1;
    }
    else if (n2 < n3) {
        menor = n2;
    }
    else {
        menor = n3;
    }

    printf("MENOR = %d", menor);

    /* FIM */
    return 0;
}
