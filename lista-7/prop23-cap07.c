#include <stdio.h>

#define LINHAS 3
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

int contarElementosPares(int matriz[][COLUNAS])
{
    int quantidadePares = 0;
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                quantidadePares++;
            }
        }
    }
    return quantidadePares;
}

int somarElementosImpares(int matriz[][COLUNAS])
{
    int somaImpares = 0;
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            if (matriz[i][j] % 2 != 0)
            {
                somaImpares += matriz[i][j];
            }
        }
    }
    return somaImpares;
}

float calcularMedia(int matriz[][COLUNAS])
{
    int soma = 0;
    int quantidadeElementos = LINHAS * COLUNAS;
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            soma += matriz[i][j];
        }
    }
    float media = (float)soma / quantidadeElementos;
    return media;
}

int main()
{
    int matriz[LINHAS][COLUNAS];

    preencherMatriz(matriz);
    int quantidadePares = contarElementosPares(matriz);
    int somaImpares = somarElementosImpares(matriz);
    float media = calcularMedia(matriz);

    printf("Quantidade de elementos pares: %d\n", quantidadePares);
    printf("Soma dos elementos ímpares: %d\n", somaImpares);
    printf("Média de todos os elementos: %.2f\n", media);

    return 0;
}
