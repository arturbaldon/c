/*
    PROBLEMA "MEDIDAS"
    VER ARQUIVO "03-ESTRUTURA-SEQUENCIAL-EXERCICIOS.PDF").
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);

    areaQuadrado = pow(a, 2.0);
    areaTriangulo = (a * b) / 2.0;
    areaTrapezio = ((a + b) / 2.0) * c;

    printf("AREA DO QUADRADO = %.4lf\n", areaQuadrado);
    printf("AREA DO TRIANGULO = %.4lf\n", areaTriangulo);
    printf("AREA DO TRAPEZIO = %.4lf\n", areaTrapezio);

    /* FIM */
    return 0;
}
