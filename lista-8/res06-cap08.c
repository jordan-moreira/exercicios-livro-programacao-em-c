#include <stdio.h>
#include <math.h>

void Multiplicacao(int x)
{
    int i, j, mult;

    for (i = 1; i < x; i++)
    {
        for (j = 1; j <= x; j++)
        {
            if (i == j * j)
            {
                printf("%d \n", mult = i * j);
            }
        }
    }
}

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    Multiplicacao(num);
}
