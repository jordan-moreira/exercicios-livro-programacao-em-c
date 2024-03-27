#include <stdio.h>

int main()
{
    int x[10], y[5], n_par[10], n_impar[10], div[10];
    int p = 0, p2 = 0, p3 = 0, soma = 0;
    int i, j, quant_div = 0;

    printf("1º Vetor \n");
    for (i = 0; i < 10; i++)
    {
        printf("\tDigite o %d número: ", i + 1);
        scanf("%d", &x[i]);

        if (x[i] % 2 == 0 && x[i] != 0)
        {
            n_par[p] = x[i];
            p++;
        }
        else
        {
            n_impar[p2] = x[i];
            p2++;
        }
    }

    printf("\n2º Vetor \n");
    for (i = 0; i < 5; i++)
    {
        printf("\tDigite o %d número: ", i + 1);
        scanf("%d", &y[i]);
        soma += y[i];
    }

    printf("\n1º Vetor resultante: \n");
    for (i = 0; i < p; i++)
    {
        printf("%d | ", n_par[i] + soma);
    }

    for (i = 0; i < p2; i++)
    {
        quant_div = 0;

        for (j = 0; j < 5; j++)
        {
            if (n_impar[i] % y[j] == 0)
            {
                quant_div++;
            }
        }
        div[p3] = quant_div;
        p3++;
    }

    printf("\n\n2º Vetor resultante \n");
    for (i = 0; i < p2; i++)
    {
        printf("%d | ", div[i]);
    }
}
