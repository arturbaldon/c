/*
    PROBLEMA "TERRENO"
    VER ARQUIVO "03-ESTRUTURA-SEQUENCIAL-EXERCICIOS.PDF").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    double largura, comprimento, valorMetroQuadrado, area, preco;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valorMetroQuadrado);

    area = largura * comprimento;
    preco = valorMetroQuadrado * area;

    printf("Área do terreno = %.2lf\n", area);
    printf("Preço do terreno = %.2lf\n", preco);

    /* FIM */
    return 0;
}
