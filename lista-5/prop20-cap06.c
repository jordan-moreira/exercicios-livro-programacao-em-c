#include <stdio.h>

int main()
{
    int n[10], i, cont = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
        if (n[i] > 0)
        {
            cont++;
        }
    }

    if (cont > 0)
    {
        printf("\nNúmeros positivos digitados: ");
        for (i = 0; i < 10; i++)
        {
            if (n[i] > 0)
            {
                printf("%d | ", n[i]);
            }
        }
    }
    else
    {
        printf("\nNenhum número positivo digitado. \n");
    }
}
