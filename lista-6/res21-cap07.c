#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dimensao, i, j;
    int soma = 0;

    // Solicitar a dimensão da matriz
    printf("Digite a dimensao da matriz quadrada: ");
    scanf("%d", &dimensao);

    // Criar a matriz com a dimensão informada
    int matriz[dimensao][dimensao];

    // Ler os elementos da matriz
    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < dimensao; i++)
    {
        for (j = 0; j < dimensao; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcular a soma dos elementos abaixo da diagonal secundária
    for (i = 0; i < dimensao; i++)
    {
        for (j = 0; j < dimensao; j++)
        {
            if (j > (dimensao - i - 1))
            {
                soma += matriz[i][j];
            }
        }
    }

    // Mostrar a soma dos elementos abaixo da diagonal secundária
    printf("A soma dos elementos abaixo da diagonal secundaria e: %d\n", soma);

    return 0;
}
