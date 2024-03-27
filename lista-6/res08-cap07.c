#include <stdio.h>

int main()
{
    int matriz[6][4], mat2[6][4];
    int i, j, contMaior30 = 0;

    printf("1º Matriz \n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("\tM[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {

            if (matriz[i][j] == 30)
            {
                mat2[i][j] = 0;
            }

            else if (matriz[i][j] < 30)
            {
                mat2[i][j] = matriz[i][j];
            }
            else
            {
                contMaior30++;
            }
        }
    }

    printf("\n2º Matriz: \n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (mat2[i][j] >= 0 && mat2[i][j] <= 30)
            {
                printf("\tM2[%d][%d]: %d \n", i, j, mat2[i][j]);
            }
        }
    }

    printf("\nQuantidade de números maiores que 30 digitados: %d \n\n", contMaior30);
}