#include <stdio.h>

int main()
{
    int n[5], soma = 0, i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n[i]);
        soma += n[i];
    }

    printf("\nOs números digitados foram: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d", n[i]);
        if (i < 4)
        {
            printf(" + ");
        }
        if (i == 4)
        {
            printf(" = %d \n", soma);
        }
    }
}