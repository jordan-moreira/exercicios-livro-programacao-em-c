#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

void calcularSomas(int matriz[LINHAS][COLUNAS])
{
    int somaLinha4 = 0;
    int somaColuna2 = 0;
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;
    int somaTotal = 0;

    // Soma dos elementos da linha 4
    for (int j = 0; j < COLUNAS; j++)
    {
        somaLinha4 += matriz[4][j];
    }

    // Soma dos elementos da coluna 2
    for (int i = 0; i < LINHAS; i++)
    {
        somaColuna2 += matriz[i][2];
    }

    // Soma dos elementos da diagonal principal
    for (int i = 0; i < LINHAS; i++)
    {
        somaDiagonalPrincipal += matriz[i][i];
    }

    // Soma dos elementos da diagonal secundária
    for (int i = 0; i < LINHAS; i++)
    {
        somaDiagonalSecundaria += matriz[i][LINHAS - 1 - i];
    }

    // Soma de todos os elementos da matriz
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            somaTotal += matriz[i][j];
        }
    }

    // Impressão dos resultados
    printf("Soma dos elementos da linha 4: %d\n", somaLinha4);
    printf("Soma dos elementos da coluna 2: %d\n", somaColuna2);
    printf("Soma dos elementos da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma dos elementos da diagonal secundária: %d\n", somaDiagonalSecundaria);
    printf("Soma total dos elementos da matriz: %d\n", somaTotal);
}

int main()
{
    int matriz[LINHAS][COLUNAS];

    // Preenchimento da matriz
    printf("Preencha a matriz:\n");
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Cálculo e impressão das somas
    calcularSomas(matriz);

    return 0;
}
