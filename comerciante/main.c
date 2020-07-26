/*
    PROBLEMA "COMERCIANTE"
    VER ARQUIVO "06-VETORES-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int n, lucroAbaixo = 0, lucroEntre = 0, lucroAcima = 0;
    double lucro, lucroPercent, totalCompra = 0, totalVenda = 0, totalLucro;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Serão digitados dados de quantos produtos? ");
    scanf("%d", &n);

    char vetProduto[n][10];
    double vetCompra[n], vetVenda[n];

    for (int i = 0; i < n; i++) {
        printf("Produto %d:\nNome: ", (i + 1));
        limpar_entrada();
        ler_texto(vetProduto[i], 10);
        printf("Preço de compra: ");
        scanf("%lf", &vetCompra[i]);
        printf("Preço de venda: ");
        scanf("%lf", &vetVenda[i]);
    }

    for (int i = 0; i < n; i++) {
        lucro = (vetVenda[i]- vetCompra[i]);
        lucroPercent = ((lucro * 100.0) / vetCompra[i]);
        if (lucroPercent < 10) {
            lucroAbaixo++;
        }
        else if (lucroPercent <= 20) {
            lucroEntre++;
        }
        else {
            lucroAcima++;
        }
    }

    for (int i = 0; i < n; i++) {
        totalCompra = totalCompra + vetCompra[i];
        totalVenda = totalVenda + vetVenda[i];
    }
    totalLucro = totalVenda - totalCompra;

    printf("\nRELATÓRIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", lucroAbaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", lucroEntre);
    printf("Lucro acima de 20%%: %d\n", lucroAcima);
    printf("Valor total de compra: %.2lf\n", totalCompra);
    printf("Valor total de venda: %.2lf\n", totalVenda);
    printf("Lucro total: %.2lf\n", totalLucro);

    /* FIM */
    return 0;
}
