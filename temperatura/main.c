/*
    PROBLEMA "TEMPERATURA"
    VER ARQUIVO "04-ESTRUTURA-CONDICIONAL-EXERCICIOS").
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* DECLARACAO DE VARIAVEIS */
    char escala;
    double fahrenheit, celsius;

    /* ENTRADA E PROCESSAMENTO DE DADOS */
    printf("Você vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escala);

    if (escala == 'F' || escala == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &fahrenheit);
        celsius = (5.0 / 9.0) * (fahrenheit - 32.0);
        printf("Temperatura equivalente em Celsius: %.2lf\n", celsius);
    }
    else {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &celsius);
        fahrenheit = (celsius * (9.0 / 5.0)) + 32.0;
        printf("Temperatura equivalente em Fahrenheit: %.2lf\n", fahrenheit);
    }

    /* FIM */
    return 0;
}
