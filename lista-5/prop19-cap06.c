#include <stdio.h>

int main()
{
    int TAM = 10;
    int x[TAM], y[TAM], mult[TAM];
    int i;

    printf("1º Vetor \n");
    for (i = 0; i < TAM; i++)
    {
        printf("\tDigite o %dº valor: ", i + 1);
        scanf("%d", &x[i]);
    }

    printf("\n2º Vetor \n");
    for (i = 0; i < TAM; i++)
    {
        printf("\tDigite o %dº valor: ", i + 1);
        scanf("%d", &y[i]);
    }

    printf("\n3º Vetor: ");
    for (i = 0; i < TAM; i++)
    {
        mult[i] = x[i] * y[i];
        printf("%d | ", mult[i]);
    }
    printf("\n");
}
