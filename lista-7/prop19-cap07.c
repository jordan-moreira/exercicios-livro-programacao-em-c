#include <stdio.h>

#define LINHAS 8
#define COLUNAS 6

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

float calcularMediaLinhasPares(int matriz[][COLUNAS])
{
    int soma = 0;
    int contador = 0;
    for (int i = 0; i < LINHAS; i += 2)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            soma += matriz[i][j];
            contador++;
        }
    }
    float media = (float)soma / contador;
    return media;
}

int main()
{
    int matriz[LINHAS][COLUNAS];

    preencherMatriz(matriz);
    float mediaLinhasPares = calcularMediaLinhasPares(matriz);

    printf("A media dos elementos das linhas pares da matriz eh: %.2f\n", mediaLinhasPares);

    return 0;
}
