#include <stdio.h>

int SomaDosDivisores(int n)
{
    int i, soma = 0;

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            soma += i;
        }
    }

    return soma;
}
int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("A soma dos divisores de %d é %d. \n", num, SomaDosDivisores(num));
}
