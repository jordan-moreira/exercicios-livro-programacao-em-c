#include <stdio.h>

float CalculoExpressao(int n)
{
    float i;
    float s = 0;

    for (i = 1; i <= n; i++)
    {
        s += 1 / i;
    }
    return s;
}
int main()
{
    int N;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    printf("S = %f \n", CalculoExpressao(N));
}
