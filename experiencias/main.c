/*
    PROBLEMA "EXPERIENCIAS"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int casos, cobaias, totalCobaias = 0, totalCoelhos = 0, totalRatos = 0, totalSapos = 0;
    char tipo;
    double pCoelhos, pRatos, pSapos;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantos casos de teste serão digitados? ");
    scanf("%d", &casos);

    for (int i = 1; i <= casos; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &cobaias);
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);
        if (tipo == 'C' || tipo == 'c') {
            totalCoelhos = totalCoelhos + cobaias;
        }
        else if (tipo == 'R' || tipo == 'r') {
            totalRatos = totalRatos + cobaias;
        }
        else if (tipo == 'S' || tipo == 's') {
            totalSapos = totalSapos + cobaias;
        }
    }

    totalCobaias = totalCoelhos + totalRatos + totalSapos;
    pCoelhos = ((double)totalCoelhos / totalCobaias) * 100.0;
    pRatos = ((double)totalRatos / totalCobaias) * 100.0;
    pSapos = ((double)totalSapos / totalCobaias) * 100.0;

    printf("\nRELATÓRIO FINAL:\n");
    printf("Total: %d cobaias\n", totalCobaias);
    printf("Total de coelhos: %d\n", totalCoelhos);
    printf("Total de ratos: %d\n", totalRatos);
    printf("Total de sapos: %d\n", totalSapos);
    printf("Percentual de coelhos: %.2lf\n", pCoelhos);
    printf("Percentual de ratos: %.2lf\n", pRatos);
    printf("Percentual de sapos: %.2lf\n", pSapos);

    /* FIM */
    return 0;
}
