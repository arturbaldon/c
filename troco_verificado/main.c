/*
    PROBLEMA "TROCO VERIFICADO"
    VER ARQUIVO "04-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    double preco, recebido, troco, falta;
    int quantidade;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Preço unitário do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &recebido);

    if((quantidade * preco) <= recebido) {
        troco = recebido - (quantidade * preco);
        printf("TROCO = %.2lf", troco);
    }
    else {
        falta = (quantidade * preco) - recebido;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS", falta);
    }

    /* FIM */
    return 0;
}
