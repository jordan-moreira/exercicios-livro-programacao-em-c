#include <stdio.h>

#define LINHAS 6
#define COLUNAS 10

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

void somarColunas(int matriz[][COLUNAS], int resultado[])
{
    for (int j = 0; j < COLUNAS; j++)
    {
        int soma = 0;
        for (int i = 0; i < LINHAS; i++)
        {
            soma += matriz[i][j];
        }
        resultado[j] = soma;
        matriz[LINHAS][j] = soma;
    }
}

void mostrarResultado(int resultado[])
{
    printf("\nResultado da soma de cada coluna:\n");
    for (int j = 0; j < COLUNAS; j++)
    {
        printf("Coluna %d: %d\n", j + 1, resultado[j]);
    }
}

void mostrarMatriz(int matriz[][COLUNAS])
{
    printf("\nMatriz com a soma acumulada na 7ª linha:\n");
    for (int i = 0; i <= LINHAS; i++)
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
    int matriz[LINHAS + 1][COLUNAS];
    int resultado[COLUNAS];

    preencherMatriz(matriz);
    somarColunas(matriz, resultado);
    mostrarResultado(resultado);
    mostrarMatriz(matriz);

    return 0;
}
