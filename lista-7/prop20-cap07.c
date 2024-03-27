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

float encontrarMaiorValor(float matriz[][DIMENSAO])
{
    float maior = matriz[0][0];
    for (int i = 0; i < DIMENSAO; i++)
    {
        for (int j = 0; j < DIMENSAO; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

void multiplicarDiagonalPrincipal(float matriz[][DIMENSAO], float maior)
{
    for (int i = 0; i < DIMENSAO; i++)
    {
        matriz[i][i] *= maior;
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
    float maiorValor = encontrarMaiorValor(matriz);
    multiplicarDiagonalPrincipal(matriz, maiorValor);
    mostrarMatriz(matriz);

    return 0;
}
