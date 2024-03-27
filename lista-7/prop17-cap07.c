#include <stdio.h>

#define DIMENSAO 10

void preencherMatriz(int matriz[][DIMENSAO])
{
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < DIMENSAO; i++)
    {
        for (int j = 0; j < DIMENSAO; j++)
        {
            printf("M[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

float calcularMediaDiagonalPrincipal(int matriz[][DIMENSAO])
{
    float soma = 0.0;
    for (int i = 0; i < DIMENSAO; i++)
    {
        soma += matriz[i][i];
    }
    float media = soma / DIMENSAO;
    return media;
}

int main()
{
    int matriz[DIMENSAO][DIMENSAO];

    preencherMatriz(matriz);
    float mediaDiagonalPrincipal = calcularMediaDiagonalPrincipal(matriz);

    printf("A media dos elementos da diagonal principal eh: %.2f\n", mediaDiagonalPrincipal);

    return 0;
}
