#include <stdio.h>

int contar_pares(int X[])
{
    int i, quantidade_pares = 0;

    for (i = 0; i < 15; i++)
    {
        if (X[i] % 2 == 0)
        {
            quantidade_pares++;
        }
    }

    return quantidade_pares;
}

// Exemplo de uso da sub-rotina
int main()
{
    int vetor_X[15] = {2, 5, 8, 12, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65};
    int qtd_pares;

    qtd_pares = contar_pares(vetor_X);

    printf("Quantidade de pares: %d\n", qtd_pares);

    return 0;
}
