#include <stdio.h>

int main()
{
    int mat[2][2], matCopia[2][2], repetidos[2][2];
    int i, j, k, l, cont = 0, pL = 0, pC = 0;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &mat[i][j]);
            matCopia[i][j] = mat[i][j];
        }
    }
    repetidos[0][0] = mat[0][0];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            for (k = 0; k < 2; k++)
            {
                for (l = 0; l < 2; l++)
                {
                    if (mat[i][j] == matCopia[j][k])
                    {
                        repetidos[pL][pC] = mat[i][j];
                        printf("R: %d \n", repetidos[pL][pC]);
                    }
                }
            }
        }
    }
}
