/*
    PROBLEMA "RETANGULO"
    VER ARQUIVO "03-ESTRUTURA-SEQUENCIAL-EXERCICIOS.PDF".
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    double base, altura, area, perimetro, diagonal;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    printf("AREA = %.4lf\n", area);
    printf("PERIMETRO = %.4lf\n", perimetro);
    printf("DIAGONAL = %.4lf\n", diagonal);

    /* FIM */
    return 0;
}
