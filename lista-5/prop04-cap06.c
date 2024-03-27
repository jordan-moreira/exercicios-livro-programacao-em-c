#include <stdio.h>

int main()
{
    int TAM = 15;
    int v[TAM], pos[TAM];
    int i, p = 0;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &v[i]);
        if (v[i] == 30)
        {
            pos[p] = i;
            p++;
        }
    }

    if (p > 0)
    {
        printf("\nOs números iguais a 30 está nas posições: ");
        for (i = 0; i < p; i++)
        {
            printf("%d,", pos[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Não foi digitado nenhum número igual a 30. \n");
    }
}
