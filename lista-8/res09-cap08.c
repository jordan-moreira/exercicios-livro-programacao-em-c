#include <stdio.h>

void PegarMaioreMenorValor()
{
    int num[5], i, maior, menor;

    for (i = 0; i < 5; i++)
    {
        printf("%dº número: ", i + 1);
        scanf("%d", &num[i]);
    }

    maior = num[0];
    menor = num[0];

    for (i = 0; i < 5; i++)
    {
        if (num[i] > maior)
        {
            maior = num[i];
        }

        if (num[i] < menor)
        {
            menor = num[i];
        }
    }

    printf("\nMaior: %d \n", maior);
    printf("Menor: %d \n", menor);
}

int main()
{
    PegarMaioreMenorValor();
}
