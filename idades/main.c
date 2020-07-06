/*
    PROBLEMA "IDADES"
    VER ARQUIVO "03-ESTRUTURA-SEQUENCIAL-EXERCICIOS.PDF").
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
    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    ler_texto(nome1, 50);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (double) (idade1 + idade2) / 2;

    printf("A idade média de %s e %s é de %.1lf anos", nome1, nome2, media);

    /* FIM */
    return 0;
}
