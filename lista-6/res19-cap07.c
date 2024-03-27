#include <stdio.h>

int main()
{
    int vet[18];
    int matriz[3][6];
    int i, j, k = 0;

    printf("Digite os %d elementos do vetor:\n", 18);
    for (i = 0; i < 18; i++)
    {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            matriz[i][j] = vet[k];
            k++;
        }
    }

    printf("\nMatriz gerada:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
