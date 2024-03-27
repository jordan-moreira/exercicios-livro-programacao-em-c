#include <stdio.h>

#define LINHAS 2
#define COLUNAS 3

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

int contarElementosForaIntervalo(int matriz[][COLUNAS])
{
    int contador = 0;
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            if (matriz[i][j] < 5 || matriz[i][j] > 15)
            {
                contador++;
            }
        }
    }
    return contador;
}

int main()
{
    int matriz[LINHAS][COLUNAS];

    preencherMatriz(matriz);
    int quantidadeForaIntervalo = contarElementosForaIntervalo(matriz);

    printf("Quantidade de elementos fora do intervalo [5,15]: %d\n", quantidadeForaIntervalo);

    return 0;
}
