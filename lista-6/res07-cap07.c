#include <stdio.h>
#include <time.h>

int main()
{
    int mat[5][7];
    int i, j, quebra_linha = 0;
    int menor_linha[5], maior_coluna[7], pC = 0, pL = 0, indiceLinha, indiceColuna;

    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (quebra_linha == 0)
            {
                printf("%dº|", i + 1);
            }

            mat[i][j] = rand() % 35;
            printf("%4d", mat[i][j]);
            quebra_linha++;

            if (quebra_linha == 7)
            {
                quebra_linha = 0;
                printf("\n");
            }
        }
    }

    int maior_comp = 0;
    int menor_comp = 35;
    int indiceLinha = 0;
    int indiceColuna = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (mat[i][j] > maior_inicio)
            {
                maior_coluna[p] = mat[i][j];
                p++;
            }

            if (mat[i][j] < menor_linha)
            {
                menor_linha = mat[indiceLinha][indiceColuna];
                indiceLinha = i;
            }

            if (maior_coluna == menor_linha)
            {
                printf("Ponto de sela: Valor: %d e localização %d|%d \n", maior_coluna, indiceLinha, indiceColuna);
                break;
            }
        }
    }
}
