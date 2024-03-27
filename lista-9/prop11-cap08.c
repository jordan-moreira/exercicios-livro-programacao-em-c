#include <stdio.h>

float CalculoExpressao(int n)
{
    float i, x = 1, num, den, S = 0;

    for (i = 1; i <= n; i++)
    {
        num = i * i + 1;
        den = i + 3;
        S += num / den;
    }
    return S;
}
int main()
{
    int n;

    printf("Digite um valor para N: ");
    scanf("%d", &n);

    printf("S = %.4f \n", CalculoExpressao(n));
}
