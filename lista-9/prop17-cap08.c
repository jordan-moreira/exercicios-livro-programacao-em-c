#include <stdio.h>

int calcular_mdc(int a, int b)
{
    int resto;

    while (b != 0)
    {
        resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

// Exemplo de uso da sub-rotina
int main()
{
    int numero1 = 48;
    int numero2 = 36;
    int mdc;

    mdc = calcular_mdc(numero1, numero2);

    printf("MDC de %d e %d: %d\n", numero1, numero2, mdc);

    return 0;
}
