#include <stdio.h>

int main()
{
    int TAM = 15;
    int i;
    float div[TAM], n[TAM], maior;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%f", &n[i]);
    }

    maior = n[0];
    for (i = 0; i < TAM; i++)
    {
        if (n[i] > maior)
        {
            maior = n[i];
        }
    }
    printf("\nDIVISÕES \n");
    for (i = 0; i < TAM; i++)
    {
        div[i] = n[i] / maior;
        printf("\t%.0f / %.0f = %.2f \n", n[i], maior, div[i]);
    }
}
