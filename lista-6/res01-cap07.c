#include <stdio.h>

int main()
{
    int M[2][2], R[2][2], maior, i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("M[%d]{%d} = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    maior = M[0][0];
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (M[i][j] > maior)
            {
                maior = M[i][j];
            }
        }
    }

    printf("\nMatrix R \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            R[i][j] = M[i][j] * maior;
            printf("\tR[%d][%d] = %d \n", i, j, R[i][j]);
        }
    }
}
