#include <stdio.h>

int main()
{
    int n[10], i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
    }

    printf("\nOs números digitados foram: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d | ", n[i]);
    }

    printf("\nSubstituindo valores nulos por 1: ");
    for (i = 0; i < 10; i++)
    {
        if (n[i] == 0)
        {
            n[i] = 1;
            printf("%d | ", n[i]);
        }
        else
        {
            printf("%d | ", n[i]);
        }
    }
}
