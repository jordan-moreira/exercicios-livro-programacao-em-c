#include <stdio.h>
#include <time.h>

int main()
{
    int vet1[5], vet2[10], mat1[4][3], mat2[4][3], somaPares[4];
    int i, j, p = 0, cont = 0, num1e5_coluna[3];

    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        if (i < 4)
        {
            vet1[i] = (rand() % 10) + 1;
        }
        vet2[i] = (rand() % 10) + 1;
    }

    int maior = vet1[0];
    int menor = vet2[0];

    printf("Vetor 1: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", vet1[i]);

        if (vet1[i] > maior)
        {
            maior = vet1[i];
        }
    }

    printf("\nVetor 2: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", vet2[i]);

        if (vet2[i] < menor)
        {
            menor = vet2[i];
        }
    }

    printf("\n\nMatriz 1\n");
    for (i = 0; i < 4; i++)
    {
        cont = 0;
        for (j = 0; j < 3; j++)
        {
            if (cont == 0)
            {
                printf("%dº ", i + 1);
            }
            mat1[i][j] = (rand() % 10) + 1;
            printf("%4d", mat1[i][j]);

            if (cont == 3 - 1)
            {
                printf("\n");
                cont = 0;
            }
            cont++;
        }
    }

    printf("\nMatriz 2\n");
    for (i = 0; i < 4; i++)
    {
        cont = 0;
        for (j = 0; j < 3; j++)
        {
            if (cont == 0)
            {
                printf("%dº ", i + 1);
            }

            mat2[i][j] = mat1[i][j] + (maior * menor);
            printf("%4d", mat2[i][j]);

            if (cont == 3 - 1)
            {
                printf("\n");
                cont = 0;
            }
            cont++;
        }
    }

    printf("\nSoma dos valores pares de cada linha da matriz resultante: \n");
    for (i = 0; i < 4; i++)
    {
        somaPares[p] = 0;
        for (j = 0; j < 3; j++)
        {
            if (mat2[i][j] % 2 == 0)
            {
                somaPares[p] += mat2[i][j];
            }
        }
        printf("\t%dº linha: %d \n", i + 1, somaPares[p]);
        p++;
    }

    p = 0;

    for (i = 0; i < 4; i++)
    {
        num1e5_coluna[p] = 0;

        for (j = 0; j < 3; j++)
        {
            if (mat2[j][i] >= 1 && mat2[j][i] <= 5)
            {
                num1e5_coluna[p] += 1;
            }
        }
        p++;
    }

    printf("\nNúmeros entre 1 e 5 em cada coluna da matriz resultante: \n");
    for (i = 0; i < 4; i++)
    {
        somaPares[p] = 0;
        printf("\t%dºº coluna: %d \n", i + 1, num1e5_coluna[i]);
        p++;
    }
}
