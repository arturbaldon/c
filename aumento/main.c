/*
    PROBLEMA "AUMENTO"
    VER ARQUIVO "04-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    double salario, porcentagem, novoSalario, aumento;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite o salário da pessoa: ");
    scanf("%lf", &salario);

    if (salario <= 1000.0) {
        porcentagem = 20;
    }
    else if (salario <= 3000.0) {
        porcentagem = 15;
    }
    else if (salario <= 8000.0) {
        porcentagem = 10;
    }
    else {
        porcentagem = 5;
    }

    aumento = (salario * porcentagem) / 100;
    novoSalario = aumento + salario;

    printf("Novo salário = R$ %.2lf\n", novoSalario);
    printf("Aumento = R$ %.2lf\n", aumento);
    printf("Porcentagem = %.0lf %%\n", porcentagem);

    /* FIM */
    return 0;
}
