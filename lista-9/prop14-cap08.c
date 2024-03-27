#include <stdio.h>

void separar_vetores(int X[], int A[], int B[])
{
    int i, j = 0, k = 0;

    for (i = 0; i < 30; i++)
    {
        if (X[i] > 0)
        {
            A[j] = X[i];
            j++;
        }
        else
        {
            B[k] = X[i];
            k++;
        }
    }
}

// Exemplo de uso da sub-rotina
int main()
{
    int vetor_X[30] = {-2, 4, -6, 8, 0, 10, -12, 14, 16, -18, 20, 22, -24, 26, 28, -30, 32, 34, -36, 38, 40, -42, 44, 46, -48, 50, 52, -54, 56, 58};
    int vetor_A[30], vetor_B[30];
    int i;

    separar_vetores(vetor_X, vetor_A, vetor_B);

    printf("Vetor A: ");
    for (i = 0; i < 30; i++)
    {
        if (vetor_A[i] != 0)
        {
            printf("%d ", vetor_A[i]);
        }
    }

    printf("\nVetor B: ");
    for (i = 0; i < 30; i++)
    {
        if (vetor_B[i] != 0)
        {
            printf("%d ", vetor_B[i]);
        }
    }

    return 0;
}
