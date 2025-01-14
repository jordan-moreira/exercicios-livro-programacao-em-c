#include <stdio.h>

#define LIN 3
#define COL 4

void PrencherMatriz(float matriz[][COL])
{
    int i, j;
    srand(time(NULL));

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("M[%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
}

void ImprimirMatriz(float matriz[][COL])
{
    int i, j;
    printf("Matriz gerada: \n");
    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\t%.2f \t", matriz[i][j]);
        }
        printf("\n");
    }
}

void Transformar_Em_Vetor(float matriz[][COL], float vet[])
{
    int i, j, p = 0;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            vet[p] = matriz[i][j];
            p++;
        }
    }
}

int main()
{
    float mat[LIN][COL], vet[LIN * COL];
    int i;

    PrencherMatriz(mat);
    ImprimirMatriz(mat);
    Transformar_Em_Vetor(mat, vet);

    printf("\nMatriz gerada passada para um vetor:  \n");
    for (i = 0; i < LIN * COL; i++)
    {
        printf("%.2f - ", vet[i]);
    }
}
