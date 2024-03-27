#include <stdio.h>
#include <time.h>

int main()
{
    int mat[8][8], QuebraLinha;
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 8; i++)
    {
        QuebraLinha = 1;
        for (j = 0; j < 8; j++)
        {
            if (QuebraLinha == 1)
            {
                printf("%dº ", i + 1);
            }

            mat[i][j] = rand() % 64;
            printf("%4d", mat[i][j]);

            if (QuebraLinha == 8)
            {
                printf("\n");
            }
            QuebraLinha++;
        }
    }

    int verificar = 0;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            if (mat[i][j] == mat[j][i])
            {
                verificar++;
            }
        }
    }

    if (verificar == 64)
    {
        printf("\n Matriz Simétrica \n");
    }
    else
    {
        printf("\n Matriz Assimétrica \n");
    }
}
