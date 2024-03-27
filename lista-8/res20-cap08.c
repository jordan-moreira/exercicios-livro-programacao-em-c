#include <stdio.h>
#include <time.h>

#define DIM 4

void Prencher_e_Imprimir(int matriz[][DIM])
{
    int i, j;

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            matriz[i][j] = (rand() % 10) + 1;
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

void Elementos_Abaixo_DP(int matriz[][DIM], int Elementos_AbaixoDP[])
{
    int i, j, p = 0;

    for (i = 0; i < DIM; i++)
    {
        for (j = 0; j < DIM; j++)
        {
            if (i > j)
            {
                Elementos_AbaixoDP[p] = matriz[i][j];
                p++;
            }
        }
    }
}

float Calcular_Media(int Elementos[], int QUANT)
{
    int i, soma;
    float media;

    for (i = 0; i < QUANT; i++)
    {
        soma += Elementos[i];
    }

    media = (float)soma / QUANT;

    return media;
}

int main()
{
    int matriz[DIM][DIM];
    int T = ((DIM * DIM) - DIM) / 2;
    int Elementos_AbaixoDP[T];

    Prencher_e_Imprimir(matriz);
    Elementos_Abaixo_DP(matriz, Elementos_AbaixoDP);

    printf("\nA media dos elementos abaixo da matriz principal da matriz é %.2f. \n", Calcular_Media(Elementos_AbaixoDP, T));
}
