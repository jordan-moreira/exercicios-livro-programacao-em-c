#include <stdio.h>

int main()
{
    int v[7];
    int i;

    for (i = 0; i < 7; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("\n");

    for (i = 0; i < 7; i++)
    {
        if (v[i] % 2 == 0)
        {
            printf("\tO número %d é multiplo de 2. \n", v[i]);
        }
        else if (v[i] % 3 == 0)
        {
            printf("\tO número %d é multiplo de 3. \n", v[i]);
        }
        if (v[i] % 2 == 0 && v[i] % 3 == 0)
        {
            printf("\tO número %d é multiplo de 2 e 3. \n", v[i]);
        }
    }
}
