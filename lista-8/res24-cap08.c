#include <stdio.h>

int Calculadora(int x, char operacao, int y)
{
    int res;

    switch (operacao)
    {
    case '+':
        res = x + y;
        break;

    case '-':
        res = x - y;
        break;

    case '*':
        res = x * y;
        break;

    default:
        printf("Entrada inválida. \n");
        break;
    }

    return res;
}

int main()
{
    int n1, n2;
    char sinal;

    int Calculadora(int x, char operacao, int y);

    printf("Calculadora Simples \n\n");

    printf("1º valor: ");
    scanf("%d", &n1);

    printf("Sinal: ");
    scanf(" %c", &sinal);

    printf("2º valor: ");
    scanf("%d", &n2);

    printf("R = %d \n", Calculadora(n1, sinal, n2));
}
