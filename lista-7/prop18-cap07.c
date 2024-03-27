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

float calcularSomaDiagonalSecundaria(float matriz[][DIMENSAO])
{
    float soma = 0.0;
    for (int i = 0; i < DIMENSAO; i++)
    {
        soma += matriz[i][DIMENSAO - i - 1];
    }
    return soma;
}

int main()
{
    float matriz[DIMENSAO][DIMENSAO];

    preencherMatriz(matriz);
    float somaDiagonalSecundaria = calcularSomaDiagonalSecundaria(matriz);

    printf("A soma dos elementos da diagonal secundaria eh: %.2f\n", somaDiagonalSecundaria);

    return 0;
}
