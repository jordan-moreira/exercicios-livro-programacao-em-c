#include <stdio.h>

void SomaPrimos_EntreXeY(int n1, int n2)
{
    int i, j, cont = 0, soma = 0;

    for (i = n1; i <= n2; i++)
    {
        cont = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cont++;
            }
        }
        if (cont <= 2)
        {
            soma += i;
        }
    }

    printf("Soma dos numeros primos entre %d e %d é %d. \n\n", n1, n2, soma);
}

int main()
{
    int x, y;

    void SomaPrimos_EntreXeY(int n1, int n2);

    do
    {
        do
        {
            printf("Digite um valor para X: ");
            scanf("%d", &x);
            printf("Digite um valor para Y: ");
            scanf("%d", &y);

            if (x > y)
            {
                printf("X precisa ser menor que Y. \n\n");
            }
            else if (x == y)
            {
                printf("Programa encerrado. \n\n");
            }
            else
            {
                SomaPrimos_EntreXeY(x, y);
            }
        } while (x < y);
    } while (x != y);
}
