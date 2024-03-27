#include <stdio.h>

// esse codigo recebe 3 valores e retorna o resultado da mutiplicacao entre eles

int main()
{
    int valor1, valor2, valor3, resultado;

    printf("digite o primeiro numero: ");
    scanf("%d%*c", &valor1);

    printf("digite o segundo numero: ");
    scanf("%d%*c", &valor2);

    printf("digite o terceiro numero: ");
    scanf("%d%*c", &valor3);

    resultado = valor1 * valor2 * valor3;

    printf("%d * %d * %d = %d", valor1, valor2, valor3, resultado);
}