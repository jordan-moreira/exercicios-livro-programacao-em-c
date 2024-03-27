#include <stdio.h>

int SomaEntreAeB(int n1, int n2, int n3)
{
    int i, j, soma = 0;

    for (i = n2 + 1; i < n3; i++)
    {
        if (i % n1 == 0)
        {
            soma += i;
        }
    }
    return soma;
}

int main()
{
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    printf("\nSoma dos numeros entre %d e %d que são divisiveis por %d é de %d. \n", b, c, a, SomaEntreAeB(a, b, c));
}
