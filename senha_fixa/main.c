/*
    PROBLEMA "SENHA FIXA"
    VER ARQUIVO "05-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    int senha;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != 2002) {
        printf("Senha inválida! Tente novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido!");

    /* FIM */
    return 0;
}
