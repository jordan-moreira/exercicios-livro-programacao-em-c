#include <stdio.h>
#include <time.h>

int main()
{
    int mat[7][7], maior, menor, linha[7 * 2], coluna[7 * 2];
    int i, j, p = 0, cont = 0;

    srand(time(NULL));

    for (i = 0; i < 7; i++)
    {
        cont = 0;
        for (j = 0; j < 7; j++)
        {
            if (cont == 0)
            {
                printf("%dº ", i + 1);
            }
            mat[i][j] = (rand() % 10) + 1;
            printf("%4d", mat[i][j]);

            if (cont == 7 - 1)
            {
                printf("\n");
                cont = 0;
            }
            cont++;
        }
    }

    p = 0;
    for (i = 0; i < 7; i++)
    {
        maior = mat[i][0];
        menor = mat[i][0];

        for (j = 0; j < 7; j++)
        {
            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
            }
            if (mat[i][j] < menor)
            {
                menor = mat[i][j];
            }
        }

        linha[p] = maior;
        p++;
        linha[p] = menor;
        p++;
    }

    cont = 0;
    printf("\nMaior e menor elmento de cada linha respectivamente: \n");
    for (i = 0; i < 7 * 2; i++)
    {
        if (cont == 0)
        {
            printf("(");
        }
        printf("%d", linha[i]);
        cont++;

        if (cont == 1)
        {
            printf(",");
        }

        if (cont == 2)
        {
            printf(") ");
            cont = 0;
        }
    }

    p = 0;
    for (i = 0; i < 7; i++)
    {
        maior = mat[0][i];
        menor = mat[0][i];

        for (j = 0; j < 7; j++)
        {
            if (mat[j][i] > maior)
            {
                maior = mat[j][i];
            }
            if (mat[j][i] < menor)
            {
                menor = mat[j][i];
            }
        }
        coluna[p] = maior;
        p++;
        coluna[p] = menor;
        p++;
    }

    cont = 0;
    printf("\n\nMaior e menor elmento de cada coluna respectivamente: \n");
    for (i = 0; i < 7 * 2; i++)
    {
        if (cont == 0)
        {
            printf("(");
        }
        printf("%d", coluna[i]);
        cont++;

        if (cont == 1)
        {
            printf(",");
        }

        if (cont == 2)
        {
            printf(") ");
            cont = 0;
        }
    }
}