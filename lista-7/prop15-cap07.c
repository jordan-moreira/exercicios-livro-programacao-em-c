#include <stdio.h>
#include <stdlib.h>

#define LINHAS 12
#define COLUNAS 13

void preencherMatriz(int matriz[][COLUNAS])
{
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void dividirPorMaiorModulo(int matriz[][COLUNAS])
{
    for (int i = 0; i < LINHAS; i++)
    {
        int maiorModulo = abs(matriz[i][0]);
        for (int j = 1; j < COLUNAS; j++)
        {
            if (abs(matriz[i][j]) > maiorModulo)
            {
                maiorModulo = abs(matriz[i][j]);
            }
        }
        for (int j = 0; j < COLUNAS; j++)
        {
            matriz[i][j] /= maiorModulo;
        }
    }
}

void mostrarMatriz(int matriz[][COLUNAS])
{
    printf("\nMatriz original:\n");
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void mostrarMatrizModificada(int matriz[][COLUNAS])
{
    printf("\nMatriz modificada:\n");
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matriz[LINHAS][COLUNAS];

    preencherMatriz(matriz);
    mostrarMatriz(matriz);

    dividirPorMaiorModulo(matriz);
    mostrarMatrizModificada(matriz);

    return 0;
}
