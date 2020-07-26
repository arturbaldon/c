/*
    PROBLEMA "DADOS PESSOAS"
    VER ARQUIVO "06-VETORES-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n, mulheres = 0, homens = 0;
    double menorAltura, maiorAltura, media = 0;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantas pessoas serão digitadas? ");
    scanf("%d", &n);

    double vetAltura[n];
    char vetGenero[n];

    for (int i = 0; i < n; i++) {
        printf("Altura da %da pessoa: ", (i + 1));
        scanf("%lf", &vetAltura[i]);
        printf("Genero da %da pessoa: ", (i + 1));
        scanf(" %c", &vetGenero[i]);
    }

    menorAltura = vetAltura[0];
    maiorAltura = vetAltura[0];
    for (int i = 0; i < n; i++) {
        if (vetAltura[i] < menorAltura) {
            menorAltura = vetAltura[i];
        }
        if (vetAltura[i] > maiorAltura) {
            maiorAltura = vetAltura[i];
        }
    }

    printf("Menor altura = %.2lf\n", menorAltura);
    printf("Maior altura = %.2lf\n", maiorAltura);

    for (int i = 0; i < n; i++) {
        if (vetGenero[i] == 'F' || vetGenero[i] == 'f') {
            media = media + vetAltura[i];
            mulheres++;
        }
        else {
            homens++;
        }
    }

    if (mulheres > 0) {
        media = (double)media / mulheres;
        printf("Media das alturas das mulheres = %.2lf\n", media);
    }

    if (homens > 0) {
        printf("Numero de homens = %d", homens);
    }

    /* FIM */
    return 0;
}
