#include <stdio.h>

int main()
{
    int mat1[4][5], mat2[5][2], mat3;
    int i, j = 0, p;

    printf("1º Matriz \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("\tM1[%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("\n2º Matriz \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\tM2[%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
}
