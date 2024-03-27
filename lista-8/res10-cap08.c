#include <stdio.h>

float CalculoExpressao(int N)
{
    int i, j;
    double S = 0, num = 1, fat = 1;

    for (i = 0; i <= N; i++)
    {
        for (j = 1; j <= N; j++)
        {
            fat *= j;
        }
        S += num / fat;
    }

    return S;
}

int main()
{
    int N;

    printf("Digite um valor para N: ");
    scanf("%d", &N);

    printf("S: %.20lf \n", CalculoExpressao(N));
}
