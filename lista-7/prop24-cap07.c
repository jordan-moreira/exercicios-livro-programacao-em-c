#include <stdio.h>

#define LINHAS 4
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

void calcularSomaColunas(int matriz[][COLUNAS], int vetor[])
{
    for (int j = 0; j < COLUNAS; j++)
    {
        int soma = 0;
        for (int i = 0; i < LINHAS; i++)
        {
            soma += matriz[i][j];
        }
        vetor[j] = soma;
    }
}

void mostrarElementosMaioresQueDez(int vetor[])
{
    int existeElementoMaiorQueDez = 0;
    printf("Elementos maiores que dez no vetor:\n");
    for (int i = 0; i < COLUNAS; i++)
    {
        if (vetor[i] > 10)
        {
            printf("%d ", vetor[i]);
            existeElementoMaiorQueDez = 1;
        }
    }
    printf("\n");

    if (!existeElementoMaiorQueDez)
    {
        printf("Nenhum elemento maior que dez no vetor.\n");
    }
}

int main()
{
    int matriz[LINHAS][COLUNAS];
    int vetor[COLUNAS];

    preencherMatriz(matriz);
    calcularSomaColunas(matriz, vetor);
    mostrarElementosMaioresQueDez(vetor);

    return 0;
}
