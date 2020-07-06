/*
    PROBLEMA "NOTAS"
    VER ARQUIVO "04-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    double nota1, nota2, notaFinal;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    notaFinal = nota1 + nota2;
    printf("NOTA FINAL = %.1lf\n", notaFinal);
    if (notaFinal < 60.00) {
        printf("REPROVADO");
    }

    /* FIM */
    return 0;
}
