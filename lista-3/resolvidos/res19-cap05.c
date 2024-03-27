#include <stdio.h>

int main()
{
    int M, N, i;
    int soma;

    do
    {
        printf("Digite M: ");
        scanf("%d", &M);
        printf("Digite N: ");
        scanf("%d", &N);

        for (i = M; i <= N; i++)
        {
            soma = soma + i;
        }

        printf("A soma dos números entre %d e %d é: %d. \n\n", M, N, soma);
        soma = 0;

    } while (M < N);
}
