#include <stdio.h>
#include <time.h>

int main()
{
    int mat[4][4], SomaLinha[4], somaColuna[4], SomaDiagonalPrincipal = 0, SomaDiagonalSegun = 0;
    int i, j, c = 0, p = 0;

    srand(time(NULL));

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            mat[i][j] = rand() % 5;
        }
    }

    for (i = 0; i < 4; i++)
    {
        c = 1;
        for (j = 0; j < 4; j++)
        {
            printf("%4d", mat[i][j]);
            if (c == 4)
            {
                printf("\n");
            }
            c++;
        }
    }

    int auxLinha = 0, auxColuna = 0, auxDiag = 0;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            auxLinha += mat[i][j];
            auxColuna += mat[j][i];
            SomaLinha[i] = auxLinha;
            somaColuna[i] = auxColuna;

            if (i == j)
            {
                SomaDiagonalPrincipal += mat[i][j];
                SomaDiagonalSegun += mat[i][i - 4];
            }
        }
        auxLinha = 0;
        auxColuna = 0;
    }

    printf("\nSoma das linhas: \n");
    for (i = 0; i < 4; i++)
    {
        printf("\tSoma %dº linha: %d \n", i + 1, SomaLinha[i]);
    }

    printf("\nSoma das colunas: \n");
    for (i = 0; i < 4; i++)
    {
        printf("\tSoma %dº coluna: %d \n", i + 1, somaColuna[i]);
    }

    printf("\nSoma das diagonal Principal: %d\n", SomaDiagonalPrincipal);
    printf("Soma das diagonal secundaria: %d\n", SomaDiagonalSegun);
}