#include <stdio.h>

int Soma(int a, int b)
{
    int i, soma = 0;

    for (i = a + 1; i < b; i++)
    {
        soma += i;
    }
    return soma;
}

int main()
{
    int x, y, s;

    printf("Número 1: ");
    scanf("%d", &x);

    printf("Número 2: ");
    scanf("%d", &y);

    printf("A soma dos números entre %d e %d é %d. \n", x, y, Soma(x, y));
}
