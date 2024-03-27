#include <stdio.h>

int main()
{
    int log[15], prog[10], rep[10];
    int i, j, p = 0;

    printf("LOGICA \n");
    for (i = 0; i < 15; i++)
    {
        printf("\tDigite o número da %dº matricula: ", i + 1);
        scanf("%d", &log[i]);
    }

    printf("\nLINGUAGEM DE PROGRAMAÇÃO \n");
    for (i = 0; i < 10; i++)
    {
        printf("\tDigite o número da %dº matricula: ", i + 1);
        scanf("%d", &prog[i]);
    }

    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (log[i] == prog[j])
            {
                rep[p] = log[i];
                p++;
            }
        }
    }

    if (p > 0)
    {
        printf("\nMatriculas repetidas: ");
        for (i = 0; i < p; i++)
        {
            printf("%d, ", rep[i]);
        }
    }
    else
    {
        printf("\nNenhum número de matricula repetido foi encontrado. \n");
    }
}
