/*
    PROBLEMA "MEDIA IDADES"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int idade, divisor = 0;
    double media = 0;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite as idades:\n");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("IMPOSSÍVEL CALCULAR");
    }
    else {
        while (idade >= 0) {
            divisor++;
            media = media + idade;
            scanf("%d", &idade);
        }
        media = media / divisor;
        printf("MEDIA = %.2lf", media);
    }

    /* FIM */
    return 0;
}
