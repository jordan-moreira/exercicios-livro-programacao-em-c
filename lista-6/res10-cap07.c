#include <stdio.h>
#include <time.h>

int main()
{
    int mat[10][10], matCopia[10][10], diag1[10], diag2[10];
    int i, j, p = 0, c = 9, cont, aux;

    srand(time(NULL));

    printf("Matriz inicial: \n\n");
    for (i = 0; i < 10; i++)
    {
        cont = 0;
        for (j = 0; j < 10; j++)
        {

            if (cont == 0)
            {
                printf("%4dº: ", i + 1);
            }
            printf("%4d", mat[i][j] = rand() % 100);
            matCopia[i][j] = mat[i][j];
            cont++;

            if (cont == 10)
            {
                printf("\n");
            }
        }
    }

    printf("\n--------------------------------------------------------------------------\n");

    for (i = 0; i < 10; i++)
    {
        aux = mat[2 - 1][i];
        matCopia[2 - 1][i] = mat[8 - 1][i];
        matCopia[8 - 1][i] = aux;
    }

    printf("Troca da linha 2 com a 8 \n\n");
    for (i = 0; i < 10; i++)
    {
        cont = 0;
        for (j = 0; j < 10; j++)
        {
            if (cont == 0)
            {
                printf("%dº: \t", i + 1);
            }
            printf("%4d", matCopia[i][j]);
            cont++;
            if (cont == 10)
            {
                printf("\n");
            }
        }
    }

    printf("\n--------------------------------------------------------------------------\n");

    for (i = 0; i < 10; i++)
    {
        aux = mat[i][4 - 1];
        matCopia[i][4 - 1] = mat[i][10 - 1];
        matCopia[i][10 - 1] = aux;
    }

    printf("Troca da coluna 4 com a 10 \n\n");
    for (i = 0; i < 10; i++)
    {
        cont = 0;
        for (j = 0; j < 10; j++)
        {
            if (cont == 0)
            {
                printf("%dº: \t", i + 1);
            }
            printf("%4d", matCopia[i][j]);
            cont++;
            if (cont == 10)
            {
                printf("\n");
            }
        }
    }

    printf("\n--------------------------------------------------------------------------\n");

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i == j)
            {
                diag1[p] = mat[i][j];
                diag2[p] = mat[i][c--];
                p++;
            }
        }
    }
    p = 0;
    c = 9;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {

            if (i == j)
            {
                matCopia[i][j] = diag2[p];
                matCopia[i][c] = diag1[p];
                c--;
                p++;
            }
        }
    }

    printf("Troca da diagonal principal com a secundária: \n\n");
    for (i = 0; i < 10; i++)
    {
        cont = 0;
        for (j = 0; j < 10; j++)
        {
            if (cont == 0)
            {
                printf("%4dº: ", i + 1);
            }
            printf("%4d", matCopia[i][j]);
            cont++;
            if (cont == 10)
            {
                printf("\n");
            }
        }
    }

    printf("\n--------------------------------------------------------------------------\n");

    int linha5[10], coluna10[10];
    int p1 = 0, p2 = 0;

    printf("Troca da linha 5 com a coluna 10: \n\n");
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {

            if (i == 4)
            {
                linha5[p1] = mat[4][j];
                p1++;
            }

            if (j == 9)
            {
                coluna10[p2] = mat[i][j];
                p2++;
            }
        }
    }

    p1 = 0;
    p2 = 0;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (i == 4)
            {
                matCopia[4][j] = coluna10[p1];
                p1++;
            }

            if (j == 9)
            {
                matCopia[i][9] = linha5[p2];
                p2++;
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        cont = 0;
        for (j = 0; j < 10; j++)
        {
            if (cont == 0)
            {
                printf("%dº: \t", i + 1);
            }
            printf("%4d", matCopia[i][j]);
            cont++;
            if (cont == 10)
            {
                printf("\n");
            }
        }
    }
    printf("\n--------------------------------------------------------------------------\n");
}