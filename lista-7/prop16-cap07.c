#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

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

void calcularSomas(int matriz[][COLUNAS], int vetorSomaLinhas[], int vetorSomaColunas[])
{
    for (int i = 0; i < LINHAS; i++)
    {
        vetorSomaLinhas[i] = 0;
        for (int j = 0; j < COLUNAS; j++)
        {
            vetorSomaLinhas[i] += matriz[i][j];
            vetorSomaColunas[j] += matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[][COLUNAS])
{
    printf("\nMatriz:\n");
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void mostrarVetores(int vetorSomaLinhas[], int vetorSomaColunas[])
{
    printf("\nVetor com as somas das linhas:\n");
    for (int i = 0; i < LINHAS; i++)
    {
        printf("%d ", vetorSomaLinhas[i]);
    }
    printf("\n");

    printf("\nVetor com as somas das colunas:\n");
    for (int j = 0; j < COLUNAS; j++)
    {
        printf("%d ", vetorSomaColunas[j]);
    }
    printf("\n");
}

int main()
{
    int matriz[LINHAS][COLUNAS];
    int vetorSomaLinhas[LINHAS] = {0};
    int vetorSomaColunas[COLUNAS] = {0};

    preencherMatriz(matriz);
    calcularSomas(matriz, vetorSomaLinhas, vetorSomaColunas);
    mostrarMatriz(matriz);
    mostrarVetores(vetorSomaLinhas, vetorSomaColunas);

    return 0;
}
