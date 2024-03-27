#include <stdio.h>

#define DIMENSAO 5

void preencherMatriz(float matriz[][DIMENSAO])
{
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < DIMENSAO; i++)
    {
        for (int j = 0; j < DIMENSAO; j++)
        {
            printf("M[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void multiplicarLinhaPelaDiagonalPrincipal(float matriz[][DIMENSAO])
{
    for (int i = 0; i < DIMENSAO; i++)
    {
        float diagonalPrincipal = matriz[i][i];
        for (int j = 0; j < DIMENSAO; j++)
        {
            matriz[i][j] *= diagonalPrincipal;
        }
    }
}

void mostrarMatriz(float matriz[][DIMENSAO])
{
    printf("\nMatriz Resultante:\n");
    for (int i = 0; i < DIMENSAO; i++)
    {
        for (int j = 0; j < DIMENSAO; j++)
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    float matriz[DIMENSAO][DIMENSAO];

    preencherMatriz(matriz);
    multiplicarLinhaPelaDiagonalPrincipal(matriz);
    mostrarMatriz(matriz);

    return 0;
}
