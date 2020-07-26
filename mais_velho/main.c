/*
    PROBLEMA "MAIS VELHO"
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
    int n, maiorIdade, posicao = 0;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Quantas pessoas você vai digitar? ");
    scanf("%d", &n);

    char vetNome[n][30];
    int vetIdade[n];

    for (int i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\nNome: ", (i + 1));
        limpar_entrada();
        ler_texto(vetNome[i], 30);
        printf("Idade: ");
        scanf("%d", &vetIdade[i]);
    }

    maiorIdade = vetIdade[0];
    for (int i = 1; i < n; i++) {
        if (maiorIdade < vetIdade[i]) {
            maiorIdade = vetIdade[i];
            posicao = i;
        }
    }

    printf("PESSOA MAIS VELHA: %s", vetNome[posicao]);

    /* FIM */
    return 0;
}
