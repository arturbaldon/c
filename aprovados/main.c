/*
    PROBLEMA "APROVADOS"
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
    int n;
    double media;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantos alunos serão digitados? ");
    scanf("%d", &n);

    char vetNome[n][30];
    double priNota[n], segNota[n];

    for (int i = 0; i < n; i++) {
        printf("Digite nome, primeira e segunda nota do %do aluno:\n", (i + 1));
        limpar_entrada();
        ler_texto(vetNome[i], 30);
        scanf("%lf\n%lf", &priNota[i], &segNota[i]);
    }

    printf("Alunos aprovados:\n");
    for (int i = 0; i < n; i++) {
        media = (priNota[i] + segNota[i]) / 2.0;
        if(media >= 6.0) {
            printf("%s\n", vetNome[i]);
        }
    }

    /* FIM */
    return 0;
}
