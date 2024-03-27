#include <stdio.h>
#define LIN 4
#define COL 7

int main()
{
    float matriz[LIN][COL], maior, menor;
    int i, j, ind_maiorL, ind_maiorC, ind_menor;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("M[%d][%d] = ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    menor = matriz[0][0];

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {

            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                ind_menor = i;
            }
        }
    }

    maior = matriz[ind_maiorL][0];

    for (i = 0; i < COL; i++)
    {

        if (matriz[ind_maiorL][i] > maior)
        {
            maior = matriz[ind_maiorL][i];
            ind_maiorC = i;
        }
    }

    printf("\nMINMAX[%d][%d]: %.2f \n", ind_menor, ind_maiorC, maior);
}