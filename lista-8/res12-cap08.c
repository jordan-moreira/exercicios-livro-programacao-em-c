#include <stdio.h>

int NumerosPerfeitos(int vetor[])
{
    int soma = 0, num = 1;
    int i, c = 0;

    do
    {
        for (i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                soma += i;
            }
        }

        if (soma == num)
        {
            vetor[c] = soma;
            c++;
        }

        num++;
        soma = 0;

    } while (c != 3);
}

int main()
{
    int i, vetor[3];
    NumerosPerfeitos(vetor[3]);

    for (i = 0; i < 3; i++)
    {
        printf("RES[%d] = %d \n", i, vetor[i]);
    }
}
