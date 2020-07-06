/*
    PROBLEMA "PAGAMENTO"
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
    char nome[50];
    double valorHora, horasTrabalhadas, pagamento;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Nome: ");
    ler_texto(nome, 50);
    printf("Valor por hora: ");
    scanf("%lf", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%lf", &horasTrabalhadas);

    pagamento = horasTrabalhadas * valorHora;

    limpar_entrada();
    printf("O pagamento para %s deve ser %.2lf", nome, pagamento);

    /* FIM */
    return 0;
}
