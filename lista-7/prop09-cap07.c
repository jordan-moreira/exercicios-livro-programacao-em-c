#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

void multiplicarMatriz(float matriz[LINHAS][COLUNAS], float multiplicador)
{
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            matriz[i][j] *= multiplicador;
        }
    }
}

void imprimirMatriz(float matriz[LINHAS][COLUNAS])
{
    printf("Matriz resultante:\n");
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    float matriz[LINHAS][COLUNAS];
    float multiplicador;

    // Preenchimento da matriz
    printf("Preencha a matriz:\n");
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    // Leitura do valor numérico
    printf("Digite um valor numérico: ");
    scanf("%f", &multiplicador);

    // Multiplicação da matriz pelo valor numérico
    multiplicarMatriz(matriz, multiplicador);

    // Impressão da matriz resultante
    imprimirMatriz(matriz);

    return 0;
}
