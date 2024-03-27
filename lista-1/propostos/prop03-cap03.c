#include <stdio.h>

// esse codigo recebe dois valores e retorna o resultado da divisao do primeiro pelo segundo

int main()
{
    int valor1, valor2, resultado;

    printf("digite o primeiro numero: ");
    scanf("%d%*c", &valor1);

    printf("digite o segundo numero: ");
    scanf("%d%*c", &valor2);

    resultado = valor1 / valor2;

    printf("%d / %d = %d", valor1, valor2, resultado);
}