/*
    PROBLEMA "BASKARA"
    VER ARQUIVO "04-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    double a, b, c, x1, x2, delta;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    delta = pow(b, 2.0) - (4 * a * c);

    if (a == 0 || delta < 0) {
        printf("Esta equação não possui raízes reais");
    }
    else {
        x1 = (- b + sqrt(delta)) / (2 * a);
        x2 = (- b - sqrt(delta)) / (2 * a);
        printf("X1 = %.4lf\n", x1);
        printf("X2 = %.4lf\n", x2);
    }

    /* FIM */
    return 0;
}
