#include <stdio.h>

void OrdenarVetor(int V1[], int V2[], int N)
{
    int i, j, aux, p = 0, V3[N * 2];

    for (i = 0; i < N * 2; i++)
    {
        if (i < N)
        {
            V3[i] = V1[i];
        }
        else
        {
            V3[i] = V2[p];
            p++;
        }
    }

    for (i = 0; i < N * 2; i++)
    {
        for (j = i + 1; j < N * 2; j++)
        {
            if (V3[i] < V3[j])
            {
                aux = V3[i];
                V3[i] = V3[j];
                V3[j] = aux;
            }
        }
    }

    printf("\nVetor organizado: \n");
    for (i = 0; i < N * 2; i++)
    {
        printf("%d ", V3[i]);
    }
}

int main()
{

    void OrdenarVetor(int V1[], int V2[], int N);

    int TAM = 10;
    int i, j, vetA[TAM], vetB[TAM];

    printf("Vetor A \n");
    for (i = 0; i < TAM; i++)
    {
        printf("\tVA[%d]: ", i);
        scanf("%d", &vetA[i]);
    }

    printf("\nVetor B \n");
    for (i = 0; i < TAM; i++)
    {
        printf("\tVB[%d]: ", i);
        scanf("%d", &vetB[i]);
    }

    OrdenarVetor(vetA, vetB, TAM);
}
