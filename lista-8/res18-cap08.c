#include <stdio.h>
#include <time.h>

#define DIM 6

int Menor_Elemento_DiagSecundaria(int mat[][DIM])
{
    int i, j, DiagSecundaria[DIM];
    int p = 0;

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            if (i + j == (DIM - 1))
            {
                DiagSecundaria[p] = mat[i][j];
                p++;
            }
        }
    }

    int menor = DiagSecundaria[0];
    for (i = 0; i < p; i++)
    {
        if (DiagSecundaria[i] < menor)
        {
            menor = DiagSecundaria[i];
        }
    }

    return menor;
}

int main()
{
    int i, j, matriz[DIM][DIM];
    srand(time(NULL));

    int Menor_Elemento_DiagSecundaria(int mat[][DIM]);

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            matriz[i][j] = rand() % 36;
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMenor elemento da diagonal secundária é %d. \n", Menor_Elemento_DiagSecundaria(matriz));
}
