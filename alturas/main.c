/*
    PROBLEMA "ALTURAS"
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
    int n, menores = 0;
    double soma, media = 0, percentual = 0;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantas pessoas serão digitadas? ");
    scanf("%d", &n);

    char vetNome [n][30];
    int vetIdade [n];
    double vetAltura [n];

    for (int i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\nNome: ", (i + 1));
        limpar_entrada();
        ler_texto(vetNome[i], 30);
        printf("Idade: ");
        scanf("%d", &vetIdade[i]);
        printf("Altura: ");
        scanf("%lf", &vetAltura[i]);
    }

    for (int i = 0; i < n; i++) {
        soma = soma + vetAltura[i];
    }

    media = soma / n;
    printf("\nAltura média: %.2lf", media);

    for (int i = 0; i < n; i++) {
        if (vetIdade[i] < 16) {
            menores++;
        }
    }

    percentual = (menores * 100.0) / n;
    printf("\nPessoas com menos de 16 anos: %.1lf%%", percentual);

    for (int i = 0; i < n; i++) {
        if (vetIdade[i] < 16) {
            printf("\n%s", vetNome[i]);
        }
    }

    /* FIM */
    return 0;
}
