#include <stdio.h>
#define LIN 10
#define COL 20

int main()
{
    int matriz[LIN][COL], soma[LIN], mult[LIN];
    int i, j, p = 0;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < LIN; i++)
    {

        soma[p] = 0;

        for (j = 0; j < COL; j++)
        {
            soma[p] += matriz[i][j];
        }
        p++;
    }

    for (i = 0; i < LIN; i++)
    {
        printf("\n%dº Linha \n", i + 1);
        printf("\tSoma: %d \n", soma[i]);

        for (j = 0; j < COL; j++)
        {
            mult[i] = soma[i] * matriz[i][j];
            printf("\tMultplicação [%d][%d] =  %d \n", i, j, mult[i]);
        }
    }
}
