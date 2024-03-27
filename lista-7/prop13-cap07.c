#include <stdio.h>

#define LINHAS 6
#define COLUNAS 4

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

void recalculaMatriz(int matriz[][COLUNAS])
{
    for (int i = 0; i < LINHAS; i++)
    {
        int maiorElemento = matriz[i][0];
        for (int j = 1; j < COLUNAS; j++)
        {
            if (matriz[i][j] > maiorElemento)
            {
                maiorElemento = matriz[i][j];
            }
        }
        for (int j = 0; j < COLUNAS; j++)
        {
            matriz[i][j] *= maiorElemento;
        }
    }
}

void mostrarMatriz(int matriz[][COLUNAS])
{
    printf("\nMatriz recalculada:\n");
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
    recalculaMatriz(matriz);
    mostrarMatriz(matriz);

    return 0;
}
